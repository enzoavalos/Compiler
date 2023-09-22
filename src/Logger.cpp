#include <iostream>
using namespace std;

class Logger{
    public:
        static void logError(string msg){
            cerr << msg << endl;
        }
};