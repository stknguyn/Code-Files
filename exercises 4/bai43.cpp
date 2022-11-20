#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	int month, day, year;
	cout << "Enter (in numeric form) a month, a day, and a two-digit year,\n"
		 << "and the program will determine if the date is macgic.\n";
	cout << "Enter a month: ";
	cin >> month;
	cout << "Enter a day: ";
	cin >> day;
	cout << "Enter a two- digit year: ";
	cin >> year;

	if (year == month * day)
	{
		cout << "The date is magic.\n";
	}
	else
	{
		cout << "The date is not magic.\n";
	}
	return 0;
}
