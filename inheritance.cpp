#include <iostream>

//lets create a animal class which will be our parent class
class Animal{
    public:
        bool alive=true;
    void eat(){
        std::cout<<"This animal is eating\n";
    }
};
//now lets create two children classes who will inherit from parents class
class Dog:public Animal{
    public:
    void bark(){
        std::cout<<"The dog goes woof!\n";
    }
};

int main() {
    //inheritance= a class recieve attributes and methods from another class
    // children classes inherit from a parent class
    //helps to reuse similar code found within multiple classes



    Dog dog;
    std::cout<<dog.alive<<'\n';
    dog.eat();
    // so what inheritance is doing that when the child has the dog even though it is not filled with any line of cold, it is inheriting from its parents class, which in this case is animal. If we want, we could add additional details which will be individual to the children class in the children class itself.
    dog.bark();
    return 0;
}