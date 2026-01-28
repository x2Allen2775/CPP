#include <iostream>

int main() {
    //memory address=alocation in memory where data is stroed
    //a memory address can accessed with '&' (address of operators)
    std::string name="Bro";
    int age=21;
    bool student=true;
    std::cout<<&name<<'\n';
    //&name gives the memory address of the variable named name...
    // memory is the hexadecimal address
    std::cout<<&age<<'\n';
    std::cout<<&student<<'\n';
    //if i check form google there decimal value of there hexadecimal value i will notice the pattern that the difference between the values of the two address are having the difference of there byte size of there respective type of the variable
    //for eg the bool ha 1 byte and the int and string has 4 bytes so the memory in decimal values of string and int will be 4 but between bool with string or int will be 1 jo bhi next saved hoga 

    return 0;
}