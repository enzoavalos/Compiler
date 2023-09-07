#include "TransitionMatrix.h"

TransitionMatrix::TransitionMatrix() {
    int total = FINAL;
    // En un momento pense que si con -1 identificas que no hay una transicion valida
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < total; j++) {
            this->matrix[i][j] = -1;
        }
    }

    // La idea es establecer las transiciones desde un estado, con un caracter, hacia otro estado y con una accion semantica

    // Faltaria definir los errores y los finales

    // Double
    this->setTransition(0, DOT, 1, &SA01);
    this->setTransition(1, DIGIT, 2, &SA02);
    this->setTransition(2, DIGIT, 2, &SA02);
    this->setTransition(2, d, 3, &SA02);
    this->setTransition(2, D, 3, &SA02);
    this->setTransition(3, PLUS, 4, &SA02);
    this->setTransition(3, MINUS, 4, &SA02);
    this->setTransition(4, DIGIT, 5, &SA02);
    this->setTransition(5, DIGIT, 5, &SA02);
    this->setTransition(6, DOT, 2, &SA05);
    
    // Numbers  
    this->setTransition(0, DIGIT, 6, &SA01);
    this->setTransition(6, DIGIT, 6, &SA02);
    this->setTransition(6, UNDERSCORE, 7, &SA02);
    this->setTransition(7, u, 8, &SA02);
    this->setTransition(8, i, -1, &SA09);

    // Identifier
    this->setTransition(0, LETTER, 9, &SA01);
    this->setTransition(0, UNDERSCORE, 9, &SA01);
    this->setTransition(9, LETTER, 9, &SA02);
    this->setTransition(9, DIGIT, 9, &SA02);
    this->setTransition(9, UNDERSCORE, 9, &SA02);

    // Reserved words
    this->setTransition(0, UPPER_LETTER, 10, &SA01);
    this->setTransition(10, UPPER_LETTER, 10, &SA02);
    this->setTransition(10, UNDERSCORE, 10, &SA02);

    // Symbols
    this->setTransition(0, PLUS, 11, &SA02);
    
    this->setTransition(0, EQUAL, 12, &SA02);

    this->setTransition(0, LESS_THAN, 13, &SA02);

    this->setTransition(0, GREATER_THAN, 14, &SA02);

    this->setTransition(0, EXCLAMATION, 15, &SA02);

    // Strings
    this->setTransition(0, HASH, 16, &SA01);
    this->setTransition(16, HASH, 16, &SA02);
    this->setTransition(16, HASH, FINAL, &SA03);

    // Comments
    this->setTransition(0, ASTERISK, 17, &SA01);
    this->setTransition(17, ASTERISK, 18, &SA02);

    // New line
    this->setTransition(0, NEW_LINE, 0, &SA01);



}

int TransitionMatrix::*SA01(TransitionMatrix* t, char &c) {
    t->resetLexeme();
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA02(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA03(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA04(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA05(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA06(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA07(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA08(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

int TransitionMatrix::*SA09(TransitionMatrix* t, char &c) {
    t->addChar(c);
    return NULL;
}

void TransitionMatrix::setTransition(int row, int column, int value, int (**sa)(TransitionMatrix * t, char & c)) {
    this->matrix[row][column] = value;
    this->matrix_sa[row][column] = sa;
}

State TransitionMatrix::getState(char c) const {
    State state;

    switch(c) {
        case '.': state = DOT; break;
        case 'd': state = d; break;
        case 'D': state = D; break;
        case 'u': state = u; break;
        case 'i': state = i; break;
        case 's': state = s; break;
        case '+': state = PLUS; break;
        case '-': state = MINUS; break;
        case '=': state = EQUAL; break;
        case '<': state = LESS_THAN; break;
        case '>': state = GREATER_THAN; break;
        case '!': state = EXCLAMATION; break;
        case '#': state = HASH; break;
        case '*': state = ASTERISK; break;
        case '\n': state = NEW_LINE; break;
        default: {
            if (isdigit(c)) {
                state = DIGIT;
            } else if (isalpha(c)) {
                if (isupper(c)) {
                    state = UPPER_LETTER;
                } else {
                    state = LETTER;
                }
            } else if (c == '_') {
                state = UNDERSCORE;
            } else {
                state = SYMBOL;
            }
        }
    }

    return state;
}

void TransitionMatrix::addChar(char c) {
    this->lexeme += c;
}

void TransitionMatrix::resetLexeme() {
    this->lexeme = "";
}