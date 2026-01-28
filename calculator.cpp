#include <iostream>
#include <cmath>

int main() {
    char add='+';
    char substract='-';
    char multiply='*';
    char div='/';
    char operation;
    double first;
    double second;
    double result;
    std::cout<<"Pls enter the operation you want to perform (+,-,*,/): ";
    std::cin>>operation;
    std::cout<<"Pls enter the first no...: ";
    std::cin>>first;
    std::cout<<"Pls enter the second no...: ";
    std::cin>>second;
    switch (operation){
        case '+':
            result=first+second;
            std::cout<<"The result of you preferred operation between your no's is"<<result<<" ";
            break;
        case '-':
            result=first-second;
            std::cout<<"The result of you preferred operation between your no's is"<<result<<" ";
            break;
        case '*':
            result=first*second;
            std::cout<<"The result of you preferred operation between your no's is"<<result<<" ";
            break;
        case '/':
            result=first/second;
            std::cout<<"The result of you preferred operation between your no's is"<<result<<" ";
            break;
        default:
            std::cout<<"Pls enter an appropriate operation.";
            

    }
        





    return 0;
}