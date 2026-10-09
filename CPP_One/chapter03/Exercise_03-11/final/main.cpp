#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double length, width, height;
    double cocoaPercentReduce;
    double volume;

    cout<<"Enter the length, width, and height of the candy bar ";
    cout<<"separated by a space(s): ";
    cin>>length>>width>>height;

    cout<<"Enter the the reduced volume as a percentage: ";
    cin>>cocoaPercentReduce;

    //volume = length*width*height * (1-cocoaPercentReduce/100);
    //cout<<volume<<endl;
    cocoaPercentReduce = cocoaPercentReduce/2;
    length = length * (1-(cocoaPercentReduce/100));
    width = width * (1-(cocoaPercentReduce/100));
    
    cout<<fixed<<setprecision(2)<<"The new dimensions of the candy bar is: "<<length<<" x "<<width<<" x "<<height<<endl;
    return 0;
}