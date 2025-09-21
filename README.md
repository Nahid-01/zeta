# zeta
C++ implementation of Forward, Backward, and Central Difference methods for numerical differentiation with error and accuracy analysis.

Numerical Differentiation

What is Numerical Differentiation?

Numerical differentiation is a method used to approximate the derivative of a function using numerical techniques instead of exact calculus formulas.

In many real-life problems (physics, engineering, computer simulations, machine learning), the exact derivative of a function is either:
* Very difficult to calculate, or
* Not available in closed form (e.g. experimental data, tabular values).

In those cases, we use numerical methods to estimate the derivative.

*Why Do We Use It?*

* When a function is too complex to differentiate by hand.
* When we only have measured data points (not an equation).
* To study the accuracy of different approximation methods.
* Essential in fields like signal processing, control systems, fluid mechanics, and numerical simulations.

Finite Difference Formulas

Numerical differentiation is based on finite differences, which use nearby function values to approximate the slope at a point.

