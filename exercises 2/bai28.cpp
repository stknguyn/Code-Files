#include <iostream>
using namespace std;
int main()
{
    int n, day, month, year;
    cout << "Nhap so ngay: ";
    cin >> n;
    if (n > 0) {
    year = n / 365;
    month = (n - year * 365) / 30;
    day = n - year * 365 - month * 30;
    cout << "Years: " << year << endl;
    cout << "Months: " << month << endl;
    cout << "Days: " << day << endl;
    }
    else 
    cout << "error";
    return 0;
}