#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double piSigma(int k);
int main() 
{
    double pi = 0;
    long i;
    long n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 0; i < n; i++) 
    {
        if (i % 2 == 0)
            pi = pi + (1.0 / (2 * i + 1));
        else
            pi = pi - (1.0 / (2 * i + 1));
    }

    pi = 4 * pi;

    cout << endl << "pi = " << pi << endl;
    cout<<"Leibniz-Madhava formula: "<<4*piSigma(n)<<endl;

    return 0;
}

//Leibneiz-Madhava pi = 4*piSigma(k) where k equals to the k place
double piSigma(int k){
    double series{0};
    for (int i = 0; i < k; i++){
        series+=(pow(-1,i)/((2*i)+1));
    }
    return series;
}