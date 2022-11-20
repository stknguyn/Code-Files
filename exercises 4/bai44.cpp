#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Nhap do dai canh a: ";
    cin >> a;
    cout << "Nhap do dai canh b: ";
    cin >> b;
    cout << "Nhap do dai canh c: ";
    cin >> c;
    if (a > 0 and b > 0 and c > 0)
    {
        if ((a + b > c) and (a + c > b) and (b + c > a))
        {
            cout << "Ba canh tren la ba canh cua 1 tam giac";
        }
        else
        {
            cout << "Ba canh tren khong phai la ba canh cua 1 tam giac";
        }
    }
    else
    {
        cout << " Loi";
    }
    return 0;
}