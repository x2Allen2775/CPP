#include <iostream>

class student{
    public:
     std::string name;
     int age;
     double gpa;
     //constructor has the same name as the class think of it as the function it does accepts the attributes
     //here we have use dthe same name but we can do it differently as we here did to reduce the ambiguity

     student(std::string name, double gpa, int age){
        this->name=name;
        this->gpa=gpa;
        this->age=age;
        //here this name gpa age are the attributes name which are in the brackets of the construuctors while the equal to name age and gpa is the ones present in the class
        //if the name of the parameters and attributes are not the same then instead of using the this keyword we just do the following
        //lets say the name is x then
        //name=x and like wise to the other attributes
        
     }
};

int main() {
    //constructor= special method that is automatically called when an bject is instantiated
    // useful for assigning values to attributes as arguments
    //for wg beofre we were doing like this car1.make="Ford"; thru constructors we can do this automatcically


    student student1("Spongebob", 3.2, 25);
    //there is a constructor which is running behind the scenes automatcially but we can explicitly create one
    //now unlike the struct or oops we dont have to pass the value alag se while the constructor does the job we just need to call the constructor


    std::cout<<student1.name<<'\n';
    std::cout<<student1.age<<'\n';
    std::cout<<student1.gpa<<'\n';



    return 0;
}