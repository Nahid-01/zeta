# Project Title
Numerical Differentiation - Forward, Backward & Central Difference
# Project Overview & Objective
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

      f'(x) ≈ ( f(x + h)  -  f(x − h) ) / 2h,  Error = O(h^2)

