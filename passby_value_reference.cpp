#include <iostream>
void swap(std::string &x, std::string &y);
int main() {
    //in this eg we will swap two variables
    std::string x="Kool aid";
    std::string y="Water";
    /*
    std::string temp;//this is a temporary variable 
    temp=x;
    x=y;
    y=temp;
    *///basically the above quoted lines are the code to swap the variable data between them but we will create a specific function to do the job
    swap(x,y);
    std::cout<<"X: "<<x<<'\n';
    std::cout<<"Y: "<<y<<'\n';
    //here the function will not work becoz when we pass the values from function to function it creates a copy and then transfer a copied value not the original values so if we modify the value we are actually doing it to the copied value so it does not affect the original values
    //hence these are called passby values
    //if i want to change the original values i could use the pass by reference
    //we hence change our approach by sending the copied values/ variable we are sending the memory addresses to the function to interchange the memory address hence we are basically change the address not the actual values 

    return 0;
}
//lets create a function to swap the variable
void swap(std::string &x, std::string &y){
    std::string temp;
    temp=x;
    x=y;
    y=temp;
    
}
//when calling the swap function in the main function we are not writing the & sign as we know when calling the function we dont need to write its type and also we dont need to type the return line in the swap function as cpp is automatically taking the values as reference variable and helping us to connect the dot and automatically sending back the memory addresses so that the main function can locate the changed address
//its just for our own help and its like cpp has its own kind of brain which understands us that he is not passing values but passing reference....
