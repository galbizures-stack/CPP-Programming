#include <iostream>
#include <iomanip>

using namespace std;
void output(double bodyFat, double bodyFatPercentage);
void bodyFatWomen(double bodyWeight, double wristInches, double waistNavelInches, double hipInches, double forearmInches);
void bodyFatMen(double bodyWeight, double waistInches);
void manPrompt();
void womanPrompt();
double bodyWeight, waistInches;
double bodyFat, bodyFatPercentage;
double a1,a2,a3,a4,a5,b;
double wristInches, waistNavelInches, hipInches, forearmInches;

int main() {
    // Write your main here
    char userInputChar;
    
    cout<<"Body Fat Calculator"<<endl;
    cout<<"Choose 'M' for male or 'F' for female: ";
    cin>>userInputChar;

    switch (userInputChar)
    {
    case 'M':
    case 'm':
        manPrompt();
        //manPrompt() >> Calculations in bodyFatMan() >> output()>>exit
        break;
    case 'F':
    case 'f':
        womanPrompt();
        //similarly womanPrompt()>> Makes calculations bodyFatWoman()>> output()>> exit
        break;    
    default:
        cout<<"ERROR: Invalid entry. Goodbye."<<endl;
        break;
    }
    return 0;
}

void bodyFatWomen(double bodyWeight, double wristInches, double waistNavelInches, double hipInches, double forearmInches){
    a1 = (bodyWeight*.732)+8.987;
    a2 = wristInches/3.140;
    a3 = waistNavelInches*.157;
    a4 = hipInches*.249;
    a5 = forearmInches*.434;
    b = a1+a2-a3-a4+a5;
    bodyFat = bodyWeight - b;
    bodyFatPercentage = bodyFat*100/bodyWeight;
    output(bodyFat, bodyFatPercentage);
}

void bodyFatMen(double bodyWeight, double waistInches){
        a1 = (bodyWeight * 1.082) + 94.42;
        a2 = waistInches * 4.15;
        b = a1 - a2;
        bodyFat = bodyWeight - b;
        bodyFatPercentage = bodyFat*100/bodyWeight;
        output(bodyFat, bodyFatPercentage);
    }

void manPrompt(){
    cout<<"Please input body weight in pounds: ";
    cin>>bodyWeight;
    cout<<"Please input size of waist in inches: ";
    cin>>waistInches;
    bodyFatMen(bodyWeight, waistInches);
    }

void womanPrompt(){
        cout<<"Please input body weight in pounds: ";
        cin>>bodyWeight;
        cout<<"Please input size of wrist in inches: ";
        cin>>wristInches;
        cout<<"Please input size of waist at navel in inches: ";
        cin>>waistNavelInches;
        cout<<"Please input size of hip in inches: ";
        cin>>hipInches;
        cout<<"Please input size of forearm in inches: ";
        cin>>forearmInches;
        bodyFatWomen(bodyWeight, wristInches, waistNavelInches, hipInches, forearmInches);
    }

void output(double bodyFat, double bodyFatPercentage){
    cout << fixed << setprecision(2);
    cout<<"Body fat: "<<bodyFat<<" lbs"<<endl;
    cout<<"Body fat percentage: "<<bodyFatPercentage<<"%"<<endl;
    }