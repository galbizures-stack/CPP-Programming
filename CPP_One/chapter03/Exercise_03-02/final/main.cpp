#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const double PI = 3.14159;
    double height;
    double radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "Enter the radius of the base of the cylinder: ";
    cin >> radius;

    cout << "Volume of the cylinder = ";
    cout << fixed << setprecision(2)<< PI * pow(radius, 2.0) * height << endl;
    cout << "Surface area: ";
    cout << fixed << setprecision(2)<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)<<endl;
    
    return 0;
}