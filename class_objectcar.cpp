//C++ Class and Object
/*
C++ creating a class car and displaying its object
Author: Reagan Ottawa
Reg No:BSCIT-01-0173/2024
Date:30/01/2025
copyright @ReashyBlarq
*/
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    float price;
    int mileage;

    // Function to update mileage
    void drive()
    {
        int distance;
        cout << "Enter distance driven (in km): ";
        cin >> distance;
        mileage += distance;
        cout << "Updated mileage: " << mileage << " km" << endl;
    }
};

int main()
{
    Car Car1;
    Car1.brand = "TOYOTA";
    Car1.model = "Corolla";
    Car1.price = 69000000;
    Car1.mileage = 15000; // Initial mileage

    cout << "Brand: " << Car1.brand << endl;
    cout << "Model: " << Car1.model << endl;
    cout << "Price: " << Car1.price << endl;
    cout << "Mileage: " << Car1.mileage << " km" << endl;

    // Call the drive function
    Car1.drive();

    return 0;
}
