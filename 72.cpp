#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<set>

static int lim = 1000000;

int main(int argc, char const *argv[])
{
    std::vector<int> nums(lim + 1);
    for (int i = 0; i <= lim; i++)
    {
        nums[i] = i;
        // std::cout << nums[i];
    }
    std::cout << "\n";
    for (int i = 0; i <= lim; i++)
    {
        if ((nums[i] == i) && (nums[i] > 1))
        {
            int k = 1;
            while (k * i <= lim)
            {
                nums[k * i] = nums[k * i] / i;
                nums[k * i] *= i - 1;
                k += 1;
            }
        }
    }
    long long int total = 0;
    for(int i=2; i<= lim; i++){
        total += nums[i];
    }
    std::cout<<total<<std::endl;
}
