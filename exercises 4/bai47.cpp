#include <iostream>
#include <math.h>
using namespace std;
/* run this program
using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	double x;
	cout << "Nhap so tien can chuyen doi theo Dola: ";
	cin >> x;
	if (x <= 0)
	{
		exit(x);
	}
	cout << "Ket qua chuyen doi la: \n";
	cout << "   Theo dong Euro: " << 0.96 * x << " Eur. \n";
	cout << "    Theo dong Yen: " << 138.80 * x << " Y.\n";
	cout << "    Theo Bang Anh: " << 0.85 * x << " Bang Anh.\n";
	cout << "    Theo Vietnamdong: " << 24.815 * x << " Vietnamdong.\n";
	return 0;
}