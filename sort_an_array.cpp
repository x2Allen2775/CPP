//sorting of an array... we can take an example of bubble sorting algo..
//its an algo which works on the following principal
//say the array is 10,9,3,2....
//so first we store q0 in a temp variable and compare it with next no then shift the no if its smaller than 10 and then paste the temp variable next to it... and repeat it..

#include <iostream>
void sort(int array[], int size);

int main() {
    int array[]={10,1,9,2,8,3,7,4,6,5};
    int size=sizeof(array)/sizeof(array[0]);

    sort(array,size);

    for (int element:array){
        std::cout<<element<<" ";
        
    }
    
    return 0;
}
void sort(int array[], int size){
    int temp;
    for(int i=0; i<size-1;i++){
        //we did size -1 as the last no will automatically graavitate due to the algo...
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]){//if we want to create in descending order we can change the greater than sign to lesser than
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp; 
            }
        }
    }


}