#include <iostream>
using namespace std;
int main()
{
    float cor1, cor2, cor3;
    cout << "Nhap goc thu nhat cua tam giac: ";
    cin >> cor1;
    cout << "Nhap goc thu hai cua tam giac: ";
    cin >> cor2;
    if ((cor1 > 0) && (cor2 > 0) && (cor1 + cor2 < 180))
    {
        cor3 = 180 - cor1 - cor2;
        cout << "Goc thu 3 cua tam giac: " << cor3;
    }
    else
        cout << "Error";
    return 0;
}