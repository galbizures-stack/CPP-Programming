#include "mathutils.h"

#include <iostream>
#include <cmath>

using std::cout;

bool isItOdd(int number){
    if (number%2==0){
        return false;
    }else{
        return true;
    }   
}

int lowerNumberOdd(int firstNum){
    if (isItOdd(firstNum)==false){
        return firstNum+1;
    }else{
        return firstNum;
    }    
}

int upperNumberOdd(int secondNum){
    if (isItOdd(secondNum)==false){
        return secondNum-1;
    }else{
        return secondNum;
    }    
}

bool errorCheck(int firstNum, int secondNum){
    if (firstNum<secondNum){
        return true;
    }else{
        std::cout<<"First number can't be equal to or "<<
        "more than the second number. Goodbye."<<std::endl;
        return false;
    }    
}

void allOddNumbers(int firstNum, int secondNum){
    int start, end;
    start = lowerNumberOdd(firstNum);
    end = upperNumberOdd(secondNum);
    for (int i = start; i < end; i+=2){
        std::cout<<i<<" ";
    }
    std::cout<<end<<std::endl;
}

void addSquaredOddNumbers(int firstNum, int secondNum){
    int start, end, total{0};
    start = lowerNumberOdd(firstNum);
    end = upperNumberOdd(secondNum);
    for (int i = start; i < end+1; i+=2){
        total += pow(i,2);
    }
    std::cout<<total<<std::endl;

}

//***********EVEN Functions********

bool isItEven(int number){
    if (number%2==0){
        return true;
    }else{
        return false;
    }   
}

int lowerNumberEven(int firstNum){
    if (isItEven(firstNum)==false){
        return firstNum+1;
    }else{
        return firstNum;
    }    
}

int upperNumberEven(int secondNum){
    if (isItEven(secondNum)==false){
        return secondNum-1;
    }else{
        return secondNum;
    }    
}


void addEvenNumbers(int firstNum, int secondNum){
    int start, end;
    start = lowerNumberEven(firstNum);
    end = upperNumberEven(secondNum);
    
    int total{0};
    for (int i = start; i < end+1; i+=2){
        std::cout<<i<<" ";
        total+=i;
    }
    //std::cout<<end<<std::endl;
    //total += end;
    
    std::cout<<"\n"<<total<<std::endl;
}