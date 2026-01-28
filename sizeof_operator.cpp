#include <iostream>

int main() {
    // sizeof()= determines the size in bytes of a :
    // variable, data type, class, objects, etc.

    //for eg
    double gpa=2.5;
    std::cout<<sizeof(gpa)<<" bytes \n";
    //this statement gives the size of the gpa variable its the max size allocated to gpa double if we check for the data type which is double instead of a particular double it will be same
    //for eg
    std::cout<<sizeof(double)<<" bytes \n";

    std::string name="Brekjbcdfcjedfco";
    std::cout<<sizeof(name);
    //even when we change the data inside the size will be same because string is a reference data type
    char grade='f';
    std::cout<<sizeof(grade);
    bool student=true;
    std::cout<<sizeof(student);

    // this means double take 8 bytes, string takes 24 bytes, char and bool take 1 byte, amd the size of a array is the follwoing...
    char grades[]={'a','b','c'};
    std::cout<<sizeof(grades);
    //this means arrays ka size ek set nahi hota hai vo uske members se pata chalta hai since here are 3 characters in the array and we knw the char variable is 1 bytes this means its size is 3 bytes...
    //this means it helps to find the no of members in a array...
    std::cout<<sizeof(grades)/sizeof(grades[0])<<" bytes\n";
    // this helps us to get the no of meembers as we are dividing total size by size of its first member.. or we can divide by the size of its data type if we know it
    
    return 0;
}