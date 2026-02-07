#include <stdio.h>

int main() {
    int n, i, j;
    float x[20], y[20][20], xp, h, u, sum, term;

    // Input number of data points
    printf("Enter number of data points: ");
    scanf("%d", &n);

    // Input x and y values
    printf("Enter values of x and y:\n");
    for (i = 0; i < n; i++) {
        scanf("%f %f", &x[i], &y[i][0]);
    }

    // Forward difference table
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    // Input interpolation point
    printf("Enter value of x to interpolate: ");
    scanf("%f", &xp);

    h = x[1] - x[0];
    u = (xp - x[0]) / h;

    sum = y[0][0];
    term = 1;

    for (i = 1; i < n; i++) {
        term = term * (u - (i - 1)) / i;
        sum = sum + term * y[0][i];
    }

    printf("Interpolated value at x = %.3f is %.3f\n", xp, sum);

    return 0;
}
