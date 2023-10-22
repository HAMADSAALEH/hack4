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
// Prints the amortization table for a 401(k) account
void print_amortization_table(double initial_balance, double monthly_contribution, double annual_rate_of_return, double annual_rate_of_inflation, int number_of_years) {
  double monthly_interest_rate = inflation_adjusted_rate_of_return(annual_rate_of_return, annual_rate_of_inflation) / 12;
  double balance = initial_balance;

    printf("Month\tInterest\tBalance\n");
  for (int month = 1; month <= number_of_years * 12; month++) {
    double monthly_interest = calculate_monthly_interest(balance, monthly_interest_rate);
    balance = calculate_new_balance(balance, monthly_contribution, monthly_interest);

  printf("Month\tInterest\tBalance\n");
  for (int month = 1; month <= number_of_years * 12; month++) {
    double monthly_interest = calculate_monthly_interest(balance, monthly_interest_rate);
    balance = calculate_new_balance(balance, monthly_contribution, monthly_interest);

printf("%d\t\t$%.2f\t\t$%.2f\n", month, monthly_interest, balance);
  }

  printf("Total Interest Earned: $%.2f\n", balance - initial_balance);
  printf("Total Nest Egg: $%.2f\n", balance);
}

int main(int argc, char *argv[]) {
  // Validate the input
  if (argc != 6) {
    printf("Usage: ./retire initial_balance monthly_contribution annual_rate_of_return annual_rate_of_inflation number_of_years\n");
    return 1;
  }
    // Parse the input
  double initial_balance = atof(argv[1]);
  double monthly_contribution = atof(argv[2]);
  double annual_rate_of_return = atof(argv[3]);
  double annual_rate_of_inflation = atof(argv[4]);
  int number_of_years = atoi(argv[5]);

  // Print the amortization table
  print_amortization_table(initial_balance, monthly_contribution, annual_rate_of_return, annual_rate_of_inflation, number_of_years);

  return 0;
}
