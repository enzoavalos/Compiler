#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
using namespace std;

class Logger{
    public:
        static void logError(string msg){
            int line = TransitionMatrix::getLine();
            cerr << "Linea " << line << ": Error, " << msg << endl;
        }

        static void logWarning(string msg){
            int line = TransitionMatrix::getLine();
            cerr << "Linea " << line << ": Warning, " << msg << endl;
        }

        static void infoMsg(string msg){
            int line = TransitionMatrix::getLine();
            cerr << "Linea " << line << ": " << msg << endl;
        }
};

#endif