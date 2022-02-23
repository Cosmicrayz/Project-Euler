#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>


std::set<int> prime_sieve(int num)
{
    if(num == 2)
    std::vector<bool> prime_factors(num,1);
    std::set<int> factors;
    prime_factors[0] = 0;
    for(int i = 1; i < num ; i++){
        if( prime_factors[i-1] == 1){
            int k = 1;
            if (num%i == 0){
            factors.insert(i);}
            while(k*i + i -1 <= num){
                prime_factors[k*i + i-1] = 0;
                k += 1;
                std::cout<<k*i + i-1<<std::endl;
            }
        }
    }
    return factors;
}


int main(int argc, char const *argv[])
{
    int total = 0;
    std::set<int> test = prime_sieve(2);
    for(auto itr: test){
        std::cout<<itr;
    }   
    }

