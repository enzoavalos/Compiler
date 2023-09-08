#include "SemanticActions.h"
#include "TransitionMatrix.h"

Token * SemanticActions::initialize_token(TransitionMatrix *t, char &c)
{
    printf("Initialize token");
    t->resetLexeme();
    t->addChar(c);
    return NULL;
}

Token * SemanticActions::add_character(TransitionMatrix *t, char &c)
{
    t->addChar(c);
    return NULL;
}

Token * SemanticActions::end_string(TransitionMatrix *t, char &c)
{
    printf("String %d", t->getLexeme());
    Token * token = new Token(TOKEN_STRING, t->getLexeme(), 0);
    return token;
}

Token *SemanticActions::end_comment(TransitionMatrix *t, char &c)
{
    // t->resetLexeme();
    return NULL;
}

Token *SemanticActions::end_double(TransitionMatrix *t, char &c)
{
    string number = t->getLexeme();
    int index = number.find('D');
    if(index == string::npos)
        index = number.find('d');
    if(index != string::npos)
        number = number.replace(index, 1, "e");
    try {
        double value = stod(number);
        return new Token(TOKEN_DOUBLE, number, 0);
    } catch (exception e) {
        printf("Error double");
        return NULL;
    }
    return NULL;
}

Token *SemanticActions::end_id(TransitionMatrix *t, char &c)
{
    string value = t->getLexeme();
    return new Token(TOKEN_ID, value, 0);
}

Token *SemanticActions::end_reserved(TransitionMatrix *t, char &c)
{
    string value = t->getLexeme();
    auto result = t->reserved_words.find(value);
    if(result != t->reserved_words.end())
        return new Token(result->second, NULL, 0);
    else
        cout << "Error, palabra reservada invalida" << endl;
    return NULL;
}

Token *SemanticActions::end_none(TransitionMatrix *t, char &c)
{
    return NULL;
}

Token *SemanticActions::end_uint(TransitionMatrix *t, char &c)
{
    string number = t->getLexeme();
    return new Token(TOKEN_UINT, number, 0);
}

Token *SemanticActions::end_short(TransitionMatrix *t, char &c)
{
    string number = t->getLexeme();
    return new Token(TOKEN_SHORT, number, 0);
}

Token * SemanticActions::end_op(TransitionMatrix *t, char &c) {
    string value = t->getLexeme();
    switch (c)
    {
    case '+':
        return new Token(TOKEN_PLUS, value, 0);
    case '-':
        return new Token(TOKEN_MINUS, value, 0);
    case '=':
        return new Token(TOKEN_ASSIGN, value, 0);
    case '<':
        return new Token(TOKEN_LESS, value, 0);
    case '>':
        return new Token(TOKEN_GREATER, value, 0);
    case '!':
        return new Token(TOKEN_NOT_EQUAL, value, 0);
    default:
        return NULL;
    }
}

Token * SemanticActions::end_complex_op(TransitionMatrix *t, char &c) {
    string value = t->getLexeme();

    if (value == "!=")
        return new Token(TOKEN_NOT_EQUAL, value, 0);
    
    if (value == "+=")
        return new Token(TOKEN_PLUS_EQUAL, value, 0);

    if (value == "<=")
        return new Token(TOKEN_LESS_EQUAL, value, 0);
    
    if (value == ">=")
        return new Token(TOKEN_GREATER_EQUAL, value, 0);

    if (value == "==")
        return new Token(TOKEN_EQUAL, value, 0);

    return NULL;

}

Token * SemanticActions::end_symbol(TransitionMatrix *t, char &c) {
    return NULL;
}