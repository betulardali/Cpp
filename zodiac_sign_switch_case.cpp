

/*Aries = March 21 - April 20         
  Taurus = April 21 - May 20
  Gemini = May 21 - June 21
  Cancer = June 22 - July 22
  Leo = July 23 - August 22
  Virgo = August 23 - September 22
  Libra = September 23 - October 23
  Scorpius = October 24 - November 22
  Sagittarus = November 23 - December 21
  Capricorn = December 22 - January 20
  Aquarius = January 21 - February 18
  Pisces = February 19 - March 20
  */



#include <iostream>
using namespace std;
int main(){
while (true){
    int month;
    int date;
    int again;
    cout << "Enter the month of birth(01-12): ";
    cin >> month;
    cout << "Enter the date of birth: ";
    cin >> date;

    switch (month){
        case 1:
        if (date <= 20){
            cout << "Capricorn" << endl;
        }
        else if(date >=21 && date <=31){
            cout << "Aquarius" << endl;
        }
        break;

        case 2:
        if (date <=18){
            cout << "Aquarius" << endl;
        }
        else if(date >=19 && date <=29){
            cout << "Pisces" << endl;
        }
        break;

        case 3:
        if (date <= 20){
            cout << "Pisces" << endl;
        }
        else if (date >= 21 && date <=31){
            cout << "Aries" << endl;
        }
        break;

        case 4:
        if (date <= 20){
            cout << "Aries" << endl;
        }
        else if (date >= 21 && date <=30){
            cout << "Taurus" << endl;
        }
        break;

        case 5:
        if (date <= 20){
            cout << "Taurus" << endl;
        }
        else if (date >= 21 && date <=31){
            cout << "Gemini" << endl;
        }
        break;

        case 6:
        if (date <= 21){
            cout << "Gemini" << endl;
        }
        else if (date >= 21 && date <=30){
            cout << "Cancer" << endl;
        }
        break;

        case 7:
        if (date <= 22){
            cout << "Cancer" << endl;
        }
        else if (date >= 23 && date <=31){
            cout << "Leo" << endl;
        }
        break;

        case 8:
        if (date <= 22){
            cout << "Leo" << endl;
        }
        else if (date >= 23 && date <=31){
            cout << "Virgo" << endl;
        }
        break;

        case 9:
        if (date <= 22){
            cout << "Virgo" << endl;
        }
        else if (date >= 23 && date <=30){
            cout << "Libra" << endl;
        }
        break;

        case 10:
        if (date <= 23){
            cout << "Libra" << endl;
        }
        else if (date >= 24 && date <=31){
            cout << "Scorpius" << endl;
        }
        break;

        case 11:
        if (date <= 22){
            cout << "Scorpius" << endl;
        }
        else if (date >= 24 && date <=30){
            cout << "Sagittarus" << endl;
        }
        break;

        case 12:
        if (date <= 22){
            cout << "Sagittarus" << endl;
        }
        else if (date >= 24 && date <=31){
            cout << "Capricorn" << endl;
        }
        break;


        default:
            cout << "Unvalid data" << endl;
    }

    cout << "\nChoose one: re-entry(1), exit(0): \n";
    cin >> again;
    if(again == 1)
         continue;
    else if(again == 0)
        break;

}
return 0;
}