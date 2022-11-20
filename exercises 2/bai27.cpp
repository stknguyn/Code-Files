#include <iostream>
using namespace std;
int main()
{
    float width, height, S, P;
    cout << "Nhap chieu cao :";
    cin >> height;
    cout << "Nhap chieu rong :";
    cin >> width;
    P = (width + height) * 2;
    S = width * height;
    cout << "Chu vi: " << P << endl;
    cout << "Dien tich: " << S;
    return 0;
}