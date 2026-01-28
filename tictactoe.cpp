#include <iostream>
#include <ctime>


void drawboard(char *spaces);
void playermove(char *spaces, char player);
bool checkwinner(char *spaces, char player, char computer);
void computermove(char *spaces, char computer);
bool checktie(char *spaces);
int main() {
    char spaces[9]={' ',  ' ',' ',' ',' ',' ',' ',' ', ' '};
    char player='X';
    char computer='0';
    bool running=true;
    drawboard(spaces);
    //when we pass arrays into functions it automatically decays into pointers
    while(running){
        playermove(spaces,player);
        drawboard(spaces);
        if(checkwinner(spaces,player,computer)){
            running=false;
            break;
        }
        if(checktie(spaces)){
            running =false;
            break;
        }
        computermove(spaces,computer);
        drawboard(spaces);
        if(checkwinner(spaces,player,computer)){
            running=false;
            break;
        }
        if(checktie(spaces)){
            running =false;
            break;
        }
    }
    std::cout <<"Thanks for playing";
    return 0;
}
void drawboard(char *spaces){
    std::cout<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  " <<spaces[0]<< "  |  " <<spaces[1]<< "  |  " <<spaces[2]<< "  "<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  " <<spaces[3]<< "  |  " <<spaces[4]<< "  |  " <<spaces[5]<< "  "<<'\n';
    std::cout<<"_____|_____|_____"<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<"  " <<spaces[6]<< "  |  " <<spaces[7]<< "  |  " <<spaces[8]<< "  "<<'\n';
    std::cout<<"     |     |     "<<'\n';
    std::cout<<'\n';
}
void playermove(char *spaces, char player){
    int number;
    do{
        std::cout<<"Enter a spot to place a marker (1-9): ";
        std::cin>>number;
        number--;//becoz the array starts with 0 and we are asking the output from 1 to 9
        if(spaces[number]==' ')
        spaces[number]=player;
        break;
    }while(!number>0 || !number<8);
}
bool checkwinner(char *spaces, char player, char computer){
    if((spaces[0]!=' ' )&& (spaces[0]==spaces[1]) && (spaces[1]==spaces[2])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[0]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    else if((spaces[3]!=' ' )&& (spaces[3]==spaces[4]) && (spaces[4]==spaces[5])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[3]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    else if((spaces[6]!=' ' )&& (spaces[6]==spaces[7]) && (spaces[7]==spaces[8])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[0]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    else if((spaces[0]!=' ' )&& (spaces[0]==spaces[3]) && (spaces[3]==spaces[6])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[0]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    else if((spaces[1]!=' ' )&& (spaces[1]==spaces[4]) && (spaces[4]==spaces[7])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[0]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    else if((spaces[2]!=' ' )&& (spaces[2]==spaces[5]) && (spaces[5]==spaces[8])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[0]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    else if((spaces[0]!=' ' )&& (spaces[0]==spaces[4]) && (spaces[4]==spaces[8])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[0]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    if((spaces[2]!=' ' )&& (spaces[2]==spaces[4]) && (spaces[6]==spaces[8])){
        //first if is to check first horizontal row has matching characters
        //here we will use the ternary operator
        spaces[0]==player? std::cout<<"You win!\n":std::cout<<"You lose!\n";
        //this has something missing bcoz if the row in which we are checking is not filled by anyone the computer is also checking blank in similar way  as it is checking in other ways... so if there are spaces in the whole row then also the function will display the winner

    }
    else {
        return false;
    }
    return true;

    
}
void computermove(char *spaces, char computer){
    int number;
    srand(time(0));
    while(true){
        number=rand()%9;
        if(spaces[number]==' '){
            spaces[number]=computer;
            break;
        } 
    }
}
bool checktie(char *spaces){
    //in this function we will iterate over our array spaces 
    for(int i=0;i<9;i++){
        if(spaces[i]==' '){
            return false;
            //meaning we can continue and dont stop the game
        }
        
    }
    std::cout<<"Its a tie!\n";
    
    return true;
}