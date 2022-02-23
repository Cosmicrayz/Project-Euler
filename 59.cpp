#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
std::vector<int> read_nums(std::string filename)
{
    std::string line;
    std::ifstream myfile(filename);
    std::vector<int> nums;

    if (myfile.is_open())
    {
        while (std::getline(myfile, line))
        {
            std::istringstream iss(line);
            std::string s;
            while (getline(iss, s, ','))
            {
                nums.push_back(std::stoi(s));
            }
        }
        myfile.close();
    }
    else
        std::cout << "Unable to open file";

    return nums;
}

bool out_of_range(int num)
{
    if (num > 126 || num < 32)
    {
        return true;
    }
}

int main()
{
    std::vector<int> nums = read_nums("p059_cipher.txt");
    for (int i = 97; i <= 126; i++)
    {
        for (int j = 97; j <= 126; j++)
        {
            for (int k = 97; k <= 126; k++)
            {
                std::cout << "Iteration"
                          << "(" << i << "," << j << "," << k << ")" << std::endl;
                std::vector<int> new_vec;
                int pwd_array[3] = {i, j, k};
                bool in_range = true;
                for (int m = 0; m < nums.size(); m++)
                {
                    int decoded = nums[m] ^ pwd_array[m % 3];
                    new_vec.push_back(decoded);
                    if(decoded < 32 || decoded > 126)
                    {
                        in_range = false;
                        break;
                    }
                    }
                if (in_range)
                    {
                        for (int idx = 0; idx < new_vec.size(); idx++)
                        {
                            std::cout << (char)new_vec[idx];
                        }
                        std::cout<<""<<std::endl;
                }
            }
        }
    }
}