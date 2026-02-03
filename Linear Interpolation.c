#include <stdio.h>

// Linear interpolation: simplest possible approximation
// Returns y value at point x, between (x0,y0) and (x1,y1)
double linear_interpolate(double x0, double y0, double x1, double y1, double x) {
	// Check: x must be between x0 and x1
	if (x < x0 || x > x1) {
		printf("Error: x=%.2f outside range [%.2f, %.2f]\n", x, x0, x1);
		return 0;
	}

	// Calculate slope (how fast y changes with x)
	double slope = (y1 - y0) / (x1 - x0);

	// Start at y0, add how far we've moved times the slope
	double y = y0 + slope * (x - x0);

	return y;
}

int main() {
	// Example: Temperature sensor calibration
	// We measured: at 0B0C ADC reads 100, at 100B0C ADC reads 900
	// What's the temperature when ADC reads 500?

	double temp0 = 0.0,    adc0 = 100.0;   // Point 1: (ADC=100, Temp=0)
	double temp1 = 100.0,  adc1 = 900.0;   // Point 2: (ADC=900, Temp=100)

	double adc_reading = 750.0;  // We measured this

	// We want temp when adc=500, so x=ADC, y=Temp
	double estimated_temp = linear_interpolate(adc0, temp0, adc1, temp1, adc_reading);

	printf("ADC reading: %.0f\n", adc_reading);
	printf("Estimated temperature: %.1fB0C\n", estimated_temp);

	// Check: should be 50B0C (halfway between 0 and 100)

	return 0;
}