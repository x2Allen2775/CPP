/*#include <iostream>

int main() {
    //break= break out of  a loop
    //continue=skip current iteration


    for (int i=1; i<=20; i++){
        if(i==13){
            continue;
        }
        std::cout<<i<<'\n';
    }
    return 0;
}*/
//its continue means ki 12 ke baad ab directly 14 display hoga 13 nahi hoga agar hum continue ki jagah break likh denge to fir 12 tak counting hogi fir aage nahi badhenge for eggg---
#include <iostream>

int main() {
    //break= break out of  a loop
    //continue=skip current iteration


    for (int i=1; i<=20; i++){
        if(i==13){
            break;
        }
        std::cout<<i<<'\n';
    }
    return 0;
}