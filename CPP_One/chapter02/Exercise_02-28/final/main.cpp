/*
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here
    double caloriesPerPoundNuts;
    int numberOfStudents;
    int caloriesPerStudent;
    double caloriesPerPoundDriedFruit = caloriesPerPoundNuts / 0.70;

    double totalCalories = numberOfStudents * caloriesPerStudent;

    double poundsPerItem = totalCalories /(caloriesPerPoundDriedFruit+caloriesPerPoundNuts);

    // Equal pounds of nuts and dried fruit
    double caloriesPerPoundMixture =
    caloriesPerPoundNuts + caloriesPerPoundDriedFruit;

    double poundsEach = totalCalories / caloriesPerPoundMixture;
    cout<<fixed<<setprecision(3);

    cout<<"The number of students in the elementary school. "<<endl;
    cin>>numberOfStudents;

    cout<<"The number of calories required for each student from the mixture. "<<endl;
    cin>>caloriesPerPoundMixture;
    
    cout<<"The number of calories in each pound of nuts. "<<endl;
    cin>>caloriesPerPoundNuts;

    
    
    cout<<"Amount of calories from nuts needed: "<<poundsPerItem<<endl;
    cout<<"Amount of calories from dried fruit needed: "<< poundsPerItem<<endl;

    return 0;
}*/
#include <iostream>
#include <iomanip>

int main() {
    // Variables for user inputs
    int numStudents;
    double caloriesPerStudent;
    double caloriesPerPoundNuts;

    // Prompt user for inputs
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::cout << "Enter the number of calories required for each student: ";
    std::cin >> caloriesPerStudent;

    std::cout << "Enter the number of calories in each pound of nuts: ";
    std::cin >> caloriesPerPoundNuts;

    // Calculate total calories needed for the entire school
    double totalCaloriesNeeded = numStudents * caloriesPerStudent;

    // Relationship: caloriesPerPoundNuts = 0.70 * caloriesPerPoundFruit
    // Therefore: caloriesPerPoundFruit = caloriesPerPoundNuts / 0.70
    double caloriesPerPoundFruit = caloriesPerPoundNuts / 0.70;

    // Because the mixture uses equal amounts (pounds) of nuts and fruit:
    // Total Calories = (Pounds * caloriesPerPoundNuts) + (Pounds * caloriesPerPoundFruit)
    // Total Calories = Pounds * (caloriesPerPoundNuts + caloriesPerPoundFruit)
    double poundsPerItem = totalCaloriesNeeded / (caloriesPerPoundNuts + caloriesPerPoundFruit);

    // Output the results formatted to 2 decimal places
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "\n--- Results ---" << std::endl;
    std::cout << "Amount of nuts needed: " << poundsPerItem << " lbs" << std::endl;
    std::cout << "Amount of dried fruit needed: " << poundsPerItem << " lbs" << std::endl;

    return 0;
}
