#ifndef TRANSITION_MATRIX_H
#define TRANSITION_MATRIX_H

#include "../Token.h"
#include <iostream>

using namespace std;

enum State {
    DOT,
    DIGIT,
    LETTER,
    d,
    D,
    u,
    i,
    s,
    UPPER_LETTER,
    SYMBOL, /* / - { } */
    UNDERSCORE,
    PLUS,
    MINUS,
    EQUAL,
    LESS_THAN,
    GREATER_THAN,
    EXCLAMATION,
    HASH,
    ASTERISK,
    NEW_LINE,
    FINAL
};

class TransitionMatrix {
private:
    const static int ROWS = 19;


    // Acciones semanticas
    int (*SA01)(TransitionMatrix*, char &); // Iniciar lexema
    int (*SA02)(TransitionMatrix*, char &); // Agregar caracter
    int (*SA03)(TransitionMatrix*, char &); // Es string
    int (*SA04)(TransitionMatrix*, char &); // Es comentario
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