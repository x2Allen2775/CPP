//banking programme
#include <iostream>
#include <iomanip>


void showbalance(double balance);
double deposit();
double withdraw(double balance);


int main() {
    double balance=0;
    int choice=0;
    //if we type any character other than numeric value it will loop our code so to prevent it we will clear any input buffer which will flag off any errors in the code and then flush to end the space buffer after our input
    std::cin.clear();// removes any error flags
    fflush(stdin);
    do{
    std::cout<<"*****Welcome To The Bank******\n";
    std::cout<<"Please enter the type of service you want to use.\n";
    std::cout<<"Press 1 to check the balance.\n";
    std::cout<<"Press 2 for deposit.\n";
    std::cout<<"Press 3 for withdrawl.\n";
    std::cout<<"Press 4 to exit the bank system.\n";
    std::cin>>choice;

    switch(choice){
        case 1: showbalance(balance);
        break;
        case 2:
            balance+=deposit();
            showbalance(balance);
            break;
        case 3:
            balance-= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout<<"Thanks for visition!\n";
            break;
        default: std::cout<<"Invalid choice\n";
    }
}while(choice!=4);

    
    return 0;
}
void showbalance(double balance){
    std::cout<<"Your balance is : "<<std::setprecision(2)<<std::fixed<<balance<<'\n';
}
double deposit(){
    double amt=0;
    std::cout<<"Pls enter the amt you want to deposit: ";
    std::cin>>amt;
    if(amt>0){
        return amt;
    }
    else{
        std::cout<<"Pls enter a valid amt.\n";
        return 0;
    }
}
double withdraw(double balance){
    double amt=0;
    std::cout<<"Enter amt to be withdrawn: ";
    std::cin>>amt;
    if(amt>balance){
        std::cout<<"Insufficient funds\n";
        return 0;
    }
    else if(amt<0){
        std::cout<<"Thats not a valid amt\n";
        return 0;
    }
    else{
        return amt;
    }
    return 0;
}