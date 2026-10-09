#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Write your main here
    const int MINS_PER_HR = 60;
    double hours;
    int minutes;
    double carA_MPH, carB_MPH;
    double distanceCarOne, distanceCarTwo;

    cout<<"Please input average speed of car A traveling west: ";
    cin>>carA_MPH;

    cout<<"Please input average speed of car B traveling south: ";
    cin>>carB_MPH;

    cout<<"Please input elapsed time H MM: ";
    cin>>hours>>minutes;

    hours = hours + ((static_cast<double>(minutes))/MINS_PER_HR);

    distanceCarOne = hours * carA_MPH;
    distanceCarTwo = hours * carB_MPH;

    double hypotenuseDistance = sqrt(pow(distanceCarOne,2)+pow(distanceCarTwo,2));

    cout<<fixed<<setprecision(2)<<"Shortest distance is: "<<hypotenuseDistance<<endl;

    /*

    if (distanceCarOne<distanceCarTwo)
    {
        
        cout<<fixed<<setprecision(2)<<"Car A is closer: "<<distanceCarOne<<" miles"<<endl;
    }else if (distanceCarTwo<distanceCarOne)
    {
        
        cout<<fixed<<setprecision(2)<<"Car B is closer: "<<distanceCarTwo<<" miles"<<endl;
    }else{
        cout<<"Neither is closer."<<endl;
    }
    */
    


    return 0;
}