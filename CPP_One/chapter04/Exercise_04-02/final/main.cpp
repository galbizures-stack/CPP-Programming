#include <iostream>

using namespace std;

int main() {
    int numInputOne, numInputTwo, numInputThree;
    cout<<"Please input three numbers.";
    cin>>numInputOne>>numInputTwo>>numInputThree;

    if (numInputOne<numInputTwo && numInputOne<numInputThree)
    {
        cout<<numInputOne<<" ";
        if (numInputTwo<numInputThree)
        {
            cout<<numInputTwo<<" "<<numInputThree<<endl;
        }else{
            cout<<numInputThree<<" "<<numInputTwo<<endl;
        }        
    }else if (numInputTwo<numInputOne&&numInputTwo<numInputThree)
    {
        cout<<numInputTwo<<" ";
        if (numInputOne<numInputThree)
        {
            cout<<numInputOne<<" "<<numInputThree<<endl;
        }else{
            cout<<numInputThree<<" "<<numInputOne<<endl;
        }        
    }else{
        cout<<numInputThree<<" ";
        if (numInputOne<numInputTwo)
        {
            cout<<numInputOne<<" "<<numInputTwo<<endl;
        }else{
            cout<<numInputTwo<<" "<<numInputOne<<endl;
        }
        
    }
    
    


    return 0;
}
