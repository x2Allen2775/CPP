#include <iostream>
#include <ctime>





char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main() {
    char player;
    char computer;
    player=getuserchoice();
    std::cout<<"You choice: ";
    showchoice(player);
    computer=getcomputerchoice();
    std::cout<<"Computers choice: ";
    showchoice(computer);

    choosewinner(player, computer);

    return 0;
}
char getuserchoice(){
    char player;
    std::cout<<"Rock paper scissors game!\n";
    do{std::cout<<"Choose one of the following";
    std::cout<<"*************************\n";
    std::cout<<"'r' for rock\n";
    std::cout<<"'p' for paper\n";
    std::cout<<"'s' for scissors\n";
    std::cin>>player;
    }while(player!='r' && player!='p' && player!='s');
    return 0;
}
char getcomputerchoice(){


    srand(time(0));
    int num=rand()%3+1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r': std::cout<<"Rock\n";
         break;
        case 'p': std::cout<<"Paper\n";
         break;
        case 's': std::cout<<"Scissors\n";
    }
}
void choosewinner(char player, char computer){
    switch(player){
        case 'r': if(computer=='r'){
            std::cout<<"Its a tie\n";

        }
        else if(computer=='p'){
            std::cout<<"You lose!\n";

        }
        else{
            std::cout<<"You win\n";

        }
         break;
    
        case 'p': if(computer=='r'){
            std::cout<<"You win!\n";

        }
        else if(computer=='p'){
            std::cout<<"Its a tie!\n";

        }
        else{
            std::cout<<"You lose\n";

        }
         break;

        case 's': if(computer=='r'){
            std::cout<<"You lose\n";

        }
        else if(computer=='p'){
            std::cout<<"You win!\n";

        }
        else{
            std::cout<<"its a tie\n";

        }
        break;
    }
}