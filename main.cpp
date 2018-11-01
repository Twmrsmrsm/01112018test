#include <iostream>
#include <cmath>


int main () {
    double i=1, t=60, phi=3, res;
    res= pow(M_E,(-i)*t*sqrt(phi)+phi*pow(M_E, sqrt(phi)/i*t));
    std::cout<< res << '\n';
return 0;
}