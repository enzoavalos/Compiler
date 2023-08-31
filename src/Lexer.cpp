#include "Lexer.h"
#include "Token.h"
#include "Token.cpp"

Lexer::Lexer(string input)
{
    this->source = input;
    this->line = 1;
    this->start = 0;
    this->current = 0;
    this->initializeReservedWords();
    this->symbolTable = SymbolTable();
}

Lexer::~Lexer(){
}

void Lexer::initializeReservedWords(){
    this->reserved_words.insert(pair<string,Type>("IF",TOKEN_IF));
    this->reserved_words.insert(pair<string,Type>("ELSE",TOKEN_ELSE));
    this->reserved_words.insert(pair<string,Type>("END_IF",TOKEN_END_IF));
    this->reserved_words.insert(pair<string,Type>("PRINT",TOKEN_PRINT));
    this->reserved_words.insert(pair<string,Type>("CLASS",TOKEN_CLASS));
    this->reserved_words.insert(pair<string,Type>("VOID",TOKEN_VOID));
    this->reserved_words.insert(pair<string,Type>("FOR",TOKEN_FOR));
    this->reserved_words.insert(pair<string,Type>("IN",TOKEN_IN));
    this->reserved_words.insert(pair<string,Type>("RANGE",TOKEN_RANGE));
    this->reserved_words.insert(pair<string,Type>("IMPL",TOKEN_IMPL));
    this->reserved_words.insert(pair<string,Type>("INTERFACE",TOKEN_INTERFACE));
    this->reserved_words.insert(pair<string,Type>("IMPLEMENT",TOKEN_IMPLEMENT));
    this->reserved_words.insert(pair<string,Type>("SHORT",TOKEN_SHORT));
    this->reserved_words.insert(pair<string,Type>("UINT",TOKEN_UINT));
    this->reserved_words.insert(pair<string,Type>("DOUBLE",TOKEN_DOUBLE));
}

void Lexer::run()
{
    while (!this->isAtEnd()) {
        this->start = this->current;
        this->scanToken();
    }
    for (int i = 0; i < this->tokens.size(); i++) {
        cout << this->tokens[i]->getType() << " " << this->tokens[i]->getLexeme() << 
        " en linea " << this->tokens[i]->getLine() << endl;
    }
    cout << "\n";
    this->symbolTable.printTable();
}

bool Lexer::isAtEnd() {
    return this->current >= this->source.length();
}

char Lexer::advance() {
    this->current++;
    return this->source[this->current - 1];
}

void Lexer::addToken(Type type) {
    addToken(type, "");
}

void Lexer::addToken(Type type, string lexeme) {
    string text = this->source.substr(start, this->current - start);
    Token *newToken = new Token(type, lexeme, this->line);
    this->tokens.push_back(newToken);
    if(newToken->getLexeme().size() > 0)
        this->addSymbol(newToken);
}

bool Lexer::match(char expected) {
    if (this->isAtEnd()) return false;
    if (this->source[this->current] != expected) return false;
    this->current++;
    return true;
}

char Lexer::checkNext() {
    if (this->isAtEnd()) return '\0';
    return this->source[this->current];
}

void Lexer::isString() {
    char next;
    while ((next = this->checkNext()) != '#' && next != '\n')
        this->advance();
    
    if(this->checkNext() != '#'){
        cout << "Error, String sin terminar en linea " << this->line << endl;
        return;
    }

    this->advance();
    string value = this->source.substr(this->start + 1, this->current - this->start -2);
    this->addToken(TOKEN_STRING, value);
}

void Lexer::isComment(){
    while(this->checkNext() != '\n' && !this->isAtEnd())
        this->advance();
}

void Lexer::isIdentifier(){
    char current;
    while((current = this->checkNext()) == '_' || islower(current))
        advance();
    
    string value = this->source.substr(this->start, this->current - this->start);
    this->addToken(TOKEN_ID, value);
}

void Lexer::isReservedWord(){
    char current;
    while((current = this->checkNext()) == '_' || isupper(current))
        advance();
    
    string value = this->source.substr(this->start, this->current - this->start);
    auto result = this->reserved_words.find(value);
    if(result != this->reserved_words.end())
        this->addToken(result->second);
    else
        cout << "Error, palabra reservada invalida en linea " << this->line << endl;
}

void Lexer::addSymbol(Token* token){
    this->symbolTable.addSymbol(token);
}

void Lexer::isConstantInt(){
    while(isdigit(this->checkNext()))
        advance();
    
    //en caso que sea doble
    if(match('.')){
        isConstantDouble();
        return;
    }

    if(match('_')){
        if(match('s')){
            string value = this->source.substr(this->start, this->current - this->start -2);
            if (isSmallIntRange(value))
                this->addToken(TOKEN_SHORT, value);
            else
                cout << "Error, constante de 8 bits entera fuera de rango en linea " << this->line << endl;
            return;
        }
        if(match('u')){
            if(match('i')){
                string value = this->source.substr(this->start, this->current - this->start -3);
                if (isUnsignedIntRange(value))
                    this->addToken(TOKEN_UINT, value);
                else
                    cout << "Error, constante entera sin signo de 16 bits fuera de rango en linea " << this->line << endl;
                return;
            }
        }
    }

    cout << "Error, constante entera invalida en linea " << this->line << endl;
}

void Lexer::isConstantDouble(){
    while(isdigit(this->checkNext()))
        advance();

    if(match('D') || match('d')) {
        if(match('+') || match('-')){
            while(isdigit(this->checkNext()))
                advance();
        }else{
            cout << "Error, signo de exponente de constante doble faltante, linea " << this->line << endl;
            return;
        }
    }

    string value = this->source.substr(this->start, this->current - this->start);
    if (isDoubleInRange(value))
        this->addToken(TOKEN_DOUBLE, value);
    else
        cout << "Error, constante de doble precision fuera de rango en linea " << this->line << endl;
    return;
}

bool Lexer::isSmallIntRange(string number) {
    int value = stoi(number);
    return value >= -128 && value <= 127;
}

bool Lexer::isUnsignedIntRange(string number) {
    unsigned int value = stoi(number);
    return value >= 0 && value <= 4294967295;
}

bool Lexer::isDoubleInRange(string number) {
    int index = number.find('D');
    if(index == string::npos)
        index = number.find('d');
    if(index != string::npos)
        number = number.replace(index, 1, "e");
    try {
        double value = stod(number);
        return true;
    } catch (exception e) {
        return false;
    }
}

void Lexer::scanToken() {
    char c = advance();
    switch(c) {
        case ' ': break;
        case '\r': break;
        case '\t': break;
        case '\n': this->line++; break;
        case '\0': addToken(TOKEN_EOF); break;
        case '(': addToken(TOKEN_LEFT_PAREN); break;
        case ')': addToken(TOKEN_RIGHT_PAREN); break;
        case '{': addToken(TOKEN_LEFT_BRACE); break;
        case '}': addToken(TOKEN_RIGHT_BRACE); break;
        case ',': addToken(TOKEN_COMMA); break;
        case '-': addToken(TOKEN_MINUS); break;
        case ';': addToken(TOKEN_SEMICOLON); break;
        case '/': addToken(TOKEN_SLASH); break;
        case '+': 
            match('=') ? addToken(TOKEN_PLUS_EQUAL) : addToken(TOKEN_PLUS);
            break;
        case '=':
            match('=') ? addToken(TOKEN_EQUAL) : addToken(TOKEN_ASSIGN);
            break;
        case '<':
            match('=') ? addToken(TOKEN_LESS_EQUAL) : addToken(TOKEN_LESS);
            break;
        case '>':
            match('=') ? addToken(TOKEN_GREATER_EQUAL) : addToken(TOKEN_GREATER);
            break;
        case '!': 
            if (match('!')) addToken(TOKEN_NOT_EQUAL);
            break;
        case '*': match('*') ? isComment() : addToken(TOKEN_MULTIPLY); break;
        case '#': isString(); break;
        case '.':
            if(isdigit(checkNext()))
                isConstantDouble();
            else
                addToken(TOKEN_DOT);
            break;
        default:{
            if(islower(c) or c == '_'){
                isIdentifier();
                break;    
            } else if(isupper(c)){
                isReservedWord();
                break;
            }else if(isdigit(c)){
                isConstantInt();
                break;
            }else if(c == '.'){
                isConstantDouble();
                break;
            }
            cout << "Error, caracter " << c << " no reconocido en linea " << this->line << endl;
            break;
        }
    }
}