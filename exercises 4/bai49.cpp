#include <bits/stdc++.h>
using namespace std;
bool nam_nhuan(int year)
{
    if (year % 100 == 0)

    {
        if (year % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int thang;
    int nam;
    cout << " nhap vao mot thang (1-12): ";
    cin >> thang;
    cout << " nhap nam";
    cin >> nam;
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Thang " << thang << " co 31 ngay";
        break;
    case 2:
        if (nam_nhuan(nam) == true)
            cout << "Thang 2 co 29 ngay";
        else
            cout << "Thang 2 co 28 ngay";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "thang" << thang << " co 30 ngay";
        break;
    }
}
