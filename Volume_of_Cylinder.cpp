//C++ Function to calculate volume of a cylinder
/*C++ Function that prompts user to enter radius and height 
then calculate volume of cylinder
Author: Reagan Ottawa
Reg No: BSCIT-01-0173/2024
Date: 20/01/2025
version 1.1
*/
#include <iostream>
#include <cmath>
using namespace std;

//Function prototype
double volume_of_Cylinder(double radius, double height);

int main()
{
	//Variable declaration
	double radius, height, volume;
    
 	//Calling function
	cout<<"Enter radius of cylinder" <<endl;
	cin>>radius;
	cout<<"Enter height of cylinder" <<endl;
	cin>>height;
	
    volume = volume_of_Cylinder(radius, height);
	cout<<"Volume of the cylinder is  "<< volume <<endl;
	
	return 0;
}

//Function definition
double volume_of_Cylinder(double radius, double height)
{
	double volume;//declaring variable volume
	volume = 3.142 * radius * radius * height;
	
	return volume;
}