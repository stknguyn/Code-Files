#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, del, x1, x2;
    cout << "Nhap he so a,b,c cua phuong trinh ax^2 + bx + c = 0" << endl;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh vo so nghiem";
            }
            else
            {
                cout << "Phuong trinh vo nghiem";
            }
        }
        else
        {
            cout << "Phuong trinh co 1 nghiem: " << -c / b << endl;
        }
    }
    else
    {
        del = b * b - 4 * a * c;
        if (del > 0)
        {
            x1 = (-b + sqrt(del)) / (2 * a);
            x2 = (-b - sqrt(del)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem:" << endl;
            cout << "x1= " << x1 << endl;
            cout << "x2= " << x2 << endl;
        }
        else if (del == 0)
        {
            cout << "Phuong trinh co nghiem kep:" << endl;
            cout << "x1 = x2 = " << -b / (2 * a);
        }
        else
        {
            cout << "Phuong trinh vo nghiem";
        }
    }
    return 0;
}
