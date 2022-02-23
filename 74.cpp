#include<iostream>
#include<vector>
#include<string>

const int factorial[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
const int Max_num = 1000000;

int digit_sum(int n)
{
    std::string num_str = std::to_string(n);
    if (num_str.length() == 1)
    {
        std::cout << "hi" << std::endl;
        return factorial[n];
    }
    int sum = 0;
    while (num_str.length() > 0)
    {
        int k = std::stoi(num_str.substr(0, 1));
        sum += factorial[k];
        num_str.erase(0, 1);
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int test = digit_sum(1);
    std::cout<<test<<std::endl;

    int digit_sums [Max_num+1];
    // for(int i = 0; i <= Max_num; i++){
    //     digit_sums[i] = digit_sum(i,factorial);
    //     if(i < 20){
    //         std::cout<<digit_sums[i]<<std::endl;
    //     }
    // }
}
