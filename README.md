# Project Title
Numerical Differentiation - Forward, Backward & Central Difference
# Project Overview
This project is developed as part of CSE261: Numerical Methods at Southeast University, Summer 2025. It focuses on the implementation and comparative analysis of numerical differentiation using three finite difference formulas: Forward Difference, Backward Difference and Central Difference.

Numerical differentiation is particularly important in situations where analytical differentiation is difficult or impossible. It is widely applied in engineering, physics and computational sciences, especially when only discrete values of a function are available.

# Objectives of this project
  - Implement Forward, Backward and Central Difference methods in C++.
  - Compute numerical derivatives of standard function: sin(x), cos(x), tan(x), sec(x), cosec(x), cot(x), and exp(x).
  - Compare numerical results with exact analytical derivatives.
  - Investigate how step size (h) affects accuracy and error.
  - Discuss the trade-off between truncation error and floating-point round-off error.

# Theoretical Background & Formulas
The following finite difference approximations are implemented : 

* Forward Difference Formula
  
  f'(x) ≈ ( f(x+h) − f(x) ) / h,  Error = O(h)

* Backward Difference Formula

  f'(x) ≈ ( f(x) − f(x − h) ) / h,  Error = O(h)

* Central Difference Formula

  f'(x) ≈ ( f(x + h)  -  f(x − h) ) / 2h,  Error = O(h<sup>2</sup>)

The Central Difference Method is generally more accurate because its truncation error decreases quadratically with step size, unlike Forward and Backward methods which decrease linearly.

# Code Implementation & Explanation
The project is implemented in C++ with a moduler structure.
* Function Definitions
  - Implements custom trigonometric functions (sec(x), cosec(x), cot(x) which are not included in <cmath>.
  - Functions for Forward, Backward and Central differences.
* Derivative Calculation
  - For each user-selected function, the exact analytical derivative is computed.
  - Numerical appriximations are obtained using the three formulas.
* Error Comparison
  - Absolute error = |numerical derivative - exact derivative|.
  - Errors are displayed for decreasing values of step size h = 0.1, 0.01, 0.001, ... , 1e-8.
* User Interaction
  - Menu-driven program where the user selects the function and input point x.
  - Handles invalid inputs (e.g., division by zero for tan(x) at x = π/2).

# How to Compile & Run
* Step 1: Clone Repository
  - git clone https://github.com/Nahid-01/zeta.git
  - cd zeta/code

* Step 2: Compile
  - g++ "numerical differentiation code.cpp" -o diff

* Step 3: Run Program
  - ./diff

* Step 4: Usage(Program Interaction)
  - When run the program, the terminal displays a menu:

     Choose a function:
       1. f(x) = sin(x)
       2. f(x) = cos(x)
       3. f(x) = tan(x)
       4. f(x) = sec(x)
       5. f(x) = cosec(x)
       6. f(x) = cot(x)
       7. f(x) = exp(x)
       8. Exit
  
       Enter choice: 1

       Enter the point x where you want the derivative: 0.785398   (≈ π/4)
            
       Function: f(x) = sin(x), derivative f'(x) = cos(x)
       Exact derivative at x (0.785398) = 0.70710678

 * Sample Output Table:

     - The program then prints a table of errors for different step sizes h:
  
                       h       Forward error      Backward Error       Central Error
              ------------------------------------------------------------------------
               0.10000000        0.00283367          0.00312412          0.00015273
               0.01000000        0.00002833          0.00003124          0.00000000
               0.00100000        0.00000028          0.00000031          0.00000000
               0.00010000        0.00000000          0.00000000          0.00000000
               0.00001000        0.00000000          0.00000000          0.00000000
               0.00000100        0.00000000          0.00000000          0.00000000
               0.00000010        0.00000000          0.00000000          0.00000000
               0.00000001        0.00000000          0.00000000          0.00000000


# Example Results
  For f(x) = sin(x) at X = π/4, the exact derivative is:

  <p align="center">
  <img src="https://latex.codecogs.com/svg.latex?f'(x)%20=%20\cos\left(\tfrac{\pi}{4}\right)%20\approx%200.70710678" />
</p>


* Sample Output Table


      | h      | Forward Error | Backward Error | Central Error |
      | ------ | ------------: | -------------: | ------------: |
      | 1.0e-1 |      2.83e-03 |       3.12e-03 |      1.52e-04 |
      | 1.0e-2 |      2.83e-05 |       3.12e-05 |      1.52e-08 |
      | 1.0e-3 |      2.83e-07 |       3.12e-07 |      1.52e-12 |

# Error vs Step Size Graph

Below is a log-log plot showing how the error decreases with step size for f(x) = sin(x), x = π/4:


<img width="300" height="200" alt="image" src="https://github.com/user-attachments/assets/1954ba3a-0f1d-4ce1-a098-0d67033a7ee5" />

