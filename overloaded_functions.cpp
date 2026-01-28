#include <iostream>

void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping2,std::string topping1);
int main() {
    // in many languages including cpp there can be different variations of the same functions
    
    bakepizza();
    bakepizza("pepparoni");
    bakepizza("pepparoni","mushroom");
    return 0;
//see what we did here that even though there are two diff functions having different parameters and are used two time still not giving a asame result it is because function name plus its parameters are called function signature if the signature is different from the other it will work, it can be diff due to diff parameters or by diff name....

}

void bakepizza(){
    std::cout<<"Here is your pizza!\n";
}
void bakepizza(std::string topping1){

    std::cout<<"Here is your "<<topping1<<" pizza!\n";
}
void bakepizza(std::string topping2, std::string topping1){

    std::cout<<"Here is your "<<topping2<<" and "<<topping1<<" pizza!\n";
}

//this is a concept of function overloading, in which the function signature should be different but the function name can be same, but mindit when same their parameters should be diff
