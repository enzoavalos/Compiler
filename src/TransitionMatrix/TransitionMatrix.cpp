#include "TransitionMatrix.h"

TransitionMatrix::TransitionMatrix()
{

    this->line = 1;


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

    // En un momento pense que si con -1 identificas que no hay una transicion valida
    for (int i = 0; i < UNKNOWN; i++)
    {
        for (int j = 0; j < UNKNOWN; j++)
        {
            this->setTransition(i, j, -1, NULL);
        }
    }


    // La idea es establecer las transiciones desde un estado, con un caracter, hacia otro estado y con una accion semantica

    // Faltaria definir los errores y los finales

    // Double
    this->setTransition(0, DOT, 1, &SA01);
    this->setTransition(1, DIGIT, 2, &SA02);
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == DIGIT)
            continue;
        this->setTransition(1, i, -1, &SA05);
    }

    this->setTransition(2, DIGIT, 2, &SA02);
    this->setTransition(2, LOWERCASE_d, 3, &SA02);
    this->setTransition(2, UPPERCASE_D, 3, &SA02);
    // Para todos los caracteres que no son digito, d o D. Transicion a estado final simbolo
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == DIGIT || i == LOWERCASE_d || i == UPPERCASE_D)
            continue;
        this->setTransition(2, i, -1, &SA13);
    }

    this->setTransition(3, PLUS, 4, &SA02);
    this->setTransition(3, MINUS, 4, &SA02);
    this->setTransition(4, DIGIT, 5, &SA02);
    this->setTransition(5, DIGIT, 5, &SA02);
    this->setTransition(6, DOT, 2, &SA05);
    // Para todos los caracteres que no son digito. Transicion a estado final double
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == DIGIT)
            continue;
        this->setTransition(5, i, -1, &SA05);
    }

    // Numbers
    this->setTransition(0, DIGIT, 6, &SA01);
    this->setTransition(6, DIGIT, 6, &SA02);
    // Para todos los caracteres que no son digito. Transicion a estado final double
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == DIGIT)
            continue;
        this->setTransition(6, i, -1, &SA05);
    }

    this->setTransition(6, UNDERSCORE, 7, &SA02);
    this->setTransition(7, LOWERCASE_u, 8, &SA02);
    this->setTransition(7, LOWERCASE_s, -1, &SA10);
    this->setTransition(8, LOWERCASE_i, -1, &SA09);

    // Identifier
    this->setTransition(0, LETTER, 9, &SA01);
    this->setTransition(0, UNDERSCORE, 9, &SA01);
    this->setTransition(9, LETTER, 9, &SA02);
    this->setTransition(9, DIGIT, 9, &SA02);
    this->setTransition(9, UNDERSCORE, 9, &SA02);
    // Para todos los caracteres que no son digito, letra o guion bajo. Transicion a estado final identificador
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == LETTER || i == DIGIT || i == UNDERSCORE)
            continue;
        this->setTransition(9, i, -1, &SA06);
    }

    // Reserved words
    this->setTransition(0, UPPER_LETTER, 10, &SA01);
    this->setTransition(10, UPPER_LETTER, 10, &SA02);
    this->setTransition(10, UNDERSCORE, 10, &SA02);
    // Para todos los caracteres que no son letra o guion bajo. Transicion a estado final palabra reservada
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == UPPER_LETTER || i == UNDERSCORE)
            continue;
        this->setTransition(10, i, -1, &SA07);
    }

    // Operadores
    this->setTransition(0, PLUS, 11, &SA01);
    this->setTransition(11, EQUAL, -1, &SA12);

    this->setTransition(0, EQUAL, 12, &SA01);
    this->setTransition(12, EQUAL, -1, &SA12);

    this->setTransition(0, LESS_THAN, 13, &SA01);
    this->setTransition(13, EQUAL, -1, &SA12);

    this->setTransition(0, GREATER_THAN, 14, &SA01);
    this->setTransition(14, EQUAL, -1, &SA12);
    // Para todos los caracteres que no son operador =. Transicion a estado final operador
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == EQUAL)
            continue;
        this->setTransition(11, i, -1, &SA11);
        this->setTransition(12, i, -1, &SA11);
        this->setTransition(13, i, -1, &SA11);
        this->setTransition(14, i, -1, &SA11);
    }

    this->setTransition(0, EXCLAMATION, 15, &SA02);
    this->setTransition(15, EXCLAMATION, -1, &SA12);

    // Simbolos
    this->setTransition(0, LITERAL, -1, &SA13);

    // Strings
    this->setTransition(0, HASH, 16, &SA01);
    
    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == HASH || i == NEW_LINE)
            continue;
        this->setTransition(16, i, 16, &SA02);
    }

    this->setTransition(16, HASH, -1, &SA03);

    // Comments
    this->setTransition(0, ASTERISK, 17, &SA01);

    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == ASTERISK)
            continue;
        this->setTransition(17, i, -1, &SA04);
    }

    this->setTransition(17, ASTERISK, 18, &SA02);

    for (int i = 0; i < UNKNOWN; i++)
    {
        if (i == NEW_LINE)
            continue;
        this->setTransition(18, i, 18, &SA02);
    }

    this->setTransition(18, NEW_LINE, 0, NULL);

    // New line
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

State TransitionMatrix::getState(char c)
{
    State state;

    switch (c)
    {
    case '.':
        state = DOT;
        break;
    case 'd':
        state = LOWERCASE_d;
        break;
    case 'D':
        state = UPPERCASE_D;
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
        state = EQUAL;
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
    case '\n':
        state = NEW_LINE;
        break;
    case '{':
    case '}':
    case '(':
    case ')':
    case ',':
    case ';':
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
            else
            {
                state = LETTER;
                break;
            }
        }
        state = UNKNOWN; // invalid character
    }
    }

    return state;
}



Token * TransitionMatrix::getTransition(char c, bool &reset) {
    State state = this->getState(c);
    int next = this->matrix[this->state][state];
    // printf("Character: %c\n", c);
    // printf("Next: %d\n", next);
    // printf("Actual: %d\n", this->state);
    // printf("---------\n");
    Token * (**sa)(TransitionMatrix *t, char &c) = this->matrix_sa[this->state][state];

    if (sa != NULL)
    {
        Token * token = (*sa)(this, c);
        if (state == NEW_LINE)
            this->line++;
        if (token != NULL && next == -1)
        {   
            this->state = 0;
            this->resetLexeme();
            // printf("Read last: %d\n", this->read_last);
            reset = this->read_last;
            return token;
        }

        if (token != NULL)
        {
            delete token;
        }
    }

    // Aumentar linea aca y en la if de arriba para todos los casos, no es la mejor opcion pero no se me ocurrio donde hacerlo
    if (state == NEW_LINE)
        this->line++;
    
    if (next == -1) {
        if (this->state == END_FILE) {
            reset = false;
            return NULL;
        }
        this->state = 0;
        this->resetLexeme();
        this->deleteChar();

    } else {
        this->state = next;
    }

    return NULL;
}

int TransitionMatrix::getLine() const
{
    return this->line;
}