#include <iostream>

int main() {
    char unit;
    double measure;
    double result;
    std::cout<<"Pls choose your suitable temperature unit of you temperature (F, C): ";
    std::cin>>unit;
    std::cout<<"Pls enter the measure of the temperature.: ";
    std::cin>>measure;
    if(unit=='F'||unit=='f'){
        result=(measure-32)*0.555;
        std::cout<<"The measure of "<<measure<<" Fahrenheit in Celcius is "<<result;
    }
    else if(unit=='C'||unit=='c'){
        result=(measure*1.8)+32;
        std::cout<<"The measure of "<<measure<<" Celcius in Fahrenheit is "<<result;
    }
    else{
        std::cout<<"Pls enter a appropriate unit (F, C)!";
    }
    return 0;
}