# zeta
C++ implementation of Forward, Backward, and Central Difference methods for numerical differentiation with error and accuracy analysis.

Numerical Differentiation

What is Numerical differentiation?

Numerical Differentiation is technique to approximate the derivate of a function using numbers instead of exact calculus formulas.

In real-world applications, we often don't have a simple  formula to differentiate(e.g., experimental data or complex equations). Numerical differentiation helps us estimate the slope(rate of change) in such cases.

Why do we use it?

* To calculate derivatives when the formula is too complicated.
* When we only have data points, not equations.
* To check how ccurate different approcimation methods are.
* Widely used in engineering, physics, machine learning and computer simulations.

Three finite difference formulas

1. Forward difference

    Formula : f'(x) ~  ( f(x + h) - f(x) ) / h

    * Takes the slope between f(x) and f(x+h).
    * Looks forward from the current point.
    * Less accurate than central difference because it only looks in one direction.

2. Backward difference

    Formula :  f'(x) ~ ( f(x) - f(x - h) ) / h

    * Takes the slope between f(x) and f(x-h).
    * Looks backward from the current point.
    * Useful when forward values are not available. 

3. Central difference

    Formula : f'(x) ~ ( f(x + h) - f(x - h) ) / ( 2 * h )

    * Takes the slope between f(x - h) and f(x + h)
    * Looks both firections and finds the average.
    * Most accurate among the three because it balances forward and bakcward error.

* Custom trigonometric functions

  * C++ <cmath> library does not provide sec(x) , cosec(x) and cot(x).
  * These are manually defined so the code can handle all common trigonometric funtions.
 
* Diagram
      -------

  * Forward Diffrence   : slope from f(x) -> f(x+h)
  * Backward Difference : slope from f(x-h) -> f(x)
  * Central Difference  : slope across both sides

-------------------

Numerical Differentiation Error Comparison
This part implements a numerical differenciation program in C++ to compare the errors of Forward , Backward , and central
difference methods against the exact derivative of standard trigonometric functions.

#Features
*Allows the user to choose one of the following functions:
  * sin(x) = derivative:cos(x)
  * cos(x) = derivative: -sin(X)
  * tan(x) = derivative:sec^2(x)
  * sec(x) = derivative:sec(x)tan(x)
  * csc(x) = derivative: -csc(x)cot(x)

*Computes the exact derivative and compares it with apporximations from:
  *Forward difference method
  *Backward difference method
  *Central difference method

*Displays the error between numerical and exact derivatives.

# How it works
  1.User selects a function(choice 1-5).
  2.Program calculates the exact derivative at a given value of x.
  3.Uses Forward,Backward,Central difference formulas with a small step h.
  4.Compares the approximate results with the exact derivative.
  5.Prints the results and errors.

# Example output:

 Function: f(x) = sin(x), derivative f'(x) = cos(x)

 Forward Difference Approx: ....
 Backward Difference Approx: ....
 Central Difference Approx: ....
 Exact Derivative: ....
 Errors:
   Forward Error = ....
   Backward Error = ....
   Central Error = ....

# Applicatons
 *Numerical analysis
 *Error estimation in differentiation
 *Understanding Forward, Backward, and Central difference methods

 --------------------
  
