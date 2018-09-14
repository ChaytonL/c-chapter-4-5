#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int rightTriangle() {

	float sideA;
	float sideB;
	float sideC;
	float area;
	float perimeter;

	cout << "----------------------------------" << endl;
	cout << " What would you like side A to be? >> " << endl;
	cin >> sideA;
	cout << "----------------------------------" << endl;
	cout << " What would you like side B to be? >> " << endl;
	cin >> sideB;

	sideC = sqrt((sideA*sideA) + (sideB*sideB));
	area = .5 *sideA*sideB;
	perimeter = sideC + sideB + sideA;
	
	cout << fixed << setprecision(2) << " The missing side is " << sideC << endl;
	cout << fixed << setprecision(2) << " The area is " << area << endl;
	cout << fixed << setprecision(2) << " The perimeter is " << perimeter << endl;

	
	system("pause");
	return 0;
}


int isoceles() {

	return 0;
}

int equilateral() {

	return 0;
}




int main() {

	int chooseTriangle;
	int sideA;
	int sideB;
	int sideC;

	do {

		system("cls");

		cout << " Welcome to the triangle calculator. " << endl;
		cout << " What type of triangle are you solving for? " << endl;
		cout << " 1 - Right Triangle\n2 - Isoceles\n3 - Equilateral. " << endl;
		cin >> chooseTriangle;

		if (chooseTriangle == 1)
		{
			rightTriangle();
		}
		else if (chooseTriangle == 2) {
			isoceles();
		}
		else if (chooseTriangle == 3) {
			equilateral();
		}
		else
			cout << " Option not available. ";
	} while (chooseTriangle != 4);


	system("pause");
	return 0;
}
