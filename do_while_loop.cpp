#include <iostream>

int main() {
    //do while loop= do some block of code first,
    // then repeat again i fthe condition is true
    //for eg

    int number;
    do
    {
        std::cout<<"Enter a pos. no.: ";
        std::cin>>number;

    }while(number<0);
    std::cout<<"The no is. "<<number;
    return 0;
}
// do while loop ka matlab hai means ki once run the code which is inside the loop then proceed to repeat until the condition is fullfilled..
//means ek baar to run hoga code inside the loop then fir repeat hoskta hai or nahi bhi hoga when the condition becomes true otherwise not
