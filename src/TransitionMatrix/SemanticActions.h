#ifndef SEMANTIC_ACTIONS_H
#define SEMANTIC_ACTIONS_H
#include <iostream>
using namespace std;

#include "../Token.h"

class TransitionMatrix;

class SemanticActions {
    public:
        static Token * initialize_token(TransitionMatrix* t, char& c);
        static Token * add_character(TransitionMatrix* t, char& c);
        static Token * end_string(TransitionMatrix* t, char& c);
        static Token * end_comment(TransitionMatrix* t, char& c);
        static Token * end_double(TransitionMatrix* t, char& c);
        static Token * end_id(TransitionMatrix* t, char& c);
        static Token * end_reserved(TransitionMatrix* t, char& c);
        static Token * discard_character(TransitionMatrix* t, char& c);
        static Token * end_uint(TransitionMatrix* t, char& c);
        static Token * end_short(TransitionMatrix* t, char& c);
        static Token * end_op(TransitionMatrix* t, char& c);
        static Token * end_complex_op(TransitionMatrix* t, char& c);
        static Token * end_symbol(TransitionMatrix* t, char& c);
};

#endif //SEMANTIC_ACTIONS_H