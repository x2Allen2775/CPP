#include <iostream>

int main() {
    //nested loop= are the loops inside other loops
    /*
        loop(){
            loop(){
            }
        }    
    */


    //for eg code to count to 10 three times

    //for(int f=1; f<=3; f++){
        //for(int i=1; i<=10; i++){
            //std::cout<<i<<'\n';
        //}
   // }

    //another example....

    int rows;
    int columns;
    char symbol;
    std::cout<<"How many rows?: ";
    std::cin>>rows;
    std::cout<<"How many columns?: ";
    std::cin>>columns;
    std::cout<<"Enter a symbol to use:  ";
    std::cin>>symbol;
    for(int f=1; f<=rows; f++){
        for(int i=1; i<=columns; i++){
            std::cout<<symbol<<' ';
        }
        std::cout<<'\n';
    }
    return 0;
}