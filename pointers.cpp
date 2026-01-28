#include <iostream>

int main() {
    // pointers=variable that stores a memory address of another variable
    // sometimes its easier to work with an address

    //& address of operator
    //*dereference operator
    std::string name="Bro";
    // now we will create a pointer to name means the address of the variable on my computer
    //pointer should be of same data type of which it is pointer to
    std::string *pName=&name;
    //name of the pointer can be different and it should have the prefix 'p' and use the & sign prefix to the name of the variable which is the reference to the pointer
    std::cout<<pName;
    //only pName will give me the address of the variable and dereferencing operator ie *pName will only give the value stored in the 
    std::cout<<*pName;
    //this gives the values stored at the memory addresss set by the pointer


    //for another eg we make an array of five pizzas instead of giving pizzas to individual addresses we will give the address of the pizza those who want to take can come at that specific address and buy
    std::string freepizza[5]={"pizza1","pizza1","pizza1","pizza1","pizza1"};
    std::string *pFreepizza=freepizza;
    //array ios it self a address hence we dont need to use the address operator(&).
    std::cout<<*pFreepizza;
    return 0;
}