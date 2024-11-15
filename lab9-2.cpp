//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <Matt Granger> on <11/15/24>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

intmain() {
double calculateMonthlyPayment(double loanAmount, double annualInterestRate, int loanTermYears) {
    double monthlyInterestRate = annualInterestRate / 12 / 100; // Convert annual rate to monthly and decimal
    int totalPayments = loanTermYears * 12; // Total number of monthly payments

    // Monthly payment formula
    double monthlyPayment = (loanAmount * monthlyInterestRate * pow(1 + monthlyInterestRate, totalPayments)) /
                            (pow(1 + monthlyInterestRate, totalPayments) - 1);
    return monthlyPayment;
}

int main() {
    // Variables for the first car loan
    double loanAmount1, annualInterestRate1;
    int loanTermYears1;

    // Variables for the second car loan
    double loanAmount2, annualInterestRate2;
    int loanTermYears2;

    // Input for the first car loan
    cout << "Enter loan amount for the first car: ";
    cin >> loanAmount1;
    cout << "Enter annual interest rate for the first car (%): ";
    cin >> annualInterestRate1;
    cout << "Enter loan term for the first car (in years): ";
    cin >> loanTermYears1;

    // Input for the second car loan
    cout << "Enter loan amount for the second car: ";
    cin >> loanAmount2;
    cout << "Enter annual interest rate for the second car (%): ";
    cin >> annualInterestRate2;
    cout << "Enter loan term for the second car (in years): ";
    cin >> loanTermYears2;

    // Calculate monthly payments
    double monthlyPayment1 = calculateMonthlyPayment(loanAmount1, annualInterestRate1, loanTermYears1);
    double monthlyPayment2 = calculateMonthlyPayment(loanAmount2, annualInterestRate2, loanTermYears2);

    // Display the results
    cout << "Monthly payment for the first car: $" << monthlyPayment1 << endl;
    cout << "Monthly payment for the second car: $" << monthlyPayment2 << endl;

    return 0;
}//end of main function    
