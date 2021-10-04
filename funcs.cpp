#include "funcs.h"
#include <math.h>

int sum(int a, int b) { return a + b; }

float area(float radius) { return pow(radius, 2) * M_PI;}

float BMI(float height, float mass) { return mass/pow(height,2.0);}
