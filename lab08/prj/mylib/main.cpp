#include <iostream>
#include <math.h>
#include <clocale>
#include "MyDevInfo.h"

using namespace std;

double s_calculation(float x, float y, float z){
    double s;
    s = (z+y+z)*2 - sqrt(fabs(2*3.14*sqrt(0.5*z)/(y+4*((x*x*x) + cos(z)))));
    return s;
}

