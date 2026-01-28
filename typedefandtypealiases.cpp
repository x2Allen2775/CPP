#include <iostream>
//for the following eg

#include <vector>
// suppose we have a long data type andn we like to type def it meanning give an another name(alias)

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //now this line is out of our knowledge for now but for eg we have used it is a long ass data type we have given a alias to it named pairlist and after it we usually use underscore t to tell the type



//for eg 2

//typedef std::string text_t;
//typedef int number_t;
//eg how to use using keyword
using text_t=std::string;
using number_t=int; //this works the same



int main(){
    // typedef= reserved keyword used to cresate an additional name (kinda like nicknames)
    //  (alias) for another data type
    // New identifier for an existing type
    // Helps with the readability and reduces typos
    // use when there is a clear benefit
    // replaced with 'using'  (workbetter with templates)

    //now to call the full pairlist like (typedef std::vector<std::pair<std::string, int>> pairlist_t pairlist;) we will only write
    //pairlist_t pairlist;





    //eg 2
    text_t firstname="Bro";
    number_t age=21;

    std::cout<<firstname<<'\n';
    std::cout<<age<<'\n';

    return 0;
}