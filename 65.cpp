#include <cmath>
#include <iostream>
#include <typeinfo>
#include <algorithm>
#include <set>

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

std::set<int> factorise(int num)
{
    std::set<int> factors;
    int x = num;
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i) && (num % i == 0))
        {
            factors.insert(i);
        }
    }
    return factors;
}


int main(int argc, char const *argv[])
{
    std::set<int> fac_6 = factorise(6);
    std::cout<<fac_6.size()<<std::endl;
    double ratio = 0;
    int biggest = 1;
    for( int i = 2; i <= 1000000; i++){
        std::set<int> factors = factorise(i);
        double totient = i;
        for(const int &number: factors){
            double reciprocal = 1 - 1/number;
            totient *= reciprocal;
        }
        double curr_ratio = i/totient;
        if(curr_ratio > ratio){
            ratio = curr_ratio;
            biggest = i;
        }
    }
    std::cout<<biggest<<std::endl;
}
