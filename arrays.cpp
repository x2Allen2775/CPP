#include <iostream>

int main() {
    //array= a data structure that can hold multiple values
    // values are accessed by a index number
    // "kind of variable that holds multiple values"

    //std::string car="Honda";
    //to make this variable change into arrayy we need to do the following modifications
    //std::string car[]={"Honda", "Mustang","Camary"};
    //Now the car variable has been transformed into an array. It's like dictionary in Python, but here we say It as array now I can contain multiple values, which are here, Honda Mustang and Camry.
    //But if we now use standard output car, it will give a memory address instead of the values contained in it. Hence we need to use the index index of the values contained in the array to actually display what we want to.
    //std::cout<<car[0]<<'\n';
    //std::cout<<car[1]<<'\n';
    // if you want to change a certain value, we would reassign the values like the following
    //car[0]="Camaro";
    //std::cout<<car[0];
    // one drawback of using array is that it will only contain a certain type of values. If for example, here I add Honda Mustang Camry and an interior the compiler will given error hence if we using a string operator, then it will only contain string data and if other than other.
    // if you don't know what we want to put in the Arabic, we can use it to just initialise at first, and then assign the values later. Write the following....
    //std::string car[3];
    //car[0]="Camaro";
    //car[1]="Mustange";
    //car[2]="Camry";
    //but still we would get an error saying the size has not been mentioned we can mention later as i said before but we need to declare how many values we will piut
    //since there are three for now the square bracket should have value 3..

    //lets take another example..

    double price[]={5.00,7.50,9.99, 15.00};
    std::cout<<price[0]<<'\n';
    std::cout<<price[1]<<'\n';
    std::cout<<price[2]<<'\n';
    std::cout<<price[3]<<'\n';
        
    
    return 0;
}