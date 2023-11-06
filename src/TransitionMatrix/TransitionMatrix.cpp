#include "TransitionMatrix.h"
#include "../Parser/gramatica.tab.hpp"

TransitionMatrix::TransitionMatrix()
{
    this->reserved_words.insert(pair<string,int>("IF", IF));
    this->reserved_words.insert(pair<string,int>("ELSE", ELSE));
    this->reserved_words.insert(pair<string,int>("END_IF",END_IF));
    this->reserved_words.insert(pair<string,int>("PRINT",PRINT));
    this->reserved_words.insert(pair<string,int>("CLASS",CLASS));
    this->reserved_words.insert(pair<string,int>("VOID",VOID));
    this->reserved_words.insert(pair<string,int>("FOR",FOR));
    this->reserved_words.insert(pair<string,int>("IN",IN));
    this->reserved_words.insert(pair<string,int>("RANGE",RANGE));
    this->reserved_words.insert(pair<string,int>("IMPL",IMPL));
    this->reserved_words.insert(pair<string,int>("INTERFACE",INTERFACE));
    this->reserved_words.insert(pair<string,int>("IMPLEMENT",IMPLEMENT));
    this->reserved_words.insert(pair<string,int>("SHORT",SHORT));
    this->reserved_words.insert(pair<string,int>("UINT",UINT));
    this->reserved_words.insert(pair<string,int>("DOUBLE",DOUBLE));
    this->reserved_words.insert(pair<string,int>("RETURN",RETURN));

    // Se identifica el estado final con FINAL
    for (int i = 0; i <= STATES; i++)
    {
        for (int j = 0; j <= UNKNOWN; j++)
        {
            this->setTransition(i, j, FINAL, &SA14);
        }
    }

    // DOUBLES
    this->setTransition(0, DOT, 1, &SA01);
    this->setTransition(1, DIGIT, 2, &SA02);
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == DIGIT)
            continue;
        this->setTransition(1, i, FINAL, &SA13);
    }
    this->setTransition(2, DIGIT, 2, &SA02);
    this->setTransition(2, LOWERCASE_d, 3, &SA02);
    this->setTransition(2, UPPERCASE_D, 3, &SA02);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == DIGIT || i == LOWERCASE_d || i == UPPERCASE_D)
            continue;
        this->setTransition(2, i, FINAL, &SA05);
    }

    this->setTransition(3, PLUS, 4, &SA02);
    this->setTransition(3, MINUS, 4, &SA02);
    this->setTransition(4, DIGIT, 5, &SA02);
    this->setTransition(5, DIGIT, 5, &SA02);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == DIGIT)
            continue;
        this->setTransition(5, i, FINAL, &SA05);
    }

    // ENTEROS
    this->setTransition(0, DIGIT, 6, &SA01);
    this->setTransition(6, DIGIT, 6, &SA02);
    this->setTransition(6, DOT, 2, &SA02);
    this->setTransition(6, UNDERSCORE, 7, &SA02);
    this->setTransition(7, LOWERCASE_u, 8, &SA02);
    this->setTransition(7, LOWERCASE_s, FINAL, &SA10);
    this->setTransition(8, LOWERCASE_i, FINAL, &SA09);

    // IDENTIFIER
    this->setTransition(0, LETTER, 9, &SA01);
    this->setTransition(0, UNDERSCORE, 9, &SA01);
    this->setTransition(9, LETTER, 9, &SA02);
    this->setTransition(9, DIGIT, 9, &SA02);
    this->setTransition(9, UNDERSCORE, 9, &SA02);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == LETTER || i == DIGIT || i == UNDERSCORE)
            continue;
        this->setTransition(9, i, FINAL, &SA06);
    }

    // RESERVED WORDS
    this->setTransition(0, UPPER_LETTER, 10, &SA01);
    this->setTransition(10, UPPER_LETTER, 10, &SA02);
    this->setTransition(10, UNDERSCORE, 10, &SA02);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == UPPER_LETTER || i == UNDERSCORE)
            continue;
        this->setTransition(10, i, FINAL, &SA07);
    }

    // OPERADORES
    this->setTransition(0, PLUS, 11, &SA01);
    this->setTransition(11, EQUALEQUAL, FINAL, &SA12);

    this->setTransition(0, EQUALEQUAL, 12, &SA01);
    this->setTransition(12, EQUALEQUAL, FINAL, &SA12);

    this->setTransition(0, LESS_THAN, 13, &SA01);
    this->setTransition(13, EQUALEQUAL, FINAL, &SA12);

    this->setTransition(0, GREATER_THAN, 14, &SA01);
    this->setTransition(14, EQUALEQUAL, FINAL, &SA12);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == EQUALEQUAL)
            continue;
        this->setTransition(11, i, FINAL, &SA11);
        this->setTransition(12, i, FINAL, &SA11);
        this->setTransition(13, i, FINAL, &SA11);
        this->setTransition(14, i, FINAL, &SA11);
    }
    this->setTransition(0, EXCLAMATION, 15, &SA01);
    this->setTransition(15, EXCLAMATION, FINAL, &SA12);



    // LITERALES
    this->setTransition(0, LITERAL, FINAL, &SA13);
    this->setTransition(0, MINUS, FINAL, &SA13);
    this->setTransition(0, SLASH, FINAL, &SA13);

    // STRINGS
    this->setTransition(0, HASH, 16, &SA08);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == HASH || i == NEW_LINE)
            continue;
        this->setTransition(16, i, 16, &SA02);
    }
    this->setTransition(16, HASH, FINAL, &SA03);
    // Strings con \n antes del # final se eliminan
    this->setTransition(16, NEW_LINE, FINAL, &SA03);

    // COMENTARIOS
    this->setTransition(0, ASTERISK, 17, &SA01);
    this->setTransition(17, ASTERISK, 18, &SA08);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == ASTERISK)
            continue;
        this->setTransition(17, i, FINAL, &SA11);
    }

    this->setTransition(18, NEW_LINE, 0, &SA04);
    for (int i = 0; i <= UNKNOWN; i++)
    {
        if (i == NEW_LINE)
            continue;
        this->setTransition(18, i, 18, &SA08);
    }

    // NEW LINE - TAB - EOF
    this->setTransition(0, NEW_LINE, 0, NULL);
    this->setTransition(0, BL_TAB, 0, NULL);
    this->setTransition(0, END_FILE, 0, NULL);
}

TransitionMatrix::~TransitionMatrix(){
}

void TransitionMatrix::addChar(char c)
{
    this->lexeme += c;
}

void TransitionMatrix::deleteChar()
{
    if (this->lexeme.length() > 0)
        this->lexeme.pop_back();

}

void TransitionMatrix::resetLexeme()
{
    this->lexeme = "";
}

string TransitionMatrix::getLexeme() const
{
    return this->lexeme;
}

void TransitionMatrix::setTransition(int row, int column, int value, Token * (**sa)(TransitionMatrix *t, char &c))
{
    this->matrix[row][column] = value;
    this->matrix_sa[row][column] = sa;
}

State TransitionMatrix::getState(char c) const
{
    State state = UNKNOWN;

    switch (c)
    {
    case '.':
        state = DOT;
        break;
    case 'd':
        if (this->state == 2)
            state = LOWERCASE_d;
        else
            state = LETTER;
        break;
    case 'D':
        if (this->state == 2)
            state = UPPERCASE_D;
        else
            state = UPPER_LETTER;
        break;
    case 'u':
        if (this->state == 7)
            state = LOWERCASE_u;
        else
            state = LETTER;
        break;
    case 'i':
        if (this->state == 8)
            state = LOWERCASE_i;
        else
            state = LETTER;
        break;
    case 's':
        if (this->state == 7)
            state = LOWERCASE_s;
        else
            state = LETTER;
        break;
    case '+':
        state = PLUS;
        break;
    case '-':
        state = MINUS;
        break;
    case '=':
        state = EQUALEQUAL;
        break;
    case '<':
        state = LESS_THAN;
        break;
    case '>':
        state = GREATER_THAN;
        break;
    case '!':
        state = EXCLAMATION;
        break;
    case '#':
        state = HASH;
        break;
    case '*':
        state = ASTERISK;
        break;
    case '/':
        state = SLASH;  
        break;
    case '\n':
        state = NEW_LINE;
        break;
    case '{':
    case '}':
    case '(':
    case ')':
    case ',':
    case ';':
    case ':':
        state = LITERAL;
        break;
    case '\r':
    case ' ':
    case '\t':
        state = BL_TAB;
        break;
    case '\0':
        state = END_FILE;
        break;
    case '_':
        state = UNDERSCORE;
        break;
    default:
    {
        if (isdigit(c))
        {
            state = DIGIT;
            break;
        }
        else if (isalpha(c))
        {
            if (isupper(c))
            {
                state = UPPER_LETTER;
                break;
            }
            else if(islower(c))
            {
                state = LETTER;
                break;
            }
        }
    }
    }

    return state;
}



Token * TransitionMatrix::getTransition(char c, bool &reset) {
    State state = this->getState(c);
    int next = this->matrix[this->state][state];
    Token * (**sa)(TransitionMatrix *t, char &c) = this->matrix_sa[this->state][state];
    if (sa != NULL){
        Token * token = (*sa)(this, c);
        if (token != NULL){
            if(next == FINAL){
                if (state == NEW_LINE)
                    this->line++;
                this->state = 0;
                this->resetLexeme();
                reset = this->read_last;
                return token;
            }
            delete token;
        }
    }

    if (state == NEW_LINE)
        this->line++;
    
    if (next == FINAL) {
        if (this->state == END_FILE) {
            reset = false;
            return NULL;
        }
        this->state = 0;
        this->resetLexeme();
        this->deleteChar();
    } else
        this->state = next;

    return NULL;
}

int TransitionMatrix::getLine()
{
    return line;
}

void TransitionMatrix::setReadLast(bool newValue){
    this->read_last = newValue;
}

Token * TransitionMatrix::getReservedWord(string value) const{
    auto result = this->reserved_words.find(value);
    if(result != this->reserved_words.end())
        return new Token(result->second, "", this->getLine());
    else
        return NULL;
}