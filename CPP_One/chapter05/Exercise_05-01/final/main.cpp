#include "mathutils.h"
#include <iostream>
using namespace std;
int main() {
    const int UPPER_INT_LIMIT = 2147483647;
    const int LOWER_INT_LIMIT = -2147483648;
    int numberInput;
    bool condition = numberInput<=UPPER_INT_LIMIT && numberInput>=LOWER_INT_LIMIT;

    cout<<"Please input a number: ";
    cin>>numberInput;

    if (condition){
        while (numberInput!=0){
            spaceBetween(numberInput);
            additionOfPlaces(numberInput);
            cout<<endl;
            cout<<"Please input a number, 0 to exit: ";
            cin>>numberInput;
        }
        cout<<"Exiting..."<<endl;
    }else{
        cout<<"Input exceeds limits, exiting..."<<endl;
    }
    return 0;
}
    //will output 
    //spaceBetween(2345526) >> 2345526 as 2 3 4 5 5 2 6
    // for function additionOfPlaces() will take 
    //2345526 as 2+3+4+5+5+2+6 and the output will read
    //Sum of numbers: 27

    //integer limits: -2147483648 to 2147483647
    //inputing -2147483648 would yield 2147483647 and its corresponding sum
    //has been addressed to find when absolute value of -2147483648 is worked down to 
    //ones place to replace 7 with 8 and the sum equals 47.
    //allowing for the program to produce a proper result for all numbers within
    //integer limits
    