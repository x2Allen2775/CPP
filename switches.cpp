#include <iostream>

int main() {
    //switch= alternative to using many "else if statements"
    //compare one value against matching case
    /*int month;
    std::cout<<"Enter the month (1-12): ";
    std::cin>> month;
//since we are checking of the value of the month the month will be in the paranthesis
    switch(month){
        case 1:
            std::cout<<"It is january";
            break;
        case 2:
            std::cout<<"It is february";
            break;
        case 3:
            std::cout<<"It is march";
            break;
        case 4:
            std::cout<<"It is april";
            break;
        case 5:
            std::cout<<"It is may";
            break;
        case 6:
            std::cout<<"It is june";
            break;
        case 7:
            std::cout<<"It is july";
            break;
        case 8:
            std::cout<<"It is august";
            break;
        case 9:
            std::cout<<"It is september";
            break;
        case 10:
            std::cout<<"It is october";
            break;
        case 11:
            std::cout<<"It is november";
            break;
        case 12:
            std::cout<<"It is december";
            break;

            //if no case then default case
        default:
            std::cout<<"Pls enter in only numbers (1-12): ";
    }
            */

    char grade;
    std::cout<<"What letter grade?: ";
    std::cin>>grade;

    switch(grade){
        case 'A':
         std::cout<<"You did great!";
         break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'F':
            std::cout << "YOU FAILED!";
            break;
        default:
            std::cout << "Please only enter in a letter grade (A-F)";
            }
    return 0;
}   
//default ke baad break nahi karte hai
