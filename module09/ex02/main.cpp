#include <iostream>
#include <random>
#include "PmergeMe.h"

#include <list>


#include <ctime>
#include <string>

int main()
{
    std::string str = " -3 5 9 7 4";

    std::vector<int> vec;

    for (int i = 0; i < str.length(); i++) 
    {
        const int num = str[i] - '0';
        if (str[i] == ' ')
        {
            continue;
        }
        else if(0 <= num && num <= 9)
        {
            vec.push_back(num);
        }
        else
        {
            std::cout << "Error" << std::endl;
            return -1;
        }
    }

    for (int& item : vec) {
        //std::cout << "���� : " << item << std::endl;
    }

    //return 0;
    //����

    clock_t tStart = clock();
    /*���� �ð��� �����ϰ� ���� �ڵ�*/

    PmergeMe pmergeMe;
    pmergeMe.sort<std::vector<int>>(vec.begin(), vec.end(), [](int a, int b) -> int {
        return a - b;
        });


    clock_t tEnd = clock();

    //duration = (double)(tEnd - tStart) / CLOCKS_PER_SEC;
    //
    //
    //std::cout << "���Ľð� :" << duration << std::endl;
    //printf("%f��", duration);

    //return 0;

    std::vector<int>::iterator iter = vec.begin();
    std::vector<int>::iterator iter2 = vec.end();

    for (int& item : vec) {
        std::cout << "���� : " << item << std::endl;
    }


    //for (int i = 0; i < count; i++) {
    //    //std::cout << "���� : " << vec[i] << std::endl;
    //}

    return 0;
}