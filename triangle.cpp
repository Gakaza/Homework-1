/*
Homework #1 Part 2 Triangle
Name: Shu-Hao Chang (Ken Chang)
Student ID: 0456151
Date: Oct 20, 2015

Motivation:
- Learn the first step to write testing code coding by using XUnit (googe testing framework)
- Practice boundary value, equivalence class, , edge testing, and decision table based)
- Practice TDD (test-driven development) by google test
- Practice Xunit in a practical project
Goal:
- Implement the Triangle, NextDate, Commission problems by TDD
- Using XUnit for writing testing code
- In this time, we use google testing framework
- Analyze boundary value, equivalence class, edge values, and decision table based
- writing test code using these analyses
*/

#include <iostream>
using namespace std;

bool isTriangleCheck(int a, int b, int c) {
	if ((a < b + c) && (b < a + c) && (c < b + a))
		return true;
	else
		return false;
}

void triangleType(bool isTriangle, int a, int b, int c) {

	if (isTriangle) {
		if ((a == b) && (b == c))
			cout << "Equilateral" << endl;
		else if ((a != b) && (b != c) && (a != c))
			cout << "Scalene" << endl;
		else
			cout << "Isoscelese" << endl;
	}
	else
		cout << "Not a Triangle" << endl;
}

int main() {
	int sideA, sideB, sideC;
	bool isTriangle;

	//Input the three sides of a triangle
	cout << "Enter 3 integers which are the sides of a triangle: ";
	cin >> sideA >> sideB >> sideC;
	cout << "\nThe three sides are: " << sideA << " " << sideB << " " << sideC << endl;

	//Determine whether this is a triangle or not
	isTriangle = isTriangleCheck(sideA, sideB, sideC);

	//Determine the type of the triangle
	triangleType(isTriangle, sideA, sideB, sideC);

	system("PAUSE");
	return 0;
}