#include <iostream>
//how to pass struct as an argument in a function

struct car{
    std::string model;
    int year;
    std::string color;

};
//void printcar(car car);
void printcar(car &car);

int main() {
    car car1;
    car car2;
    car1.model="Mustang";
    car1.year=2025;
    car1.color="Black";

    car2.model="Bla";
    car2.year=2025;
    car2.color="Red";

    std::cout<<&car1<<'\n';
    printcar(car1);
    return 0;
}

/*
void printcar(car car){
    std::cout<<&car<<'\n';
    std::cout<<car.model<<'\n';
    std::cout<<car.year<<'\n'; 
    std::cout<<car.color<<'\n';

}
    */
void printcar(car &car){
    std::cout<<&car<<'\n';
    std::cout<<car.model<<'\n';
    std::cout<<car.year<<'\n'; 
    std::cout<<car.color<<'\n';

}

//the struct are using passby values rather than pass by reference
//when we are passing a struct we are passing a copy of the ain struct

//see we have printed the address at both places meaning in the  main function and passing argument in the print car function means it is not passing the actual value but the copy of it hence it is giving two memory address for the same thing
//if we want to work on the oriuginal struct rather using just the name of the nickname variable which we are passsing prefic it with dereferencing operator ie &


//to change the color of the car for eg we need to use the address of operator as it is not copying the value but changing the original one if we dont use that we wont see the new color of the color as the changed one it will be the same
