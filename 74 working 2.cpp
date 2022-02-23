#include <iostream>
#include <vector>
#include <string>

const int MAX_NUM = 10000000;
const int FACTORIAL[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

std::vector<int> factorial_sum(MAX_NUM, 0);

    factorials_sum[0] = 1;

    for (int i = 0; i < MAX_NUM; i++)
    {
        int this_num = i;
        while (this_num > 0)
        {
            factorials_sum[i] += FACTORIAL[this_num % 10];
            this_num = this_num / 10;
        }
    }

bool exists(std::vector<int> vec, int val)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == val)
        {
            return true;
        }
    }
    return false;


int main(int argc, char const *argv[])
{
    std::vector<int> digit_sums(MAX_NUM + 1);
    for(int i = 0; i <= MAX_NUM; i++){
        std::vector<int> stack;
        int x = i;
        int len = 1;
        while(true){
            int x = digit_sum(x);
            if exists(stack, x) {
                break;
            }
            if(digt_sums[x] > 0){
                len += digit_sums;
                break;
            }
            else{
                stack.push_back(x);
            }
            
        }
        while(stack.size()>0){
            digit_sums[stack.back()] = len;
            stack.pop_back();
            len++;
        }
    }
}
