#include <iostream>


void printinfo(const std::string name, const int age);
int main() {
    //const parameters=parametre that is effectively read only
    //  code is more secure and conveys intent 
    //useful for references and pointers
    //for eg
    std::string name="Bro";
    int age=21;
    printinfo(name, age);
    
    return 0;
}
void printinfo(const std::string name, const int age){
    //lets take an eg that if i chnage the variable values in the function it wil be modified but if i declare the variable name with prefix of const then the values we get from outside the function will become readonly and it will not be modifies
    //name=" ";
    //age=0;
    //and now that we have made it read only we cant edit the values of the variable and we get the error of syntax error that since we made it const still we are editing the variable.
    std::cout<<name<<'\n';
    std::cout<<age<<'\n';

}