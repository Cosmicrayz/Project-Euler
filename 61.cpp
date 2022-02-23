#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

const int smol = 1000;
const int big = 10000;

int polygonal_num(int s, int n){
    return ((s-2)*n*n-(s-4)*n)/2;
}

std::vector<int> compute_bound(int s,int min,int max){
    std::vector<int> range;
    double u = s-4;
    double lower = (u/2 + std::sqrt(u*u/4 + 2*(u+2)*min))/(u+2);
    double upper = (u/2 + std::sqrt(u*u/4 + 2*(u+2)*max))/(u+2);
    range.push_back(std::ceil(lower));
    range.push_back(std::ceil(upper));
    return range;
}



int main(){
    std::vector<std::vector<int>> figurate_vals;
    for (int i = 3; i <= 8; i++)
    {
        std::vector<int> range = compute_bound(i,1000, 10000);
        std::vector<int> vals;
        for (int j = range[0]; j < range[1]; j++)
        {
            // std::cout << "S(" << i << "," << j << ")=" << figurate(i, j) << std::endl;
            vals.push_back(polygonal_num(i, j));
        }
        figurate_vals.push_back(vals);
    }

}