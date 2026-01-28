#include <iostream>

int main() {
    //if statememts=do somethoing if a condition is true.
    // if not, then dont do it

    //for eg we are making a loop to distribute adults and non adults
    int age;
    std::cout<<"Enter you age: ";
    std::cin>>age;

    
    if(age<=0){
        std::cout<<"Age is not possible";
    }
    else if(age>=18){
        std::cout<<"You are an adult";
    }
    else{
        std::cout<<"Pls enter an appropriate age!";
    }
    return 0;
}
//flow of the else if statements are very neccessary.....