#include <iostream>

/*
double square(double length);
double cube(double length);


int main() {
    // return =return a value back to the spot
    // where you called the encompassing function


    //lets take an example of creating a code to find the area of a rectangle...
    double length=5.0;

    double area=square(length);//jab call karte hai function ko to variable ke sath uska type nahi likhte only name
    double volume=cube(length);
    std::cout<<"Area: "<<area<<"cm sq. \n";
    std::cout<<"Volume: "<<volume<<"cm cube \n";
    return 0;
}

double square(double length){
    double result= length*length;

    return result;
}
//now here we wont write the void as we are returning something which is a double so instead of void i will put double there
double cube(double length){
    double result= length*length*length;
    return result;
}
*/

std::string concatstrings(std::string string1, std::string strinig2);

int main() {
    std::string firstname="bro";
    std::string lastname="Code";
    std::string fullname=concatstrings(firstname, lastname);
    std::cout<<"Hello "<< fullname;
    return 0;
}

std::string concatstrings(std::string string1, std::string string2){
    return string1+" "+string2;
}
//see here we are returning a string hence the keyword is std::string....
