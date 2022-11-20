#include <iostream>
using namespace std;
int main()
{
    int hour, min, mins;
    cout << "Nhap vao so gio: ";
    cin >> hour;
    cout << "Nhap vao so phut: ";
    cin >> min;
    if ((hour > 0) && (min > 0))
    {
        mins = min + hour * 60;
        cout << "Tong so phut: " << mins;
    }
    else 
    cout << "Error";
}