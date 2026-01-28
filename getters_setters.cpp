#include <iostream>


class Stove{
    //public:
    //now to change the ability to modify the variable in public section change the public to private so that it cant be modified from out side the class
    private:
        int temperature=0;
        //now to access it from the outside world we will create a getter..
    //which can be made by the following
    public:
    int getTemperature(){
        return temperature;
        //from this code teh temp is readable not modifyable...
    }
    //for the temp in this case to be changed/setable we will create a setter
    void setTemperature(int temperature){
        //inside teh setter we can add additional checks and logics for eg we can check first what is the temp
        if(temperature<0){
            this->temperature=0;
        }
        else if(temperature>=10){
                this->temperature=10;;
        }
        else{
            this->temperature=temperature;
        }
        
        //this->temperature=temperature;

    }

};

int main() {
    //abstraction= hiding unneccessarry dtat from outside a class
    //getter=function that makes a private attribute readable
    //setter=function that makes a private attribute writable
    Stove stove;

    //since the int temp in the public section of the stove class is accessible out side the class means it can be modifies from outside teh class
    //stove.temperature=10000000;

    //std::cout<<"The temp. is "<<stove.temperature<<'\n';
    
    //and now since the temop is pvt it cant be accessed and gives the error when we try to moidify it


    stove.setTemperature(5);//now it can be changed too
    std::cout<<"The temp. is "<<stove.getTemperature()<<'\n';
    

    return 0;
}