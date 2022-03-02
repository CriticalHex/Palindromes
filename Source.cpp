#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool palindrome(int x) {
	string test = to_string(x);

	for (int i = 0; i < test.length(); i++) {
		if (test[i] != test[test.length() - i - 1]) return false;
	}
	return true;
}

bool intPalindrome(int a) {
	if (a < 0) {
		return false;
	}
	else if (a < 10) {
		return true;
	}
	int n = (floor(log10(a)) + 1);
	int inverse = 0;
	for (int x = 0; x <= n - 1; x++) {
		inverse += (((floor(a / pow(10, x))) - (floor((floor(a / pow(10, x))) / 10)) * 10) * (pow(10, n - x - 1)));
	}
	if (a == inverse)
		return true;
	return false;
}

int main() {
	//cout << palindrome(102);
	cout << intPalindrome(102) << endl;
}