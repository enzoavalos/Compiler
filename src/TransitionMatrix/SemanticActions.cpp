#include "SemanticActions.h"
#include "TransitionMatrix.h"

Token * SemanticActions::initialize_token(TransitionMatrix *t, char &c)
{
    t->read_last = false;
    t->resetLexeme();
    t->addChar(c);
    return NULL;
}

Token * SemanticActions::add_character(TransitionMatrix *t, char &c)
{
    t->read_last = false;
    t->addChar(c);
    return NULL;
}

Token * SemanticActions::end_string(TransitionMatrix *t, char &c)
{
    t->read_last = false;
    t->addChar(c);
    Token * token = new Token(TOKEN_STRING, t->getLexeme(), t->getLine());
    return token;
}

Token *SemanticActions::end_comment(TransitionMatrix *t, char &c)
{
    // t->resetLexeme();
    return NULL;
}

Token *SemanticActions::end_double(TransitionMatrix *t, char &c)
{
    t->read_last = true;
    string number = t->getLexeme();
    int index = number.find('D');
    if(index == string::npos)
        index = number.find('d');
    if(index != string::npos)
        number = number.replace(index, 1, "e");
    try {
        double value = stod(number);
        return new Token(TOKEN_DOUBLE, number, t->getLine());
    } catch (exception e) {
        printf("Error double");
        return NULL;
    }
    return NULL;
}

Token *SemanticActions::end_id(TransitionMatrix *t, char &c)
{
    t->read_last = true;
    string value = t->getLexeme();
    return new Token(TOKEN_ID, value, t->getLine());
}

Token *SemanticActions::end_reserved(TransitionMatrix *t, char &c)
{
    t->read_last = true;
    string value = t->getLexeme();
    auto result = t->reserved_words.find(value);
    if(result != t->reserved_words.end())
        return new Token(result->second, value, t->getLine());
    else
        cout << "Error, palabra reservada invalida" << endl;
    return NULL;
}

Token *SemanticActions::end_none(TransitionMatrix *t, char &c)
{   
    printf("LINE\n");
    t->line++;
    return NULL;
}

Token *SemanticActions::end_uint(TransitionMatrix *t, char &c)
{
    t->read_last = false;
    t->addChar(c);
    string number = t->getLexeme();

    unsigned int value = stoi(number);
    if (value >= 0 && value <= 4294967295) {
        return new Token(TOKEN_SHORT, number, t->getLine());
    } else {
        printf("Error uint");
        return NULL;
    }
    
    
}

Token *SemanticActions::end_short(TransitionMatrix *t, char &c)
{
    t->read_last = false;
    t->addChar(c);
    string number = t->getLexeme();

    int value = stoi(number);
    if (value >= -128 && value <= 127) {
        return new Token(TOKEN_UINT, number, t->getLine());
    } else {
        printf("Error short");
        return NULL;
    }

    
}

Token * SemanticActions::end_op(TransitionMatrix *t, char &c) {
        t->read_last = true;
    string value = t->getLexeme();

    // Revisar, por ahora anda
    c = value[0];
    switch (c)
    {
    case '+':
        return new Token(TOKEN_PLUS, value, t->getLine());
    case '-':
        return new Token(TOKEN_MINUS, value, t->getLine());
    case '=':
        return new Token(TOKEN_ASSIGN, value, t->getLine());
    case '<':
        return new Token(TOKEN_LESS, value, t->getLine());
    case '>':
        return new Token(TOKEN_GREATER, value, t->getLine());
    case '!':
        return new Token(TOKEN_NOT_EQUAL, value, t->getLine());
    default:
        return NULL;
    }
}

Token * SemanticActions::end_complex_op(TransitionMatrix *t, char &c) {
        t->read_last = false;
        t->addChar(c);
    string value = t->getLexeme();

    if (value == "!=")
        return new Token(TOKEN_NOT_EQUAL, value, t->getLine());
    
    if (value == "+=")
        return new Token(TOKEN_PLUS_EQUAL, value, t->getLine());

    if (value == "<=")
        return new Token(TOKEN_LESS_EQUAL, value, t->getLine());
    
    if (value == ">=")
        return new Token(TOKEN_GREATER_EQUAL, value, t->getLine());

    if (value == "==")
        return new Token(TOKEN_EQUAL, value, t->getLine());

    return NULL;

}

Token * SemanticActions::end_symbol(TransitionMatrix *t, char &c) {
    t->read_last = false;
    t->addChar(c);
    string value = t->getLexeme();

    switch (c)
    {
    case '(':
        return new Token(TOKEN_LEFT_PAREN, value, t->getLine());
    case ')':
        return new Token(TOKEN_RIGHT_PAREN, value, t->getLine());
    case '{':
        return new Token(TOKEN_LEFT_BRACE, value, t->getLine());
    case '}':
        return new Token(TOKEN_RIGHT_BRACE, value, t->getLine());
    case ',':
        return new Token(TOKEN_COMMA, value, t->getLine());
    case ';':
        return new Token(TOKEN_SEMICOLON, value, t->getLine());
    case '/':
        return new Token(TOKEN_SLASH, value, t->getLine());
    case '*':
        return new Token(TOKEN_MULTIPLY, value, t->getLine());
    case '.':
        return new Token(TOKEN_DOT, value, t->getLine());
    default:
        return NULL;
    }

}