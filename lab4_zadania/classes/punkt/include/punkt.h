#include <iostream>
#include <math.h>

using namespace std;

struct punkt{
    double x,y;
};

class Punkt{
public:
    punkt first,second;
    Punkt();
    double odleglosc();
};