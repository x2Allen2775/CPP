#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)
    //lets create a code to calculate the circumference of the circle


    const double PI=3.14159;
    double radius=10;
    double circumference= 2*PI*radius;
    std::cout<< circumference<< "cm";
    return 0;
    //see pi is a constant in a real life right hence it should not be changed with erspect to our codee too but somebody can change in this code by writing the next line pi=734732; hence to make somevariable not able to change its value we put const before it and general naming convention is to make it uppercase the name of the const variable

}