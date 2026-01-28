#include <iostream>
double gettotal(double prices[], int size);
int main() {
    double prices[]={89.38,64.46,783.33};
    int size=sizeof(prices)/sizeof(double);
    //lets make a function to add the prices of the arra
    double total=gettotal(prices,size);//here not required to mention the data type...
    std::cout<<total;
    return 0;
}

double gettotal(double prices[], int size){
    double total=0;
    for(int i=0;i<size;i++){
        //now the prob here is that the function actually dont know the value of the size as the function recieves the array from another function in the form of pointers which contains the address so we need to delibrately give the funct teh info about the size
        //thats why now i make a int variable named size in the main function
        total=total+prices[i];
        
    }
    return total;
}