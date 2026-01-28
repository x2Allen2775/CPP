#include <iostream>

int main() {
    //foreach loop=loop that eases the traversal over an iterable data set
    std::string students[]={"Spongebob","Patrick","Squidward"};
    int grades[]={34,45,45};
    for(std::string student:students){
        std::cout<<student<<'\n';
        //this is a basic eg of a for each loop it works only one way and cant be incrimented or decrimented by our choice it has less flexibility but less syntax...
        //it is like datatype index name:array name....
    }
    for(int grade:grades){
        std::cout<<grade<<'\n';
        
    }



    return 0;
}