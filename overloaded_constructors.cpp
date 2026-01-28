#include <iostream>

class pizza{
    public:
        std::string topping1;
        std::string topping2;
    pizza(std::string topping1){
        this->topping1=topping1;
    }
    pizza(std::string topping1, std::string topping2){
        this->topping1=topping1;
        this->topping2=topping2;
    }
    pizza(){
        
    }
};

int main() {
    //overloaded constructors= multiple constructors with same name but different parameters
    //allows for varying arguments when instantiating an object
    pizza pizza1("pepparoni");
    std::cout<<pizza1.topping1<<'\n';

    pizza pizza2("mushroom", "peppers");
    std::cout<<pizza2.topping1<<'\n';
    std::cout<<pizza2.topping2<<'\n';


    //lets say we need a pizza with no topping so we will do the following
    pizza pizza3;//but with out the paranthesis as we are not passsing no arguments but to do so we need the same type of constructors too ie without any arguments

    return 0;
}