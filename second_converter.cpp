/*To convert seconds to hours and minutes we can follow this path:
1) Div seconds by 3600 in order to find hours
2) Remainder of first step is minutes and seconds
3) Div remainder 60 to find minutes
4) Remainder of third step is seconds*/


#include <iostream>
using namespace std;
int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;
    int hours= num / 3600;
    int remainder= num % 3600;

    int minutes = remainder / 60;
    int seconds = remainder % 60;

    cout << hours << " hours " << minutes << " minutes and " << seconds << " seconds ";


    return 0;
}