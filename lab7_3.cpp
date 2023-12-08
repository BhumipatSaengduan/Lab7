#include<iostream>
using namespace std;

char before(char x) {
	if (x >= 65 && x <= 90) {
		if (x == 65) {
			return 'Z';
		}
		else {
			return x - 1;
		}
	}
	else{
		return '0';
	}
}

int main() {
	cout << before('A') << "\n"; //Z
	cout << before('B') << "\n"; //
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n"; // 0
	cout << before('0') << "\n";
	cout << before('c') << "\n";

	return 0;
}