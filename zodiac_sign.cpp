

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
    cout << "Enter the month of birth(1-12): ";
    cin >> month;
    cout << "Enter the date of birth: ";
    cin >> date;
    if(month == 1){
        if(1 <= date && date <=20){
            cout << "Capricorn" << endl;
        }
        else if(21 <= date && date <= 31){
            cout << "Aquarius" << endl;
        }
    }
    else if(month == 2){
        if(1 <= date && date <= 18){
            cout << "Aquarius" << endl;
        }
        else if(19 <= date && date <=29){
            cout << "Pisces" << endl;
        }
    }
    else if(month == 3){
        if(1 <= date && date <= 20){
            cout << "Pisces" << endl;
        }
        else if(21 <= date && date <= 31){
            cout << "Aries" << endl;
        }
    }
    else if(month == 4){
        if(1 <= date && date <= 20){
            cout << "Aries" << endl;
        }
        else if(21 <= date && date <= 30){
            cout << "Taurus" << endl;
        }
    }
    else if(month == 5){
        if(1 <= date && date <=20){
            cout << "Taurus" << endl;
        }
        else if(21 <= date && date <=31){
            cout << "Gemini" << endl;
        }
    }
    else if(month == 6){
        if(1 <= date && date <= 21){
            cout << "Gemini" << endl;
        }
        else if(22 <= date && date <= 30){
            cout << "Cancer" << endl;
        }
    }
    else if(month == 7){
        if(1 <= date && date <= 22){
            cout << "Cancer" << endl;
        }
        else if(23 <= date && date <= 31){
            cout << "Leo" << endl;
        }
    }
    else if(month == 8){
        if(1 <= date && date <= 22){
            cout << "Leo" << endl;
        }
        else if(23 <= date && date <= 31){
            cout << "Virgo" << endl;
        }
    }
    else if(month ==9){
        if(1 <= date && date <=22){
            cout << "Virgo" << endl;
        }
        else if(23 <= date && date <=30){
            cout << "Libra" << endl;
        }
    }
    else if(month == 10){
        if(1 <= date && date <= 23){
            cout << "Libra" << endl;
        }
        else if(24 <= date && date <=31){
            cout << "Scorpius" << endl;
        }
    }
    else if(month == 11){
        if(1 <= date && date <= 22){
            cout << "Scorpius" << endl;
        }
        else if(23 <= date && date <=30){
            cout << "Sagittarius" << endl;
        }
    }
    else if(month ==12){
        if(1 <= date && date <= 21){
            cout << "Sagittarius" << endl;
        }
        else if(22 <= date && date <= 31){
            cout << "Capricorn" << endl;
        }
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