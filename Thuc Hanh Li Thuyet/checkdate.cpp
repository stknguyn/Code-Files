#include <iostream>
using namespace std;

int main()
{
    int d, m, y;
    cout << "Nhap vao ngay, thang, nam: ";
    cin >> d >> m >> y;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        

        break;

    default:
        cout << "sai cmnr";
        break;
    }
}