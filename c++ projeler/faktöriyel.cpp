//girilen sayinin faktoriyelini bulma

#include <iostream>
using namespace std;
int main() {
	int number;
	int result = 1;
	cout << "enter the number: ";
	cin >> number;
	for (int i = 1; number >= i; number--) {
		result = result * number;
	}
	cout << "Result: " << result;

	return 0;
}

	///////// OR ///////////

/* #include <iostream>
using namespace std;
int main() {
	int number;
	int result = 1;
	cout << "enter the number: ";
	cin >> number;
	for (int i = 1; i <= number; i++)
		result = result * i;
	cout << "Result: " << result;

	return 0;
} */