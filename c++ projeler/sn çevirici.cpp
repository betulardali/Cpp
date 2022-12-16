//girilen saniyeyi; saat, dakika ve saniye şeklinde çıktı verir.


#include <iostream>
using namespace std;
int main() {
	int givennumber;
	int seconds;
	int minutes;
	int hours;
	int remainder = 0;

	cout << "enter the number: ";
	cin >> givennumber;
	hours = givennumber / 3600;
	remainder = givennumber % 3600;
	minutes = remainder / 60;
	seconds = remainder % 60;

	cout << hours << " hours " << minutes << " minutes and " << seconds << " seconds";

	return 0;
}
