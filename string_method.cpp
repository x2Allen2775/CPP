#include <iostream>

int main() {
    std::string name;
    std::cout<<"Enter you name: ";
    std::getline(std::cin, name);// get line because we dont count sopace in gget line warna normally karenge to space bhi gina jayega
    if(name.length()>12){//this is the built in length method of string operator
        std::cout<<"Your name cant be more than 12 characters.";

    }
    else if(name.empty()){//this function helps us to check if the string is empty or no... use ful case is to check the user input if the user has entered something or not...


        std::cout<<"You didnt enter your name";
    }
    else{
        std::cout<<"Welcome "<<name<<'\n';
        //name.clear();//this clears the string data
        //std::cout<<"Welcome "<<name;
        name.append("@gmail.com");//this is to append a string to another

        std::cout<<"Your username is now "<< name<<'\n';

        //we can return a character of particular position in the string
        std::cout<<name.at(0)<<'\n';//this will show first letter as indexing starts from 0
        //to insert a characteror string at the a specific position in the string...
        name.insert(0,"@");
        std::cout<<name<<'\n';
        //to find any specific character in the string...
        std::cout<<name.find(' ');//this line of code will return me the position of the space in my name variable...

        name.erase (0,3);// this erases the part of the string from character 1 to 3 meaning characters with position 1, 2 ,3 will be erased...
        std::cout<<name;
    }
    return 0;
}