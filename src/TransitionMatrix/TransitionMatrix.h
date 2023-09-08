#ifndef TRANSITION_MATRIX_H
#define TRANSITION_MATRIX_H

#include <iostream>
#include <map>

#include "SemanticActions.h"

using namespace std;



enum State {
    NEW_LINE,
    BL_TAB,
    END_FILE,
    LITERAL, // { } ( ) , ;
    MINUS,
    SLASH,
    PLUS,
    EQUAL,
    LESS_THAN,
    GREATER_THAN,
    EXCLAMATION,
    HASH,
    ASTERISK,
    DOT,
    LETTER,
    LOWERCASE_d,
    LOWERCASE_u,
    LOWERCASE_i,
    LOWERCASE_s,
    UPPER_LETTER,
    UPPERCASE_D,
    DIGIT,
    UNDERSCORE,
    FINAL,
    UNKNOWN,
};
class TransitionMatrix {
private:
    const static int ROWS = 19;
    int matrix[UNKNOWN][UNKNOWN];

                // Acciones semanticas
    Token * (*SA01)(TransitionMatrix*, char &) = &SemanticActions::initialize_token; // Iniciar token
    Token * (*SA02)(TransitionMatrix*, char &) = &SemanticActions::add_character; // Agregar caracter
    Token * (*SA03)(TransitionMatrix*, char &) = &SemanticActions::end_string; // Es string
    Token * (*SA04)(TransitionMatrix*, char &) = &SemanticActions::end_comment; // Es comentario, descarta caracteres
    Token * (*SA05)(TransitionMatrix*, char &) = &SemanticActions::end_double; // Es double
    Token * (*SA06)(TransitionMatrix*, char &) = &SemanticActions::end_id; // Es identificador
    Token * (*SA07)(TransitionMatrix*, char &) = &SemanticActions::end_reserved; // Es palabra reservada
    Token * (*SA08)(TransitionMatrix*, char &) = &SemanticActions::end_none; // Es constante int
    Token * (*SA09)(TransitionMatrix*, char &) = &SemanticActions::end_uint; // Es constante uint
    Token * (*SA10)(TransitionMatrix*, char &) = &SemanticActions::end_short; // Es constante short
    Token * (*SA11)(TransitionMatrix*, char &) = &SemanticActions::end_op; // Es operador simple
    Token * (*SA12)(TransitionMatrix*, char &) = &SemanticActions::end_complex_op; // Es operador compuesto
    Token * (*SA13)(TransitionMatrix*, char &) = &SemanticActions::end_symbol; // Es simbolo

    Token * (**matrix_sa[UNKNOWN][UNKNOWN])(TransitionMatrix * t, char & c);


    
    State getState(char) const;
    void setTransition(int, int, int, Token * (**sa)(TransitionMatrix * t, char & c));
    int state = 0;
    string lexeme = "";


    int next(char c);

    void deleteChar();

public:
    map<string,Type> reserved_words;
    TransitionMatrix();
    ~TransitionMatrix();
    void resetLexeme();
    void addChar(char c);
    string getLexeme() const;
    Token * getTransition(char c);
    void printMatrix() const;
};

#endif