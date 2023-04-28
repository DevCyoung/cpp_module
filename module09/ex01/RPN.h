#pragma once

#include <string>
#include <stack>

class RPN
{
private:
    std::stack<int> m_stack;
    int m_result;

public:
    int TryCalculate(const std::string str, int* outRetVal);

public:
    RPN();
    RPN(const RPN& _other);
    RPN& operator=(const RPN& _other);
    ~RPN();
};

