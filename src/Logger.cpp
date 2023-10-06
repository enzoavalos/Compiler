#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
using namespace std;

class Logger{
    public:
        static void logError(string msg,int line = 0){
            if(line != 0)
                cerr << "Linea " << line << ": Error, " << msg << endl;
            else
                cerr << "Error, " << msg << endl;
        }

        static void logWarning(string msg,int line = 0){
            if(line != 0)
                cerr << "Linea " << line << ": Warning, " << msg << endl;
            else
                cerr << "Warning, " << msg << endl;
        }

        static void infoMsg(string msg,int line = 0){
            if(line != 0)
                cerr << "Linea " << line << ": " << msg << endl;
            else
                cerr << msg << endl;
        }
};

#endif