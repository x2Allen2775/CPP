#include <iostream>

namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main() {
    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.


    //for eg

    
    //int x=0;
    //int x=1;
    //now this is not possible that two of the identical variables are the same hence we can use namespace
    using namespace first;
    std::cout<<x;
    //and to use the specific namespace x or anything prefix it with its namespace name
    std::cout<<first::x;  //::is scope resolution operator
    return 0;
}
//now when the different x are in different namespace the code will work fine without any errors but if i write code to display x without mentioning it will take the local x which is in the main function
//if we waant to not prefix the namespace before the variable we can first write the line 'using namespace first(jo bhi naam hai);'
//if there is a line in the code with 'using namespace std;' it helps to prevent writing std again and again meaning next time to perform anything we dont have to write std in the prefiix
//but this is an evil practice as std have 100s of function which can lead to saame name with some other thing so we should stick to writing std everywhere
//we should using instead of std one choose to write 'using std::cout;' to cut down to mainly basic functions or 'using std:: string;' these are some alt. for the above 
//if we write these lines first so we need not to write std again in the several functions like directly we can write 'cout<<<"bhdfbcbfd";'