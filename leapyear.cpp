#include <iostream>
int year;

int main() {
    std::cout<<"Enter your year to check if the year is leap year: ";
    std::cin>>year;
    int fourdivide=year%4;
    int hunddivide=year%100;
    if(fourdivide==0 && !hunddivide==0){
        std::cout<<"The year "<<year<<" is a leap year";
        
    }
    else{
        std::cout<<"The year "<<year<<" is not leap year";
    }

    return 0;
}