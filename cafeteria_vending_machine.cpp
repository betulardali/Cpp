/* User enters first letter of their name and their money.
Next, if user enters 1 it means they want to choose food.
If user chooses 0 output "Thanks!". User can choose more than one meal from the machine. For each meal user enters number respectively. (first food = 1)
First meal is 4 tl, second meal is 8 tl, third and above cost 12 tl.
If users money is not enough, it gives a warning and asks again the first letter of the name and money.*/

#include <iostream>
using namespace std;
int main(){
while (true){
    char letter;
    float money;
    int opt;
    int meal_opt;
    int again;
    int rest;
    int over_meal=3;
    cout << "Enter the first letter of your name: ";   
    cin >> letter;
    cout << "Enter your money: ";
    cin >> money;
    cout << "Choose one: meal(1), exit(0): ";
    cin >> opt;

    if (opt==0){
        cout << "Thanks!";
        break;
    }
    else if (opt==1){
        cout << "Enter a number for meal: ";
        cin >> meal_opt;
        if(meal_opt==1){
            cout << "\nFirst meal" <<endl;
            cout << "Price of first meal: 4 tl\n";
            rest=money-4;
            cout << "Rest: " << rest << " tl";

            cout << "\nTo keep going choose (1) otherwise choose (0): ";
            cin >> again;

            if(again==0){
                cout << "Thanks";
                break;
            }

            
            if(rest<=0){
            cout << "Insufficient money!\n";
            continue;
            }
        
            else if(again==1){
                cout << "\nSecond meal"<< endl;
                cout << "Price of second meal: 8 tl\n"<< "Rest money: ";
                int rest_2 = rest-8;
                cout << rest_2 << " tl";

                cout << "\nTo keep going choose (1) otherwise choose (0): ";
                cin >> again;

                    if(again==0){
                        cout << "Thanks";
                        break;
                    }
                    else if(again==1){

                        if((rest -8)<=0){
                        cout << "Insufficient money!\n";
                        continue;
                        }

                        while(over_meal>=3){
                            int final_rest = rest_2 - 12;
                            
                            if(final_rest < 12){
                            cout << "Insufficient money!\n";
                            continue;
                            }
                            
                            while (final_rest >= 12) {
                                cout << "\nChoice of meal: " << over_meal;
                                cout << "\nPrice of the mal: 12 tl\n" << "Rest money: ";
                                cout << final_rest << " tl";

                                cout << "\nTo keep going choose (1) otherwise choose (0): ";
                                cin >> again;
                                if(again==0){
                                    cout << "Thanks";
                                    break;
                                }
                                else if(again==1){

                                if(final_rest < 12){
                                cout << "Insufficient money!\n";
                                continue;
                                }

                                over_meal++;
                                final_rest = final_rest - 12;

                                }
                            }
                            
                        }
                    }
            }   
        }
    }
}
return 0;
}












































































