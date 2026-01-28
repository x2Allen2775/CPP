//#include <iostream>

//void walk(int steps);


//int main() {
// recursion = a programming technique where a function
//             invokes itself from within
//             break a complex concept into a repeatable single step

// (iterative vs recursive)

// advantages = less code and is cleaner
//              useful for sorting and searching algorithms

// disadvantages = uses more memory
//                 slower
   // Recession is like a process which breaks a complex or bigger step into little small steps. For example, if we take an example of the task of walking, then the recursion will break the task of walking into smaller steps, which will be taking one step at a time.
   // walk(100);
    //return 0;
//}
//void walk(int steps){
    //iterative approach

   // for(int i=0;i<steps;i++){
      //  std::cout<<"You take a step!\n";
   // }

   //recussive approach
  // if(steps>0){
    //std::cout<<"You take a step!\n";
    //walk(steps-1);
    // this is a Example of recursion in which we are invoking the same function inside itself and just in putting the steps by decrement it by one
    // another problem with recursion is that if we invoke the function inside itself in such a way that it creates an infinite loop. I will do something what is generally called as stack overflow. It is the process in which, when we invoke the same function itself, it creates a frame, and when the function creates infinite loop, it overflows the memory.
    

///}
//}

//lets create another eg of doing the factorial process
#include <iostream>
int factorial(int num);
int main() {
    std::cout<<factorial(10);

    return 0;
}
int factorial(int num){
    if(num>1){
        return num*factorial(num-1);
    }
    else{
        return 1;
    }
}