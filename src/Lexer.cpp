#include "Lexer.h"

Lexer::Lexer(string input)
{
    this->source = input;
    this->line = 1;
    this->start = 0;
    this->current = 0;
}

void Lexer::run()
{
    while (!this->isAtEnd()) {
        this->start = this->current;
        this->scanToken();
    }
    this->tokens.push_back(new Token(TOKEN_EOF, "", this->line));
    for (int i = 0; i < this->tokens.size(); i++) {
        cout << this->tokens[i]->getType() << " " << this->tokens[i]->getLexeme() << endl;
    }
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
    this->tokens.push_back(new Token(type, lexeme, this->current));
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
    while (this->checkNext() != '#' && !this->isAtEnd()) {
        if (this->checkNext() == '\n') this->line++;
        this->advance();
    }

    if (this->isAtEnd()) {
        cout << "String sin terminar" << endl;
        return;
    }

    this->advance();

    string value = this->source.substr(this->start + 1, this->current - this->start - 2);
    this->addToken(TOKEN_STRING, value);
}

void Lexer::scanToken() {
    char c = advance();
    switch(c) {
        case ' ': break;
        case '\r': break;
        case '\t': break;
        case '\n': this->line++; break;
        case '(': addToken(TOKEN_LEFT_PAREN); break;
        case ')': addToken(TOKEN_RIGHT_PAREN); break;
        case '{': addToken(TOKEN_LEFT_BRACE); break;
        case '}': addToken(TOKEN_RIGHT_BRACE); break;
        case ',': addToken(TOKEN_COMMA); break;
        case '.': addToken(TOKEN_DOT); break;
        case '-': addToken(TOKEN_MINUS); break;
        case '+': addToken(TOKEN_PLUS); break;
        case ';': addToken(TOKEN_SEMICOLON); break;
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
        case '#': isString(); break;
        default:
            cout << "Error " << c << endl;
            break;

    }
}