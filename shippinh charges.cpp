// file: Shipping Charges
// Name of Programmer: Ebram Azer
// Requirment:Write a program that asks for the weight of the package and the distance it will be shipped 
//

#include <iostream>
using namespace std;

int main() {
    double weight, distance, rate, totalCost;

    // Input validation: weight
    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;
    if (weight <= 0 || weight > 20) {
        cout << "Invalid weight. The package must weigh more than 0 kg and no more than 20 kg." << endl;
        return 1; // Exit the program
    }

    // Input validation: distance
    cout << "Enter the distance to be shipped (in miles): ";
    cin >> distance;
    if (distance < 10 || distance > 3000) {
        cout << "Invalid distance. The distance must be between 10 miles and 3000 miles." << endl;
        return 1; // Exit the program
    }

    // Determine the rate per 500 miles based on the weight
    if (weight <= 2)
        rate = 1.10;
    else if (weight <= 6)
        rate = 2.20;
    else if (weight <= 10)
        rate = 3.70;
    else if (weight <= 20)
        rate = 4.80;

    // Calculate the total cost
    totalCost = rate * (distance / 500);

    // Output the result
    cout << "The total shipping cost is $" << totalCost << endl;

    return 0;
}
