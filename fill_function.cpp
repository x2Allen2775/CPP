#include <iostream>

int main() {
    //fill()=fills a range of elemnts with a specified value
    //fill(begin, end, value)
    //std::string foods[10]/*setting max value of 10 just for the eg*/={"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};
    //we can use the const variable to set the size of the value for better understanding and if we want to change the value we can chage by changing it once only
    const int SIZE=100;
    std::string foods[SIZE];
    //just declare not yet fill
    //fill(foods, foods+SIZE,"pizza");
    //see here we gave begin as the address which is basically the name of the array, then the end which is the no of values you want to fill, the comes the value its just the characters by which you want to add
    fill(foods, foods+SIZE/2,"pizza");
    //this is to half way change the value till now the codee will write pizza 50 times and rest 50 times it will be blank to write something else instead of the next half being blank
    //do the follwoing
    fill(foods+(SIZE/2), foods+SIZE,"ahhh");
    for(std::string food:foods){
        std::cout<<food<<'\n';
        //now lets say ki mujhe 10 ki jagah 100 values daalni hai par vo manually karna bhot mushkil and time consuming hai to me fill function ka use karunga

    }
    return 0;
}