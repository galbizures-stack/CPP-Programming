#include <iostream>
#include <cmath>
#include "mathutils.h"
#include "ascii.h"

using namespace std;

int main() {

    int firstNum{0}, secondNum{0};
    bool isFirstNumLower;
    cout<<"Input two integers separated by a space >> ";
    cin>>firstNum>>secondNum;

    isFirstNumLower = errorCheck(firstNum, secondNum);

    while (isFirstNumLower==true){
        allOddNumbers(firstNum,secondNum);
        addEvenNumbers(firstNum, secondNum);
        break;
    }

    for (int i = 1; i < 11; i++){
        cout<<i<<" "<<pow(i,2)<<endl;
    }

    while (isFirstNumLower==true){
        addSquaredOddNumbers(firstNum, secondNum);
        break;
    }
    loopAscii(65,90);    
    return 0;
}