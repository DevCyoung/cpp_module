#include "RPN.h"

int RPN::TryCalculate(const std::string str, int* outRetVal)
{
    while (m_stack.empty() == false)
    {
        m_stack.pop();
    }

    for (int i = 0; i < str.length(); i++)
    {
        const char ch = str[i];

        if (ch == ' ')
        {
            continue;
        }
        else if ('0' <= ch && ch <= '9')
        {
            m_stack.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            if (m_stack.size() < 2)
            {
                return -1;
            }

            const int left = m_stack.top();
            m_stack.pop();
            const int right = m_stack.top();
            m_stack.pop();

            switch (ch)
            {
            case '+':
                m_stack.push(left + right);
                break;
            case '-':
                m_stack.push(-left + right);
                break;
            case '*':
                m_stack.push(left * right);
                break;
            case '/':
                m_stack.push(left / right);
                break;
            }
        }
        else
        {
            return -1;
        }
    }

    if (m_stack.size() != 1)
    {
        return -1;
    }


    *outRetVal = m_stack.top();    
    return 0;
}

RPN::RPN()
{
}

RPN::~RPN()
{
}


RPN::RPN(const RPN& _other)
{
}

RPN& RPN::operator=(const RPN& _other)
{
    return *this;
}

