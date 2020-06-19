#include "my_print/printResult.hpp"

#include <iostream>

void print_result(const std::string& resultType, float resultValue)
{
    std::cout << resultType << ": " << resultValue << std::endl;
}
