#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int rightTriangle() {

	float sideA;
	float sideB;
	float sideC;
	cout << " What would you like side A to be? >> ";
	cin >> sideA;
	cout << " What would you like side B to be? >> ";
	cin >> sideB; 
	cout << " HYP= "<< sqrt(pow(sideA, 2) = pow(sideB, 2)) <<"Answer.";


	system("pause");
	return 0;
}

int rightTraingleCalc() {
	int sideA;
	int sideB;
	int sideC;
	 
	
	

		

	return 0;
}
int isoceles() {

	return 0;
}
int isocelesCalc() {

	return 0;
}
int equilateral() {

	return 0;
}
int eaquilateralCalc() {

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
