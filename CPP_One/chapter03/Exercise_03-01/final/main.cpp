#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inFile("inData.txt");
    ofstream outFile("outData.txt");

    string firstName, lastName, department;

    double salary, bonus, taxes, paycheck;
    double distanceTraveled, travelTime;
    double averageSpeed;
    int cupsOfCoffee;
    double cost, salesAmount;

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout<<"Processing data"<<endl;

    inFile>> firstName>>lastName>>department;
    outFile<<"Name: "<<firstName<<" "<<lastName<<", Department: "<<department<<endl;
    
    inFile>>salary>>bonus>>taxes;
    outFile<<"Monthly Gross Salary: $"<<salary<<", Monthly Bonus: "<<bonus<<"%, Taxes: "<<taxes<<"%"<<endl;
    
    paycheck = (salary*(1+bonus/100))*(1-(taxes/100));
    outFile<<"Paycheck: $"<<paycheck<<endl;

    
    inFile>>distanceTraveled>>travelTime;
    outFile<<"\nDistance Traveled: "<<distanceTraveled<<" miles, Traveled Time: "<<travelTime<<" hours"<<endl;
    averageSpeed = distanceTraveled/travelTime;
    outFile<<"Average Speed: "<<averageSpeed<<" miles per hour"<<endl;

    inFile>>cupsOfCoffee>>cost;
    outFile<<"\nNumber of Coffee Cups Sold: "<<cupsOfCoffee<<", Cost: $"<<cost<<" per cup"<<endl;
    salesAmount = cupsOfCoffee*cost;
    outFile<<"Sales Amount = $"<<salesAmount<<endl;

    inFile.close();
    outFile.close();
    return 0;
}
