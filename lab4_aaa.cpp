// lab4_aaa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial(int choice) {
	cout << endl << "Enter a number: ";
	cin >> choice;
	if (choice < 0) {
		cout << "Nice try, please enter a POSITIVE number: ";
		factorial(choice);
	}
	if (choice > 0) {
		cout << choice << "! =";
		int ans = 1;
		for (int n = 1; n <= choice; n++) {
			ans = ans * n;
			cout << " " << n << " " << "+";
			if (n == choice) {
				cout << " = " << ans << endl;
			}
		}
	}
}

void arithmetic() {
	cout << "Enter a number to start at: ";
}
void geometric() {
	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			cout << "Factorial:";
			factorial(choice);
		}
		else if (choice == 2) {
			cout << "Arithmetic Series:" << endl;
			arithmetic();
		}
		else if (choice == 3) {
			cout << "Geometric Series:" << endl;
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}