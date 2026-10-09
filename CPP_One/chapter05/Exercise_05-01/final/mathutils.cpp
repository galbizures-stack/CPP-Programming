#include "mathutils.h"
#include <iostream>
#include <cmath>

using namespace std;

int absoluteValue(int number){
    if (number<0 && number!=-2147483648){
        return number*-1;
    }else if (number == -2147483648){
        return 2147483647;
    }else{
        return number;
    }    
}

int findLeftMostPlace(int number){
    int toThePower = 9;
    int answer;
    answer=number/pow(10,toThePower);

    while (answer==0){
        toThePower -= 1;
        answer = number/(pow(10,toThePower));
    }
    return toThePower;    
}

void spaceBetween(int number){
    int absoluteInt, exponent;
    absoluteInt = absoluteValue(number);

    exponent=findLeftMostPlace(absoluteInt);

    if (number==0){
        std::cout<<number<<" as "<<number;
    }else{
        std::cout<<number<<" as ";
    }
    
    while (exponent>-1){  
        if (exponent==0 && number==-2147483648){
            std::cout<<8<<" ";            
        }else{
            std::cout<<absoluteInt/static_cast<int>(pow(10,exponent))<<" ";
            absoluteInt = absoluteInt%static_cast<int>(pow(10,exponent));
        }
        exponent -= 1;        
    }
    std::cout<<"\n";  
}

void additionOfPlaces(int number){
    int absoluteInt, exponent, sum = 0;
    absoluteInt = absoluteValue(number);
    exponent=findLeftMostPlace(absoluteInt);
    while (exponent>-1){   
        if (exponent==0 && number==-2147483648){
            sum = 47;            
        }else{
            sum = sum + (absoluteInt/static_cast<int>(pow(10,exponent)));
            absoluteInt = absoluteInt%static_cast<int>(pow(10,exponent));
        }        
        exponent -= 1;        
    }
    std::cout<<"Sum of numbers: "<<sum<<endl;    
}