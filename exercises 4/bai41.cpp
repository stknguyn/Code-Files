#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number;
	cout<< "Enter an interger: ";
	cin>> number;
	
	if (number > 0){
		cout<< "You entered a positive interger: "<< number << endl;
	}
	cout<< "This statement is always executed";
	return 0;
}
