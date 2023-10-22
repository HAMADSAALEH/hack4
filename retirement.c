#include<stdio.h>
#include <math.h>

// Calculates the inflation-adjusted rate of return
double inflation_adjusted_rate_of_return(double annual_rate_of_return, double annual_rate_of_inflation) {
  return (1 + annual_rate_of_return) / (1 + annual_rate_of_inflation) - 1;
}
