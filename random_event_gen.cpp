#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int randnum=(rand()%6)+1;
    switch(randnum){
        case 1:
            std::cout<<"You win a bumper sticker"<<'\n';
            break;
        case 2:
        std::cout<<"You win a tshirt"<<'\n';
            break;
        case 3:
        std::cout<<"You win a bottle"<<'\n';
            break;
        case 4:
        std::cout<<"You win a life"<<'\n';
            break;
        case 5:
        std::cout<<"You win a death"<<'\n';
            break;
        case 6:
        std::cout<<"You win a bla bla"<<'\n';
            break;
    }
    return 0;
}