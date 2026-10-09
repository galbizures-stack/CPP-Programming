//include statement(s)
#include <iostream>
#include <string>

//using namespace statement
using namespace std;

int main()
{

    //variable declaration
    const int SECRET = 11;
    const double RATE = 12.50;

    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;
    
    //executable statements

    //task 5
    cout<<"Input 2 integers: "<<endl;
    cin>>num1;
    cin>>num2;

    //task 6
    cout<<"Please type your last name. "<<endl;
    cin>>name;
    
    //task 7
    cout<<"Please enter a decimal between 0 and 70. "<<endl;
    cin>>hoursWorked;

    //task 8
    wages = hoursWorked * RATE;

    //task 9
    cout<<"The value of num1 = "<<num1<<" and the value of num2 = "<<num2<<"."<<endl;

    //task 10
    newNum = num1*2+num2;
    cout<<"The value of newNum = "<<newNum<<endl;

    //task 11
    newNum = newNum + SECRET;
    cout<<" The new value of newNum = "<<newNum<<endl;

    //task 12
    cout<<"Name: "<<name<<"\nPay Rate: $"<<RATE<<"\nHours Worked: "<<hoursWorked<<"\nSalary: $"<<wages<<endl;


    //return statement
    return 0;
}
