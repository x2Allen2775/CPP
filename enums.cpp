#include <iostream>

enum Day {sunday=0, monday=1, tuesday=2, wednesday=3, thursday=4, friday=5, saturday=6};

int main() {
    //enums(enumerations)=a user defined data type that consits of paired named-integer constants.
    // GREAT if you have a set of potential options.


    //suppose we have day of the week

    //Day today="sunday";
    Day today=sunday;
     
//usually we cant use strings as the condition for the switches
   /* switch(today){
        case "sunday":std::cout<<"Its Sunday.\n";
        break;
    
    case "monday":    std::cout << "It is Monday!\n";
                  break;
    case "tuesday":   std::cout << "It is Tuesday!\n";
                    break;
    case "wednesday": std::cout << "It is Wednesday!\n";
                    break;
    case "thursday":  std::cout << "It is Thursday!\n";
                    break;
    case "friday":    std::cout << "It is Friday!\n";
                    break;
    case "saturday":  std::cout << "It is Saturday!\n";
                    break;
    }
                    */
//without using enums the code give sthe error with the strings when we use them as the condition for the switches
    switch(today){
        case sunday:std::cout<<"Its Sunday.\n";
        break;
    
    case monday:    std::cout << "It is Monday!\n";
                  break;
    case tuesday:   std::cout << "It is Tuesday!\n";
                    break;
    case wednesday: std::cout << "It is Wednesday!\n";
                    break;
    case thursday:  std::cout << "It is Thursday!\n";
                    break;
    case friday:    std::cout << "It is Friday!\n";
                    break;
    case saturday:  std::cout << "It is Saturday!\n";
                    break;
    }
    //we could use there integer part as well for eg in place of monday we use 1 like wise
    return 0;
} 
//if you give the response different from the stored value in the enums then the code will give the error like the given valiue does not exist
