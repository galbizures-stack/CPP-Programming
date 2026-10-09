#include <iostream>

using namespace std;

int main() {
    int numberInput;

    cout<<"Please input an integer: ";
    cin>>numberInput;

    if (numberInput<0)
    {
        cout<<"Number is negative"<<endl;
    }else if (numberInput>0)
    {
        cout<<"Number is positive"<<endl;
    }else{
        cout<<"Number is zero."<<endl;
    }
    
    
    return 0;
}