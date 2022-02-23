#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

const long long int max_num = 1500000;
const long long int big_num = 1500000;

int main(int argc, char const *argv[])
{
    std::vector<int> triples(big_num + 1, 0);
    for (int i = 1; i < max_num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            
            double a =(double) i * i - (double) j * j;
            double b = (double) 2 * i * j;
            if ((std::__gcd(i, j) == 1) && ((i + j) % 2 == 1))
            {
                double c = std::sqrt(a * a + b * b);
                double sum = a + b + c;
                if (sum > big_num)
                {
                    break;
                }
                for (int k = 1; (sum)*k <= big_num; k++)
                {
                    int idx = (int)k*sum;
                    triples[idx] += 1;
                }
            }
        }
    }
    long long int total_count = 0;
    for (int i = 0; i <= big_num; i++)
    {
        if (triples[i] == 1)
        {
            total_count++;
        }
    }

    std::cout << total_count;
}
