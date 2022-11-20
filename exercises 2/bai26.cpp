#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double r, S, P;
    cout << " Nhap ban kinh hinh tron: ";
    cin >> r;
    P = 2 * M_PI * r;
    S = M_PI * r * r;
    cout << " Chu vi: " << P << endl;
    cout << " Dien tich: " << S << endl;
    return 0;
}