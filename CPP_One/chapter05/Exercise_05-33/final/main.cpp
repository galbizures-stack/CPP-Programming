#include <iostream>

using namespace std;

int main() {
    int a{0}, b{0}, t{0}, dishes{0},total{0}, i{0};
    int formula=0;
    cout<<"Input int values for a, b, and t >> ";
    cin>>a>>b>>t;

    while (total<t){
        formula = a + i*b;
        if (total+formula>t){
            break;
        }else{
            total += formula;
            i++;
            dishes++;
        }
    }
    
    
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"t: "<<t<<endl;

    cout<<"total: "<<total<<endl;
    cout<<"dishes: "<<dishes<<endl;
    
    
    return 0;
}