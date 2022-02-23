#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <fstream>

bool isPrime(long long int num)
{
    if (num == 2)
        return true;

    if (num % 2 == 0)
        return false;

    for (long long int i = 3; i*i <= num; i += 2)
    {
        if (num % i == 0)
            return false;
    }

    return true;}
int main()
{
    int total = 0;
    double ratio = 1.1;
    int i = 0;
    int num = 0;
    while (ratio > 0.1)
    {
        int denom = 4 * i + 1;
        if (i > 0)
        {
            std::cout << "Hey" << std::endl;
            int even_no = 2 * i;
            int diag_1 = even_no * even_no - even_no + 1;
            int diag_2 = even_no * even_no + 1;
            int diag_3 = even_no * even_no + even_no + 1;
            num += isPrime(diag_1) + isPrime(diag_2) + isPrime(diag_3);
            ratio =(double) num / denom;
            std::cout << ratio << std::endl;
        }
        i += 1;
    }
    std::cout<<"The answer is "<<2*i-1<<std::endl;
}