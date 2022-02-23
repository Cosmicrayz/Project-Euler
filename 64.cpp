#include <cmath>
#include <iostream>
#include <typeinfo>

struct coeff{
    int integer_part;
    double remainder;
};

coeff get_coeffs(int n){
    coeff coeffs;
    coeffs.integer_part = (int) std::floor(std::sqrt(n));
    coeffs.remainder = std::sqrt(n) - coeffs.integer_part;
    return coeffs;
}

int main(int argc, char const *argv[])
{
    coeff a = get_coeffs(23);
    std::cout.precision(64);
    std::cout<<a.integer_part<< " " << a.remainder<<std::endl;
}
