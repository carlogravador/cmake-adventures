#include <iostream>

#include "my_math/addition.hpp"
#include "my_math/division.hpp"
#include "my_print/printResult.hpp"

int main()
{
    float num1;
    float num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    const auto sum = addition(num1, num2);
    const auto quo = division(num1, num2);

    print_result("Addition", sum);
    print_result("Quotient", quo);
}
