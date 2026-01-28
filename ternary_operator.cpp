#include <iostream>

int main() {
    ////ternary operator ?:= replacement to an if/else statement
    //condition? expression1:expression2;
    //for eg we pass if marks above 60 and fail if less than that

    //int grade=75;
    //grade >=60 ? std::cout<<"You pass!":std::cout<<"You fail!";
    //agar grade 60 =< hua to you pass warna you fail meaning jese upar example me formula hai vese hi likha hai...
    //lets make another example to check if the no is even or odd...

    //int number = 2;
    //number % 2==1? std::cout<<"Odd":std::cout<<"Even";
    bool hungry=true;
    //hungry? std::cout<<"You are hungry" : std::cout <<"You are full";

    //other way of using ternary operator is...
    std::cout<<(hungry? "You are hungry":"You are full");
    return 0;

}