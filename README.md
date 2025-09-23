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
Step : Clone Repository
git clone https://github.com/Nahid-01/zeta.git
cd zeta/code

Step 2: Compile
g++ "numerical differentiation code.cpp" -o diff

Step 3: Run Program
./diff

Step 4: Usage(Program Interaction)

