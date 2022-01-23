#include <iostream>

using namespace std;

int x;

int main() {
	cout << "Input your age: ";
	cin >> x;
	if (x <= 15) {
		cout << "The program does not work unless you're at least 16 years old!";
	}
	else {
		cout << "The minimal age of your partner should be " << x / 2 + 7;
	}
}

