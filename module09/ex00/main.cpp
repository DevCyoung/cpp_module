#include <iostream>
#include <string>
int main()
{
    std::string str = "hello world!";
    std::string a = str.substr(-1, 40);
    return 0;
}