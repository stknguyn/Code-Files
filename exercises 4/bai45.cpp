#include <iostream>
using namespace std;
int main()
{
    double a, b, c, d, S1, S2;
    cout << "Chieu dai HCN thu 1: ";
    cin >> a;
    cout << "Chieu rong HCN thu 1: ";
    cin >> b;
    cout << "Chieu dai HCN thu 2: ";
    cin >> c;
    cout << "Chieu rong HCN thu 2: ";
    cin >> d;
    if (a > 0 and b > 0 and c > 0 and d > 0)
    {
        S1 = a * b;
        S2 = c * d;
        if (S1 > S2)
        {
            cout << " HCN thu 1 lon hon";
        }
        else if (S1 < S2)
        {
            cout << "HCN thu 2 lon hon";
        }
        else
        {
            cout << "2 HCN bang nhau";
        }
    }
    else
    {
        cout << "Loi";
    }
    return 0;
}