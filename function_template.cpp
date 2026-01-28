#include <iostream>
//int max(int x, int y){
   // return (x>y)?x:y;
//}
//we can create many other function doing the same thing with diferent datattypes but what if we create a function that will accepts any data types
//that is done by function templates

template<typename T, typename U>
auto max(T x, U y){
    return (x>y)?x:y;
}
//here when we changed the previous data type with T it becomes a function which can accept any dtat atype but the code doesnt know what is T so we declared above the function what is the T in the code 
//lets say i gave 1 and 2.1 as the input to find the max in this scenario it will give the error means it is only capable to accept only same type of data type the above problem can be solved by adding another declaration just like T... UVW.....
//but astill it will truncate the value which is max as the returning type is T and we set as T to be integer we could again solve this by writing auto instead of T or U at the starting when writing the function


int main() {
    //function template== describes what a function looks like.
 // Can be used to generate as many overloaded functions
  //as needed, each using different data types
    std::cout<<max(1,2)<<'\n';
    return 0;
}