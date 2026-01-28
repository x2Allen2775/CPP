#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{

    //lets ask something for user input
    std::string name;

    int age;
    std::cout<<"Whats your name?: ";
    //std::cin>> name;
    //now lets say we need full name which will include spaces in it we cant use this method of cis directly we need to use the getline method which is as follows
    std::getline(std::cin, name);
    std::cout<<"Whats your age";
    std::cin>> age;
    std::cout<<"Hello "<<name<<'\n';
    std::cout<<"You are "<<age<<" years old!";

    return 0;
}
//now lets say we put the user input of age first and then the name which has getline function but this will give us some bullshit output because what happens is that normal cis for age will give a newline character in the buffer which will act as a character for the getnewline function hence to eliminate the newline functionor any buffer character we will put(>>std::ws) after std :: cin then whole line will becomes as ,
//td::getline(std::cin>>std::ws, name);  remember when getline is before normal std cis then its ok but when its after normal std cis it will create proble due to buffer character and we will prevent it by doing ths
