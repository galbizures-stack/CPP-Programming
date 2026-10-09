#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    double numberOne, numberTwo;
    double total = 0;
    char operatorInput;

    cout<<"Please input a math expression."<<endl;
    cout<<"ex. 3+3, 3/1, 45-4, 9*9"<<endl;
    //cin>>numberOne>>operatorInput>>numberTwo;
    cin>>numberOne>>numberTwo>>operatorInput;

    switch (operatorInput)
    {
    case '+':
        total = numberOne+numberTwo;
        cout<<numberOne<<" + "<<numberTwo<<" = ";
        printf("%.2f\n", total);
        break;
    case '-':
        total = numberOne-numberTwo;
        cout<<numberOne<<" - "<<numberTwo<<" = ";
        printf("%.2f\n", total);
        break;
    case '/':
        if (numberTwo==0)
        {
            cout<<"ERROR"<<": Cannot divide by zero"<<endl;
        }else{
            total = numberOne/numberTwo;
            cout<<numberOne<<" / "<<numberTwo<<" = ";
            printf("%.2f\n", total);
        }        
        break;
    case '*':
        total = numberOne*numberTwo;
        cout<<numberOne<<" * "<<numberTwo<<" = ";
        printf("%.2f\n", total);
        break;
    
    default:
        cout<<"ERROR"<<": Math operator not available or not appropriate (ie. '\\')"<<endl;
        break;
    }
    return 0;
}
