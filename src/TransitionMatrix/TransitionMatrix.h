#ifndef TRANSITION_MATRIX_H
#define TRANSITION_MATRIX_H

#include "../Token.h"
#include <iostream>

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


    // Acciones semanticas
    int (*SA01)(TransitionMatrix*, char &); // Iniciar token
    int (*SA02)(TransitionMatrix*, char &); // Agregar caracter
    int (*SA03)(TransitionMatrix*, char &); // Es string
    int (*SA04)(TransitionMatrix*, char &); // Es comentario, descarta caracteres
    int (*SA05)(TransitionMatrix*, char &); // Es double
    int (*SA06)(TransitionMatrix*, char &); // Es identificador
    int (*SA07)(TransitionMatrix*, char &); // Es palabra reservada
    int (*SA08)(TransitionMatrix*, char &); // Es constante int
    int (*SA09)(TransitionMatrix*, char &); // Es constante uint
    int (*SA10)(TransitionMatrix*, char &); // Es constante short
    int (*SA11)(TransitionMatrix*, char &); // Es operador simple
    int (*SA12)(TransitionMatrix*, char &); // Es operador compuesto
    

    int matrix[ROWS][FINAL];
    int (**matrix_sa[ROWS][FINAL])(TransitionMatrix * t, char & c);
    
    State getState(char) const;
    void setTransition(int, int, int, int (**sa)(TransitionMatrix * t, char & c));
    int state = 0;
    string lexeme = "";
public:
    TransitionMatrix();
    ~TransitionMatrix();
    int getTransition(int, int) const;
    int next(char c);
    void printMatrix() const;
    void addChar(char c);
    void resetLexeme();
};

#endif