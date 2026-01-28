#include <iostream>

int main() {
    std::string cars[3][3]={{"Mustang","Escaoe","F-150"},
                            {"Corvette","Equinox","Silverado"},
                            {"Challenger","Durango","Ram"}};

    //if we are just creating an array we only need just one square brackets but for multidimentional array we need two brackets
    //here we are taking an eg creating 2d aray of cars
    //if we declaring the array and assigning the value  we just need the value of no of columns which is the second sq bracket but if we are only declaring the array then we need both the sq brackets filled
    std::cout<<cars[2][2]<<" ";
    std::cout<<cars[1][2]<<" ";
    std::cout<<cars[0][0]<<" ";
    //if we need to iterate over 2d array we need to create nested loops
    //to iterated we need the value of no of rows and columns
    int rows=sizeof(cars)/sizeof(cars[0]);
    int columns=sizeof(cars[0])/sizeof(cars[0][0]);


    for (int i=0; i<rows;i++){
        for(int j=0; j<columns; j++){
            std::cout<<cars[i][j]<<" ";

        }
        std::cout<<'/n';

    }

    return 0;
}