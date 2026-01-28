#include <iostream>

int main() {
    //how to iterate over any array...
    std::string students[]={"Spongebob","Patrick","Squidward"};
    //either we can do the following 
    //std::cout << students[0] << '\n';
    //std::cout << students[1] << '\n';
    //std::cout << students[2] << '\n';

    //or to do it using the loop 
    for (int i=0;i<sizeof(students)/sizeof(std::string);i++){
        //here equal to sign isliye nahi ayega kyuki code 0 ko bhi considder karra hai in the ending index too

        std::cout<<students[i]<<'\n';
        //but we add any value in the array we would need to change the value of the index each time we add this means here we need to change 3 to 4 or we can use the size of operator


    }
    //another eg..
    char grades[]={'a','b','c'};
    for (int i=0;i<sizeof(grades)/sizeof(char);i++){
        
        std::cout<<grades[i]<<'\n';


    }
    
    
    return 0;
}