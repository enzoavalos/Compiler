#include <iostream>
using namespace std;

class Logger{
    public:
        static void logError(string msg,int line = 0){
            cerr << "Linea " << line << ": Error, " << msg << endl;
        }
};