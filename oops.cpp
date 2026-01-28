/*#include <iostream>

//lets take the eg and create a class for human objects

class human{
    public:
    //we are using here public accessing modifier... will study later on but the need to do this is to access the object in the public
        std::string name;
        std::string occupation;
        int age;
        //theh variables in class are reffered as attributes


        //now lets create a method which is a function in the class which a object can do
        void eat(){
            std::cout<<"This person is eating\n";

        }
        void drinking(){
            std::cout<<"This person is drinking\n";
        }
        void sleeping(){
            std::cout<<"This person is sleeping\n";

        }

};
//now we have created a human class which can be used as blue print to create human object...
//each object will have name occupartion and age and will do eat drinking sleeping

int main() {
    //object =A collection of attributes(characteristics) and methods(actions)
    //they can have characteristics and could perform actions
    // can be used to mimic real world items (ex. phone, Book, dog )
    // created from a class which acts as a "blue-print"





    //now to create a human object
    human human1;
    human1.name="Rick";
    human1.occupation="Scientist";
    human1.age=70;
    std::cout<<human1.name<<'\n';
    std::cout<<human1.age<<'\n';
    std::cout<<human1.occupation<<'\n';
    //this part is similar to structs but the thing with classes and objects is that they can perfom actions
    human1.eat();
    human1.drinking();
    human1.sleeping();




    return 0;
}


//if we want to defaultify some value or data to every object belong to the same classs the data which sould be same should be given in the class
//meaning if we want to set the occupation of all the objects belonging to same class we dont just declare the attrubute but also assign the value...
*/

//lets create different class
#include <iostream>

class car{
    public:
     std::string make;
     std::string model;
     int year;
     std::string color;


     void acclerate(){
        std::cout<<"You step on the gas!\n";
     }
     void brake(){
        std::cout<<"you step on the brakes\n";
     }
};

int main() {
    
    car car1;
    car1.make="Ford";
    car1.model="Mustang";
    car1.year=2023;
    car1.color="Silver";



    std::cout<<car1.make<<'\n';
    std::cout<<car1.model<<'\n';
    std::cout<<car1.year<<'\n';
    std::cout<<car1.color<<'\n';


    car1.acclerate();
    return 0;
}