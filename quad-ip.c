#include <stdio.h>
#include <math.h>
// Quadratic (parabola) interpolation through 3 points
// Uses Lagrange form: avoids solving linear system
double quadratic_interpolate(double x0, double y0,
                             double x1, double y1, 
                             double x2, double y2,
                             double x) {
    
    // Lagrange basis polynomials evaluated at x
    // L0(x) = (x-x1)(x-x2) / ((x0-x1)(x0-x2))
    // L1(x) = (x-x0)(x-x2) / ((x1-x0)(x1-x2))
    // L2(x) = (x-x0)(x-x1) / ((x2-x0)(x2-x1))
    
    double L0 = (x - x1) * (x - x2) / ((x0 - x1) * (x0 - x2));
    double L1 = (x - x0) * (x - x2) / ((x1 - x0) * (x1 - x2));
    double L2 = (x - x0) * (x - x1) / ((x2 - x0) * (x2 - x1));
    
    // P(x) = y0*L0(x) + y1*L1(x) + y2*L2(x)
    double y = y0 * L0 + y1 * L1 + y2 * L2;
    
    return y;
}

int main() {
    // Example: Approximating sin(x) using 3 points
    // True function: sin(x), x in [0, π]
    
    double x0 = 0.0,       y0 = 0.0;        // sin(0) = 0
    double x1 = 1.5708,    y1 = 1.0;        // sin(π/2) = 1
    double x2 = 3.1416,    y2 = 0.0;        // sin(π) = 0
    
    // Test at several points
    printf("Comparing quadratic approximation to sin(x):\n");
    printf("%8s %12s %12s %12s\n", "x", "sin(x)", "approx", "error");
    printf("-----------------------------------------------\n");
    
    for (double x = 0; x <= 3.1416; x += 0.3) {
        double true_val = sin(x);
        double approx = quadratic_interpolate(x0, y0, x1, y1, x2, y2, x);
        double error = true_val - approx;
        
        printf("%8.4f %12.6f %12.6f %12.6f\n", x, true_val, approx, error);
    }
    
    return 0;
}