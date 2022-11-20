#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	double sli1, sli2, sli3;
	cout << "ENTER ALL SLIDES OF TRIANGLE:" << endl;
	cin >> sli1 >> sli2 >> sli3;
	if (sli1 > 0 && sli2 > 0 && sli3 > 0)
	{
		if (sli1 == sli2 && sli2 == sli3)
			cout << "E";

		else if (sli1 == sli2)
			cout << "I";

		else if (sli1 == sli3)
			cout << "I";

		else if (sli2 == sli3)
			cout << "I";
		else
			cout << "S";
	}
	else
		cout << " Not Triangle";
	return 0;
}
