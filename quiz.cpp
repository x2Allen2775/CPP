#include <iostream>

int main() {
    std::string questions[]={"1. What year was C++ created?: ","2. Who invented C++?: ","3. What is the predecessor of C++?: ","4. Is the Earth flat?: "};
    std::string options[][4]={{"A. 1969","B.1975","C. 1985","D. 1989"},
    {"A. Guido van Rossum","B. Bjarne Stroutstrup","C.John Carmack","D. Mark Zuckerbuck"}
    ,{ "A. C", "B. C++", "C. C--", "D. B++" },
    { "A. yes", "B. no", "C. sometimes", "D. what's Earth?" }};
    char answerkey[]={'C','B','A','B'};
    int size=sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;
    for(int i=0;i<size;i++){
        std::cout<<"***************\n";
        std::cout<<questions[i]<<'\n';
        std::cout<<"***************\n";
        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
                std::cout<<options[i][j]<<'\n';

        }
        std::cin>>guess;
        guess=toupper(guess);
        if(guess==answerkey[i]){
            std::cout<<"CORRECT\n";
            score++;
        }
        else{
            std::cout<<"WRONG\n";
            std::cout<<"Anwer: "<<answerkey[i]<<'\n';
        }
    }
    std::cout<<"*******************";
    std::cout<<"*     RESULT      *";
    std::cout<<"*******************";
    std::cout<<"Correct Guess: "<<score<<'\n';
    std::cout<<"# of Questions: "<<size<<'\n';
    std::cout<<"Sore: "<<(score/(double)size)*100<<"%";
    //we wont get the correct result as we are using integer division we will use type casting
    //hence we will type cast it as double 
    return 0;
}