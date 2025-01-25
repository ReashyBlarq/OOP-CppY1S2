//C++ Function
/*
C++ function to add two numbers find simpleinterest and area of circle
Author: Reagan Ottawa
Reg No:BSCIT-01-0173/2024
Date:20/01/2025
Version 1
*/
#include <iostream>
#include <cmath>
using namespace std;

//Function prototype
int addition(int a, int b);
float simpleInterest(int principle, float rate, int time);
double AreaOfCircle(double radius);

int main()
{
	//Variable declaration
	int sum;
	float interest;
	double area;
	//Calling function
	sum = addition(2, 6);
	interest = simpleInterest(5154, 0.15, 3);
    area = AreaOfCircle(35);
	
	cout<<"The sum is "<< sum <<endl;
	cout<<"The interest is "<< interest <<endl; 
	cout<<"The area of circle is "<< area <<endl;
	
	return 0;
}
//Function definition
int addition(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
//Function definition
float simpleInterest(int principle, float rate, int time)
{
	float interest;
	interest = principle * rate * time;
	return interest;
}
//Function definition
double AreaOfCircle(double radius)
{
	double area;
	area = 3.142 * radius * radius;
	return area;
}
