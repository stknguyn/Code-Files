#include <iostream>
#include <list>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char **argv)
{
	int a, b, c, temp;
	int lst[3];

	cout << "NHAP LAN LUOT A, B, C:" << endl;
	cin >> a >> b >> c;
	if (a <= -999999999 || c >= 999999999)
	{
		cout << "NOT VALID";
	}
	else
	{
		lst[0] = a;
		lst[1] = b;
		lst[2] = c;
		for (int i = 0; i < 2; i++)
		{
			int min_idx = i;
			for (int j = i + 1; j < 3; j++)
				if (lst[j] < lst[min_idx])
				{
					temp = lst[j];
					lst[j] = lst[i];
					lst[i] = temp;
				}
		}
		cout << lst[0] << " " << lst[1] << " " << lst[2];
	}
	return 0;
}
