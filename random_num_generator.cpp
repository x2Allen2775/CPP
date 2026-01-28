#include <iostream>
#include <ctime>
//time 0 or null seed bole jaate hai... seeed is like  base from where the pattern starts if the seed is same like 0 or null in two different files then the generation of no. in the two files will be same...
//and we can use 0 or null anyting both have same significance because 0 is used for pointers
int main() {
    //pseudo random=Not truly random (but close)
    //srand(time(NULL));
    //int num=rand();
    //std::cout<<num;
    //ab ye ek randomm no dega from 0 to 32767 idk why but yeh hi hai to give a specific range do the following yaha par srand(time(NULL)) is the initiallising step and time is the seed generally programmers use the time module...

    srand(time(NULL));
    int num=(rand()%6)+1;
    // basically maths me we have studied that if we divide any no by any other no to jisse vo divide hota hai vo utne remainder de sakta hai meaning if we divide any no by 6, to due to the no being divided by 6 only possibilities for the remainder are 1 to 6 but yaha par 0 bhi aa sakta hai which when divided by 6 or anynjo gives 0 hence usko hata ne ke liye hum plus 1 karte hai hence this method is pseudo not correct correct but does the job
// and since we need to take an ex of a dice we have divide by 6 and the reaminder we get and then to eliminate 0 we added 1 so each time the remainder plus 1 will be the random no...
// to jab bhi randoim no ki range specify karni hai to use this 6 instead of the range ka highest no then plus 1
    std::cout<<num<<'\n';



    //lets say we need to make three dices

    srand(time(NULL));
    int num1=(rand()%6)+1;
    int num2=(rand()%6)+1;
    int num3=(rand()%6)+1;
    std::cout<<num1<<'\n';
    std::cout<<num2<<'\n';
    std::cout<<num3<<'\n';


    return 0;
}