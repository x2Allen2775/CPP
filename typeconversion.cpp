#include <iostream>

int main(){
//type connversion=conversion a value of one data type to another
// implicit=automatic
//explicit=precede value with new data type (int) x
    //first is the implicit eg
    //int x=3.14;

    //std::cout<<x;
    // now this is implicit that the code is automatically truncating the decimal values if the decimal values are in int variable
    //suppose now if we pu (int) bedore 3.14 and change int to double then it will store the int part of 3.14 in double and show the 3 as a double and since we did do this on our own it is explicit
/*
    double x= (int) 3;
    std:: cout<<x;

*/

//more eg


    //char x=100;
    //std::cout<<x;
    //since char only accepts a single character but 100 is threee character long hence it will give a asci table value auto matically
    //but if we display 100 by first chamging to a character then also it will give the same result
    //std::cout<<(char)100;

    //lets take another example of a test evaluation marks

    //int correct=8;
    //int questions=10;
    //double score= correct/questions*100;
    //std::cout<<score<< "%";
    //now this gives us 0 percent as we are doing integer divison and hence its truncating the decimal value and then multiplying with 100, now if we type cast question variable to double then it will show the correct value
    int correct=8;
    int questions=10;
    double score= correct/(double)questions*100;
    std::cout<<score<< "%";
    return 0;
}