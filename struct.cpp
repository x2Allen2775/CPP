#include <iostream>


struct student{
    std::string name;
    double gpa;
    bool enrolled;

};

int main() {
    //struct= a structure that group related variables under one name 
    // structs can contain may different data types (string,int, bool, double )
    //variables in a struct are known as "members"
    //members can be access with ."Class Member Access Operator"


    student student1;//its working like the student 1 wil have its own name gpa and the true and false of being enrolled
    //the members of tghe struct can be accesed by the dot followed by the specific variable inside the struct we are accessing
    student1.name="Spongebob";
    student1.gpa=6.9;
    student1.enrolled=true;
    std::cout<<student1.name<<'\n';
    std::cout<<student1.gpa<<'\n';
    std::cout<<student1.enrolled<<'\n';


    student student2;
    student2.name="Buke";
    student2.gpa=7.9;
    student2.enrolled=false;
    std::cout<<student2.name<<'\n';
    std::cout<<student2.gpa<<'\n';
    std::cout<<student2.enrolled<<'\n';
    //if i specifically defined in the struct fun ction the vaue of enrolled variable then each time idont have to specify the student we are talking about is enrolled or not it will be same for every one
    




    return 0;
}