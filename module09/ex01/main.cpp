#include <iostream>
#include <string>
#include "RPN.h"

int main()
{
    RPN rpn;
    int result = 0;

    int error = rpn.TryCalculate("(1 + 1)"
        , &result);

    if (error == -1)
    {
        std::cout << "Error" << std::endl;
    }
    else
    {
        std::cout << result << std::endl;
    }

    return 0;
}