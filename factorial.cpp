#include <iostream>
using namespace std;
int main(){

int num;
cout << "Enter the number: ";
cin >> num;
int result=1;

//for loop (by increasing)

for (int i=1; i<=num; i++){
    result=result*i;
}
cout << "Factorial of the number: " << result;



/*for loop (by decreasing)

for(int i=num; i>=1; i--){
    result=result*i;
}
cout << "Factorial of the number: " << result;
*/



/*while loop (by increasing)

int i=1;
while(i<=num){
    result=result*i;
    i++;
}
cout << "Factorial of the number: " << result;
*/


/*while loop (by decreasing)

int i=num;
while(i>=1){
    result=result*i;
    i--;
}
cout << "Factorial of the number: " << result ;
*/


    return 0;
}