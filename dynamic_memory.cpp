#include <iostream>

int main() {
// dynamic memory = Memory that is allocated after the program
//                  is already compiled & running.
//                  Use the 'new' operator to allocate
//                  memory in the heap rather than the stack
//
//                  Useful when we don't know how much memory
//                  we will need. Makes our programs more flexible,
//                  especially when accepting user input.
//lets take an eg preety basic of int data type

    int *pnum=NULL;
    pnum=new int;
    //lets say we will assign the the value of the num variable in the near future so we will do the follwing to assign the new value

    *pnum=21;
    std::cout <<"address "<<pnum<<'\n';
    std::cout <<"value "<<*pnum<<'\n';
    //its good to use the delete operator too when using the new operator to free up the space when the value we assigned is not taking the space in the variable
    delete pnum;
    //we are freeing up the memeory occupied by this pointer
    //if we dont use this then w may cause a memory leak



    //lets create a dynamic array 
    char *pgrades=NULL;

    int size;
    std::cout<<"How many grades to enter in : ";
    std::cin>>size;
    pgrades=new char[size];
    //when making the dynamic memory using the array we use the sq brackets infront of the data type of the array and the sq brackets should include the size of the array, but if we already know what is the point of using the concept of dynamic memory we could make it as normally as possible...hence we would solve the proble by taking the user input
    for (int i=0;i<size;i++){
        //loop to enter the grades from the user
        std::cout<<"Enter grade #"<<i+1<<": ";
        std::cin>>pgrades[i];

    }
    for(int i=0;i<size;i++){
        std::cout<<pgrades[i]<<" ";
    }
    delete[] pgrades;
    //to prevent the memory loss
    //sq brackets becoz its an array
    return 0;
}