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
    LITERAL, // { } ( ) , ; :
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
    UNKNOWN,
    FINAL = -1,
};

class TransitionMatrix {
    private:
        const static int STATES = 19; //cantidad de estados
        int matrix[STATES][UNKNOWN];
        Token * (**matrix_sa[STATES][UNKNOWN])(TransitionMatrix * t, char & c);
        int line = 1;
        int state = 0;
        string lexeme = "";
        map<string,Type> reserved_words;
        /*Variable usada para denotar cuando un token termina de leerse con un caracter inesperado, con lo que hay que tenerlo en cuenta
        para cuando se analice el proximo token*/
        bool read_last = false;
        // Acciones semanticas
        Token * (*SA01)(TransitionMatrix*, char &) = &SemanticActions::initialize_token; // Iniciar token
        Token * (*SA02)(TransitionMatrix*, char &) = &SemanticActions::add_character; // Agregar caracter
        Token * (*SA03)(TransitionMatrix*, char &) = &SemanticActions::end_string; // Es string
        Token * (*SA04)(TransitionMatrix*, char &) = &SemanticActions::end_comment; // Es comentario, descarta caracteres
        Token * (*SA05)(TransitionMatrix*, char &) = &SemanticActions::end_double; // Es double
        Token * (*SA06)(TransitionMatrix*, char &) = &SemanticActions::end_id; // Es identificador
        Token * (*SA07)(TransitionMatrix*, char &) = &SemanticActions::end_reserved; // Es palabra reservada
        Token * (*SA08)(TransitionMatrix*, char &) = &SemanticActions::discard_character; // Es espacio, borrar
        Token * (*SA09)(TransitionMatrix*, char &) = &SemanticActions::end_uint; // Es constante uint
        Token * (*SA10)(TransitionMatrix*, char &) = &SemanticActions::end_short; // Es constante short
        Token * (*SA11)(TransitionMatrix*, char &) = &SemanticActions::end_op; // Es operador simple
        Token * (*SA12)(TransitionMatrix*, char &) = &SemanticActions::end_complex_op; // Es operador compuesto
        Token * (*SA13)(TransitionMatrix*, char &) = &SemanticActions::end_symbol; // Es simbolo

        State getState(char) const;
        void setTransition(int, int, int, Token * (**sa)(TransitionMatrix * t, char & c));
        int next(char c);
        void deleteChar();

    public:
        TransitionMatrix();
        ~TransitionMatrix();
        void resetLexeme();
        void addChar(char c);
        void setReadLast(bool);
        string getLexeme() const;
        Token * getTransition(char c, bool &reset);
        void printMatrix() const;
        int getLine() const;
        Token * getReservedWord(string) const;
};

#endif