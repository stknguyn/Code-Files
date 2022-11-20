#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	float Quiz, gKi, cKi, GPA;
	string x;

	cout << "Nhap ten hoc sinh: ";
	cin >> x;
	cout << "Nhap diem Quiz: ";
	cin >> Quiz;
	cout << "Nhap diem giua ki: ";
	cin >> gKi;
	cout << "Nhap diem cuoi ki: ";
	cin >> cKi;
	if ((Quiz >= 0 and gKi >= 0 and cKi >= 0) and (Quiz <= 10 and gKi <= 10 and cKi <= 10))
	{
		GPA = 0.2 * Quiz + 0.3 * gKi + 0.5 * cKi;
		cout << "Diem GPA la: " << GPA;
		if (GPA < 4)
		{
			cout << " La lop cap F.\n";
		}
		else if (GPA < 5.5)
		{
			cout << " La lop cap D.\n";
		}
		else if (GPA < 7)
		{
			cout << " La lop cap C. \n";
		}
		else if (GPA < 8.5)
		{
			cout << " La lop cap B.\n";
		}

		else
		{
			cout << " La lop cap A.\n";
		}
	}
	else
	{
		cout << "Loi";
	}
	return 0;

}