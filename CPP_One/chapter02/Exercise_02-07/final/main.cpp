#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Write your main here
    double dblnum = 0.0;
    int intnum = 0;
    cout<<"Please input a double: "<<endl;
    cin>>dblnum;

    cout<<"You input: "<<dblnum<<endl;
    intnum = std::round(dblnum);

    cout<<"Your double rounded to nearest whole number: "<<intnum<<endl;
    return 0;
}