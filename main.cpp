#include <iostream>
#include <cmath>

double logbase(double a, double base)
{
    return log(a) / log(base);
}

int main() {
    std::cout<<"Enter the max number\n";
    int number;
    std::cin>>number;
    int max{number},min{0}, choise{0}, mid{max/2};
    for(int i=0;i<=floor(logbase(number,2));i++){
        std::cout<<"Your number is bigger or smaller than "<<mid<<std::endl;
        std::cout<<"1.Bigger\n"<<"2.Smaller\n"<<"3.This is the number that i riddle.\n";
        std::cin>>choise;
        if(choise==1){
            min=mid;
        }
        else if (choise==2) {
            max = mid;
        }
        else{
            std::cout<<"I figured out your number in "<<i<<" steps" <<std::endl;
            break;
        }
        mid=(floor((max+min)/2));

    }
}
