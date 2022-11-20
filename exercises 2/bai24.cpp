#include <iostream>
using namespace std;
int main()
{
    double a, b, temp;
    cout << "Nhap so a: \n";
    cin >> a;
    cout << "Nhap so b: \n";
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "Chuyen gia tri 2 so a va b \n";
    cout << "a: " << a << "\nb: " << b;
    return 0;
}