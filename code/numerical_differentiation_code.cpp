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

//Arafat siddik araf 2024000000162

//compares the errors of forward, backword, and central difference methods .
void comparErrors(int choice, double x)
{ 
    double exact; // exact derivative
    string fname;

    switch(choice)
    {
        case 1:
            fname = "sin(x)";
            cout<< "\nFunction: f(x) = sin(x), derivative f'(x) = cos(x)\n";
            exact = cos(x);
            break;
        
        case 2:
            fname = "cos(x)";
            cout<< "\nFunction: f(x) = cos(x), derivative f'(x) = -sin(x)\n";
            exact = -sin(x);
            break;
        case 3:
            fname = "tan(x)";
            cout<< "\nFunction: f(x) = tan(x), derivative f'(x) = sec^2(x)\n";
            exact = 1.0 / (cos(x) * cos(x));
            break;
        case 4:
            fname = "sec(x)";
            cout<<"\nFunction: f(x) = sec(x), derivative f'(x) = sec(x)tan(x)\n";
            exact = sec(x) * tan(x);
            break;
        case 5: 
            fname = "cosec(x)";
            cout<< "\nFunction: f(x) = cosec(x), derivative f'(x) = -cosec(x)cot(x)\n";
            exact = -cosec(x) * cot(x);
            break;
        
           //md.sajjat islam 2024000000369
        case 6:
            fname="cot(x)";
            cout <<"\nFunction: f(x) = cot(x), derivative f'(x) = -cosec^2(x)\n";
            exact = -(1.0/ (sin(x)*sin(x)));
            break;
        case 7:
            fname ="exp(x)";
            cout << "\nFunction: f(x) = exp(x), derivative f'(x) = exp(x)\n";
            exact = exp(x);
            break;
        default:
            cout << "Invalid choice!\n";
            return;
    }

    cout << "Exact derivative at x ( " << x << " ) " << " = " << exact << "\n\n";
    cout << setw(12) << "h" << setw(20) << "Forward error" << setw(20) << "Backword Error" << setw(20) << "Central Error" << "\n";
    cout << string(72, '-' << "\n";

    //Md. Fardin Islam 2024000000112
    // Vary step size h to show accuracy behaviour
    for (double h = 0.1; h >= 1e-8; h /= 10)
    {
        double fwd, bwd, cen;

        switch (choice)
        {
            case 1:
                fwd = forward(sin, x, h);
                bwd = backward(sin, x, h);
                cen = central(sin, x, h);
                break;

            case 2:
                fwd = forward(cos, x, h);
                bwd = backward(cos, x, h);
                cen = central(cos, x, h);
                break;

            case 3:
                fwd = forward(tan, x, h);
                bwd = backward(tan, x, h);
                cen = central(cos, x, h);
                break;
        }
}



    




       
