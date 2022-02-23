#include <iostream>
#include <vector>
#include <cmath>
static int NUM_DIGITS = 200;
int compute_digit_sum(std::vector<int> digits){
    int sum = 0;
    for(int i=0;i<digits.size();i++){
        sum += digits[i];
    }
    return sum;
}

std::vector<int> calc_power(int base, int pow)
{
    std::vector<int> digits(NUM_DIGITS,0);
    digits[0] = 1;

    for (int i = 0; i < pow; i++)
    {
        int carry = 0;
        for (int j = 0; j < NUM_DIGITS; j++)
        {
            int temp = digits[j] * base + carry;
            digits[j] = temp % 10;
            carry = temp / 10;
        }
    }

    return digits;
}

int main(){
    int max_0 = 0;
    for(int i=2;i<100;i++){
        for(int j=2; j<100;j++){
            std::vector<int> digits = calc_power(i,j);
            int sum = compute_digit_sum(digits);
            if(sum > max_0){
                max_0 = sum;
            }
        }
    }
    std::cout<<max_0<<std::endl;
    }
