#include <iostream>


void happybirthday(std::string name, int age);
    //yaha par bhi code karsakte ho iske baare mei



int main() {
    //function=a block of reusable code
// to call the function
  //happybirthday();

  //lets create a variable and use it in the happy birthday function
  std::string name="Bro";
  int age=21;
 //we can call a function as many times we want
    happybirthday(name, age);
    happybirthday(name, age);
    

    return 0;
}
//somepeople usually define the functions after the main function... but this will give a scope error to prevent this we can do is that we just initialise a function above the main function but code inside it after main by calling again
//like
/*

void name();
int main(){
return 0;
}
void name(){

code hereeeeeeeeeeeeeee..............
}

*/

void happybirthday(std::string name, int age){
    std::cout<<"Happy Birthday to "<<name<<'\n';
    std::cout<<"Happy Birthday to "<<name<<'\n';
    std::cout<<"Happy Birthday to "<<name<<'\n';
    std::cout<<"You are "<<age<<" years old"<<'\n';

}// but we will get an error now of scope functions cant see what is happening in the surrounding function
//hence we need the functions to let know of the variable we are modifying.. so we need to use the variable name insinde the paranthesis in the main function and also to to let the function know like we did below but their we have to let know the parameters too aboutt the type of data we are sending like in this case std::striing then the name
//we can change the name of the variable like in the main function we calling it by name, but in the std::string ... we can call it anything else it would work the same but we should not do as to create less confusion
