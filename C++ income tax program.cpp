#include <iostream>

int main() {
    double basicSalary;
    double tax = 0.0;
    double netPay = 0.0;

    // Prompt the user to enter the basic salary
    std::cout << "Enter the basic salary: ";
    std::cin >> basicSalary;

    // Calculate tax based on different income ranges
    if (basicSalary >= 15000 && basicSalary <= 20000) {
        tax = basicSalary * 0.1;
    }
    else if (basicSalary >= 21000 && basicSalary <= 310000) {
        tax = basicSalary * 0.1;
    }
    else if (basicSalary > 310000 && basicSalary <= 1000000) {
        tax = basicSalary * 0.05;
    }
    else if (basicSalary > 1000000) {
        tax = basicSalary * 0.1;
    }

    // Calculate net pay
    netPay = basicSalary - tax;

    // Display results
    std::cout << "Subtotal for Tax Deduction: " << tax << std::endl;
    std::cout << "Total Entitled Net Pay: " << netPay << std::endl;

    return 0;
}
