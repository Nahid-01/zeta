# zeta
C++ implementation of Forward, Backward, and Central Difference methods for numerical differentiation with error and accuracy analysis.

Numerical Differentiation

What is Numerical differentiation?

Numerical Differentiation is technique to approximate the derivate of a function using numbers instead of exact calculus formulas.

In real-world applications, we often don't have a simple  formula to differentiate(e.g., experimental data or complex equations). Numerical differentiation helps us estimate the slope(rate of change) in such cases.

Why do we use it?

*To calculate derivatives when the formula is too complicated.
* When we only have data points, not equations.
* To check how ccurate different approcimation methods are.
* Widely used in engineering, physics, machine learning and computer simulations.

Three finite difference formulas

1. Forward difference

Formula: f'(x) ~  (f(x+h) - f(x)) / h
