#include <iostream>

int main(){
    // there are two steps to create and use the variable ie declaration and assignment
    //declaration--
    int x; // declaration and int is for integer type variable
    x=5;// this is assignment

    std::cout<< x<<'\n';
    //or we can do both the things together if we know what value we are going to assign from the beggining...
    int y;
    y=6;
    std::cout<<y<<'\n';
    

    int sum=x+y;

    std::cout<<sum;

    //integre(whole number)
    int age=21;
    int year=2025;
    int days=7.5;
    // if we want to display days it will truncate .5 and only display 7 or it will not even show the 7 and give the error

    //double(number including decimal)
    double price=10.99;
    double gpa=2.5;

    std::cout<< gpa;


    //single character

    char grade='A';//for singular character we put singulat inverted comma
    char initial='B';
    std::cout<<initial;


    //boolean(true/false)

    bool student=true;
    bool power=false;


    //string(object that represents a sequence of text)
    std::string name="Bro";
    std::string day="Friday";

    std::cout<<name;

    //to add a literal text with the variable
    std::cout<<"Hello "<<name;

    return 0;
}