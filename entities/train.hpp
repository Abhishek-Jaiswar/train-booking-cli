#include <iostream>
#include <time.h>

using namespace std;

struct Train {
    string trainId;
    string trainName;
    string source;
    string destination;
    time_t time;
};