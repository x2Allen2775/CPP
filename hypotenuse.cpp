#include <iostream>
#include <cmath>

int main(){
    double first;
    double second;
    double hypo1;
    double hypo2;
    std::cout<<"Pls enter the length of the first side of the triangle (in cms): ";
    std::cin>>first;
    std::cout<<"Pls enter the length of the second length of the triangle (in cms): ";
    std::cin>>second; 
    hypo1= pow(first, 2) +pow(second,2);
    hypo2=sqrt(hypo1);
    std::cout<<"The hypotenuse of the triangle formed by the sides of the length provided is "<<hypo2<<"cms";



    return 0;
}