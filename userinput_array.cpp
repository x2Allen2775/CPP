#include <iostream>

int main() {
    //there are many ways to do this but we will learn only one now which is begginer friendly
    std::string foods[5];
    //when we dont fill an array with any values we need to give the size of the array for eg here we can fill it with no. 5
    //here we are stuck with the max value to be 5 we will learn the dynamic value in the future topics
    int size=sizeof(foods)/sizeof(foods[0]);
    //we need to create a temp variable to store the letter q if pressed by the user bcoz if we dont and put in the array it will display the q in the food items you ike
    std::string temp;
    for(int i=0;i<size;i++){
        //if a person dont like to state all 5 values so we will give the option to escape the for loop
        std::cout<<"Enter a food you like or 'q' to quit #"<<i+1<<": ";
        //will put i+1 insteat of i as the user might not know that the indexing starts from 0...
        std::getline(std::cin, temp);//we need to chnge thos food with indexi to temp due to the problem sttated above

        //getline function as we dont know that the user can use the spaces too in the user input
        if(temp=="q"){
            break;
        }
        else {
            foods[i]=temp;
        }

    }
    std::cout<<"You like the following food:\n";

    //now second problem arise that if we used diff new variable to use the letter q to quit now the extra left value which need to be filled will give blank spaces as the display hence to revome the space blank we will do the following chnages
    //change the for loop to standard for loopp
    /*
    for(std::string food:foods){
        std::cout<<food<<'\n';
    }
        */

    for (int i=0; !foods[i].empty();i++){
        std::cout<<foods[i]<<'\n';
        //Basically, Pehle Hum normal for loop use kar rahe jisme Hum rate Karte foods Are ko to display the actual food which was inputted by 
        //the user, but then we got into the problem of storing Q in the itself. We solve that problem by not adding the values of Q if we need 
        //to exit the code, but it left the array with blank spaces and the amount of the blank spaces was equal to the words which were left 
        //words/values left from the left maximum size of the array. That is, if the array size is said to be five, and we only entered three, 
        //then there will be two blank spaces. Then two remove this problem. We used a for loop which was customised by us that it would start 
        //from into one equal to 0 and end where where the foods are with index. Eye is not empty and increment it by plus one and then display
        //the food and if not, then it will return zero
    }
    return 0;
}