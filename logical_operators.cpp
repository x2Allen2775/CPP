#include <iostream>

int main() {
    // &&(and) =check if two conditions are tru
    // ||(or)= check if at least one of two conditions is true
    // != reverses the logical state of its operand

    int temp;
    std::cout<<"Enter the temp.: ";
    std::cin>>temp;
    /*
    if(temp>0 && temp<30){ //meaning both the condition should be true
        std::cout<<"The temperature is good";

    }
    else{
            std::cout<<"The temp is bad";
    }
    */
   /*
    if(temp<=0 || temp>30){ //meaning either of the condition should be true
        std::cout<<"The temperature is bad";

    }
    else{
            std::cout<<"The temp is good";
    }
*/


    bool sunny=true;
    if(!sunny){//inverses the condition the not operator meaning it has the meaning of word not
            std::cout<<"It is cloudy outside!";
    }
    else{
        std::cout<<"It is sunny outside.";
    }
    return 0;
}