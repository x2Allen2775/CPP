#include <iostream>
int searcharray(int array[], int size, int element);

int main() {
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int mynum;
    std::cout<<"Enter element to search for: \n";
    std::cin>>mynum;
    index=searcharray(numbers, size, mynum);
    if(index != -1){
       // this means the value is somewhere present in the array
        std::cout<<mynum<<" is at index "<<index;


}
else {
    std::cout<<mynum<<" is not in the array";

}
    return 0;
}
int searcharray(int array[], int size, int element){
    //for main function which will actually search the array for the asked number in this example-- we have to iterate over the whole array and see if any matches are there
    //int array and int numbers are the same we know that the names can be different in different functions
    //and element is the mynum
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1; 
    //-1 in programming is a sentinel value.... it means that something is not found in programming languages..
}
