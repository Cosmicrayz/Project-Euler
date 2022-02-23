#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

static double compare = (double) 3/7;

int main(int argc, char const *argv[])
{
    double num_left = 0;
    double den_left = 1;
    double current = num_left / den_left;
    for (int i = 2; i <= 1000000; i++)
    {
        int k = floor((double)i * 3 / 7);
        if (((double)k / i) < (double)3 / 7)
        {
            if (((double)k / i > current) && (std::__gcd(i, k) == 1))
            {
                num_left = k;
                den_left = i;
                current = (double)k / i;
            }
        }
    }
    std::cout << num_left << "/" << den_left << std::endl;
}
