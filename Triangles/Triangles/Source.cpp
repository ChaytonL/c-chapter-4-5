#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int rightTriangle() {

	double sideA;
	double sideB;
	double sideC;
	double area;
	double perimeter;
	int userchoice;

	cout << " What side are you tying to find\n 1=A\n 2=B\n 3=c\n" << endl;
	cin >> userchoice;

	if (userchoice == 1) {
		cout << "----------------------------------" << endl;
		cout << " What would you like side B to be? >> " << endl;
		cin >> sideB;
		cout << "----------------------------------" << endl;
		cout << " What would you like side C to be? >> " << endl;
		cin >> sideC;

		if (sideC < sideB) {
			cout << " Not available ";
			rightTriangle();
		}
		else {
			sideA = sqrt((sideC*sideC) - (sideB*sideB));
			area = .5 *sideA*sideB;
			perimeter = sideC + sideB + sideA;

			cout << fixed << setprecision(2) << " The missing side is " << sideA << endl;
			cout << fixed << setprecision(2) << " The area is " << area << endl;
			cout << fixed << setprecision(2) << " The perimeter is " << perimeter << endl;
		}
	}
	else if (userchoice == 2) {
		cout << "----------------------------------" << endl;
		cout << " What would you like side A to be? >> " << endl;
		cin >> sideA;
		cout << "----------------------------------" << endl;
		cout << " What would you like side C to be? >> " << endl;
		cin >> sideC;

		if (sideC < sideA) {
			cout << " Not available ";
			rightTriangle();
		}
		else {
			sideB = sqrt((sideC*sideC) - (sideA*sideA));
			area = .5 *sideA*sideB;
			perimeter = sideC + sideB + sideA;

			cout << fixed << setprecision(2) << " The missing side is " << sideB << endl;
			cout << fixed << setprecision(2) << " The area is " << area << endl;
			cout << fixed << setprecision(2) << " The perimeter is " << perimeter << endl;
		}
	}
	else if (userchoice == 3) {
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

	}
	
	return 0;
}


int isoceles() {

	double sideA = 0.0;
	double sideB = 0.0;
	double sideC = 0.0;
	double area;
	double perimeter;
	double height;
	int userchoice;

	cout << " What side are you tying to find\n 1=A\n 2=c\n" << endl;
	cin >> userchoice;
	if (userchoice == 1) {
		cout << "----------------------------------" << endl;
		cout << " What would you like side B to be? >> " << endl;
		cin >> sideB;
		cout << "----------------------------------" << endl;
		cout << " What would you like side C to be? >> " << endl;
		cin >> sideC;
		cout << " What is the height? " << endl;
		cin >> height;


		if (sideC < sideA) {
			cout << " Not available ";
			rightTriangle();
		}
		else {
			sideC = sideA;
			area = (sideB*height) / 2;
			perimeter = (sideA*sideA) + sideB;

			cout << fixed << setprecision(2) << " The missing side is " << sideA << endl;
			cout << fixed << setprecision(2) << " The area is " << area << endl;
			cout << fixed << setprecision(2) << " The perimeter is " << perimeter << endl;
		}
	}
	else if (userchoice == 2) {
		cout << "----------------------------------" << endl;
		cout << " What would you like side A to be? >> " << endl;
		cin >> sideA;
		cout << "----------------------------------" << endl;
		cout << " What would you like side B to be? >> " << endl;
		cin >> sideB;
		cout << " What is the height? " << endl;
		cin >> height;

		sideC = sideA;
		area = (sideB*height) / 2;
		perimeter = (sideA*sideA) + sideB;

		cout << fixed << setprecision(2) << " The missing side is " << sideC << endl;
		cout << fixed << setprecision(2) << " The area is " << area << endl;
		cout << fixed << setprecision(2) << " The perimeter is " << perimeter << endl;

	}

	system("pause");
	return 0;
}

int equilateral() {

	double sideA;
	double sideB;
	double sideC;
	double area;
	double perimeter;

	cout << "----------------------------------" << endl;
	cout << " What would you like side A to be? >> " << endl;
	cout << "----------------------------------" << endl;
	cin >> sideA;

	sideB = sideA;
	sideC = sideA;
	area = (sqrt(3) / 4) * pow(sideA, 2);
	perimeter = sideC + sideB + sideA;

	cout << fixed << setprecision(2) << " The other sides are " << sideB << endl;
	cout << fixed << setprecision(2) << " The area is " << area << endl;
	cout << fixed << setprecision(2) << " The perimeter is " << perimeter << endl;

	system("pause");
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
