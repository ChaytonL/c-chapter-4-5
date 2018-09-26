#include <iostream>
#include <string>
#include <time.h>  
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int doorGame()
{

	int userDoorChoice;
	cout << "------------------------------------------------------" << endl;
	cout << "---------------- Welcome to my Game ------------------" << endl;
	cout << "------------------------------------------------------" << endl;
	cout << "-Pick one of the three doors, Door1, Door2, and Door3-" << endl;
	cout << "------------------------------------------------------" << endl;
	cin >> userDoorChoice;

	if (userDoorChoice == 1) {
		cout << " ----------------------- " << endl;
		cout << " You won a brand new car " << endl;
		cout << " ----------------------- " << endl;
	}

	else if (userDoorChoice == 2) {
		cout << "-------------------------------" << endl;
		cout << "-You won a moldy chocolate bar-" << endl;
		cout << "-------------------------------" << endl;
	}

	else if (userDoorChoice == 3) {
		cout << "-----------------------------" << endl;
		cout << "-You won a vacation to Hawaii-" << endl;
		cout << "-----------------------------" << endl;
	}

	else
		//option not available 
		cout << " Not available ";
	return 0;
}
int randomGame() {
	int numberChoice;
	int secret;

	srand(time(NULL));
	secret = rand() % 10 + 1;

	cout << " Choose a number 1 through 10 ";
	cin >> numberChoice;

	if (numberChoice == secret) {
		cout << "---------" << endl;
		cout << " YOU WON " << endl;
		cout << "---------" << endl;
	}
	else {
		cout << "----------------" << endl;
		cout << " YOU LOOSE  " << endl;
		cout << "----------------" << endl;
		cout << " The answer was " << secret << endl;
		cout << "----------------" << endl;

		
	}
	return 0;
}
int numGame() {
	int numChoice;
	int secret;
	int count = 1;

	srand(time(NULL));

	cout << " Choose a number 1 through 100 >> ";
	cin >> numChoice;

	do {

		secret = rand() % 100 + 1;


		if (numChoice < secret) {
			cout << "---------" << endl;
			cout << " To Low, try again. " << endl;
			cout << "---------" << endl;
		}
		else if (numChoice > secret) {
			cout << "----------------" << endl;
			cout << " To High, try again.  " << endl;
			cout << "----------------" << endl;
		}
		else if (numChoice == secret) {
			cout << " It took " << count << " ammount of tries. ";
		}

		count = count + 1;
	} while (numChoice != secret);

	return 0;
}

int forloop() {

	int secret;
	int number;

	for (int i = 0; i < 10; i++) {

		srand(time(NULL));
		secret = rand() % 10 + 1;

		cout << secret << endl;
	}

		return 0;
}
	int main()
{
	int pickGame = 0;
	string result;

	cout << " Welcome to my Game\n 1 = Door Game\n 2 = RandomGame\n 3 = NumGame\n 4 = ForLoop " << endl;
	cin >> pickGame;

	switch (pickGame)
	{

	case 1:
		system("cls");
		doorGame();
		break;
	case 2:
		system("cls");
		randomGame();
		break;
	case 3:
		system("cls");
		numGame();
		break;
	case 4:
		system("cls");
		forloop();
		break;


	default:
		result = "Not Valid.";
	}
	system("pause");
	return 0;
}