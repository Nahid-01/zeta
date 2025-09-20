// Muhammad fuad 2024000000149

#include <bits/stdc++.h>
using namespace std;

//Approximates the derivative of a function using the Forward Difference Formula.
double forward(double (*f)(double), double x, double h)
{
    return (f(x + h) - f(x)) / h;
}

//Approximates the derivative of a function using the Backward Difference Formula.
double backward(double (*f)(double), double x, double h)
{
    return (f(x) - f(x - h)) / h;
}

//Approximates the derivative of a function using the Central Difference Formula.
double central(double (*f)(double), double x, double h)
{
    return (f(x + h) - f(x - h)) / (2 * h);
}

//These are not in <cmath>, so we define them manually.
double sec(double x)      { return 1.0 / cos(x); }
double cosec(double x)    { return 1.0 / sin(x); }
double cot(double x)      { return cos(x) / sin(x); }
