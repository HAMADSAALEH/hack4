#include<stdio.h>
#include <math.h>

// Calculates the inflation-adjusted rate of return
double inflation_adjusted_rate_of_return(double annual_rate_of_return, double annual_rate_of_inflation) {
  return (1 + annual_rate_of_return) / (1 + annual_rate_of_inflation) - 1;
}
// Calculates the monthly interest earned on a balance
double calculate_monthly_interest(double balance, double monthly_interest_rate) {
  return balance * monthly_interest_rate;
}

// Calculates the new balance after adding the monthly contribution and interest
double calculate_new_balance(double balance, double monthly_contribution, double monthly_interest) {
  return balance + monthly_contribution + monthly_interest;
}