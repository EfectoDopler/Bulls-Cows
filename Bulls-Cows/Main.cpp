#include <iostream>
#include <string>

using namespace std;

void showHeader();
string setGuess(string &guess);

const int TAM_WORD = 5;

int main() {
	string response = "";

	showHeader();
	setGuess(response);

	system("PAUSE");
	return 0;
}

void showHeader() {
	cout << " Welcome to Bulls & Cows, a litte terminal game." << endl;
	cout << " Can you guess the " << TAM_WORD;
	cout << " letter isogram that im thinking?" << endl;
}

string setGuess(string &guess) {
	cout << " Enter your guess: ";
	getline(cin, guess);
	cout << " Your guess was " << guess << endl;
	return guess;
}