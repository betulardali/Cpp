#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main(){
    string option[3] = {"rock","paper","scissors"};
    srand(time(0));
    int pc = rand() % 3;

    int choice_pc=0;
    int choice_user=0;
    int again;
    string user = "a";
    
        while (true){
            cout << "\nrock, paper, scissors? ";
            cin >> user;
            if(user=="rock"){
                if(option[pc]=="rock"){
                    cout << "PC: rock " << "\nDrawn" << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                    }
                else if(option[pc]=="paper"){
                    choice_pc++;
                    cout << "PC: paper" << "\nDefeated" << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                }
                else if(option[pc]=="scissors"){
                    choice_user++;
                    cout << "PC: scissors" << "\nWinning " << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                    }
            }

            if(user=="paper"){
                if(option[pc]=="paper"){
                    cout << "PC: paper " << "\nDrawn" << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                }
                else if(option[pc]=="scissors"){
                    choice_pc++;
                    cout << "PC: scissors" << "\nDefeated" << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                }
                else if(option[pc]=="rock"){
                    choice_user++;
                    cout << "PC: rock" << "\nWinning " << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                }
            }


            if(user=="scissors"){
                if(option[pc]=="scissors"){
                    cout << "PC: scissors " << "\nDrawn" << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                }
                else if(option[pc]=="rock"){
                    choice_pc++;
                    cout << "PC: rock" << "\nDefeated" << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                }
                else if(option[pc]=="paper"){
                    choice_user++;
                    cout << "PC: paper" << "\nWinning " << "\nPC: " << choice_pc << "\tUser: " << choice_user;
                }
            }
                
            cout << "\n\nChoose one: again(1), exit(0): ";
            cin >> again;

            if(again==0){
                cout << "\n**SKOR**" << "\nUser : " << choice_user << "\tPC: " << choice_pc << endl;
                if(choice_user > choice_pc){
                    cout << "\nYOU WON!"<< endl;
                }
                else if(choice_user < choice_pc){
                    cout << "\nDEFEATED! :( " << endl;
                }
                else if(choice_user== choice_pc){
                    cout << "DRAWN!" << endl;
                }
                cout << "\nThanks for playing!" << endl;
                break;
            }
                
            else if(again==1){
                continue;
            }
        } 
    return 0;
}