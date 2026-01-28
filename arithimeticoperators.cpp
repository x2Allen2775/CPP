#include <iostream>

int main()
{
    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)

    //int students = 20;
    //students=students+1;
    //students+=1;
    //increment operator is ++if we need to increase the value by just 1 we can do students++;
    //students-=1;// similarly decrement operator is -- like students--;

    //students*=2;
    //students/=2;
    //since these are int variables if we now dive this by 3 it wont give the decimal part meaning it will truncate decimals or give errors and hence to prevent it we should make the int to double
    //to find the remainder of any division we use modulus operator
    //int remainder=students%2;

    //std::cout<<students;
    //std::cout<<remainder;

    //we do the arithmetic operation in the following order
    //paranthesis
    // multiplication and division
    //addition and substraction
    //int students=6-5+4*3/2;

    int students=6-(5+4)*3/2;
    std::cout<<students;


    return 0;
}