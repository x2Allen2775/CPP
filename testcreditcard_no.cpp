//credit card authenticator
//to check the authentication we use luhn algorithm
//1. doible every second digits, from right to left
//if doubled number is 2 digits split them
//2. add all single digits from step 1
//add all odd numbered digits from right to left
//4. sum results from step 2 and 3
//5. if step 4 is divisible by 10,#is valid

//lets take an eg of credit card
//6011 0009 9013 9424

#include <iostream>


int getdigit(const int number);
int sumodddigits(const std::string cardnumber);
int sumoevenigits(const std::string cardnumber);


int main() {
    std::string cardnumber;
    int result=0;
    std::cout<<"Enter a credit card no.: ";
    std::cin>>cardnumber;
    result=sumoevenigits(cardnumber)+sumodddigits(cardnumber);
    if(result %10==0){
        std::cout<<cardnumber<<" is valid";

    }
    else{
        std::cout<<cardnumber<<" is not  valid";
    }
    return 0;
}
int getdigit(const int number){
    return number%10+(number/10%10);
    //this line of code is to split the two digit number and add its digits...

}
int sumodddigits(const std::string cardnumber){
    int sum =0;
    
    for(int i=cardnumber.size()-1; i>=0;i-=2)
    {
        sum+=getdigit((cardnumber[i]-'0'));
//odd walo ke case mei double karne ki zaroorat nhi hoti
    }
    return sum;
}
int sumoevenigits(const std::string cardnumber){
    int sum =0;
    //we need to iterate over our card no in reverse order
    //we can treat a string as array of numbers
    for(int i=cardnumber.size()-2; i>=0;i-=2)
    {
        sum+=getdigit((cardnumber[i]-'0')*2);
        //see here is the reason ki why we subtracted 0 or inplace of character 0 we use integer 48 due to its decimal value ascy table... because 0 in asky table has  certain value and it will affect the cardalgorithm very much...

    }
    return sum;

}