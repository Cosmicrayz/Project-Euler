#include <cmath>
#include <iostream>
#include <typeinfo>



int main(){
    int total_sols = 0;
    for(int i=1; i <= 22; i++){
        for (int j = 1; j < 10; j++)
        {
           double sol = std::pow(j,i);
           if(sol >= std::pow(10,i-1)){
               total_sols += 1;
           }
        }
        
    }
    std::cout<<total_sols<<std::endl;

}