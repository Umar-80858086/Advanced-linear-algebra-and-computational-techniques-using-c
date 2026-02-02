#include <stdio.h>
#include <float.h>
#include <math.h>

int main(void)
{
    /* Constants */
    const double fc = 90e9;     // Cutoff frequency (Hz)
    const double c = 3e8;      // Speed of light (m/s)

    /* Target dimensions */
    const double a_target = 5e-2;
    const double b_target = 2.5e-2;

    /* Optimization variables */
    double best_epsilon = 0.0;
    double best_mu = 0.0;
    double best_error = DBL_MAX;

    /* Parameter sweep */
    for (int i = 1; i <= 50; i++)
    {
        double eps = i * 0.1;

        for (int j = 1; j <= 150; j++)
        {
            double mu = j * 0.1;

            double a_calc = c / (2.0 * sqrt(eps * mu) * fc);
            double b_calc = a_calc / 2.0;

            double error = fabs(a_calc - a_target) +
                           fabs(b_calc - b_target);

            if (error < best_error)
            {
                best_error = error;
                best_epsilon = eps;
                best_mu = mu;
            }
        }
    }

    /* Final results */
    double a_final = c / (2.0 * sqrt(best_epsilon * best_mu) * fc);
    double b_final = a_final / 2.0;

    printf("Optimal epsilon_r : %.2f\n", best_epsilon);
    printf("Optimal mu_r      : %.2f\n", best_mu);
    printf("Calculated a      : %.6e m\n", a_final);
    printf("Calculated b      : %.6e m\n", b_final);
 //   printf("Minimum error     : %.6e\n", best_error);

    return 0;
}
