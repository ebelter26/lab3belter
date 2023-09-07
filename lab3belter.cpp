#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
	// The rest of this function is an exercise to the reader
}

void firstChoice(float A, float B) {
	cout << A << "+" << B << "=" << A+B << endl;
	//this function adds the first value (A) and second value (B)
}
void secondChoice(float A, float B) {
	cout << A << "-" << B << "=" << A - B << endl;
	//this function subtracts the first value (A) and second value (B)
}
void thirdChoice(float A, float B) {
	int mult = A * B;
	cout << A << "*" << B << "=" << mult << endl;
	//this function multiplies the first value (A) and second value (B)
}
void forthChoice(float A, float B) {
	int div = A / B;
	cout << A << "/" << B << "=" << div << endl;
	//this function divides the first value (A) and second value (B)
}

int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 4) {
		forthChoice(A, B);
	}
	//these if statements determine the function (void) needed to perform math operation choosen on A & B based on user input "choise"
	return 0;
}