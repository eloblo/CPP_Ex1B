#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std;
#include "snowman.hpp"

int main(){
    srand(time(NULL)); //set the current time as seed for random results
    //make a valid build for the snowman
    int build = rand() % 4 + 1;  
    for(int i = 0; i < 7; i++){  
        build *= 10;
        build += rand() % 4 + 1;
    }
    cout << ariel::snowman(build) << endl;
    return 0;
}
