#include <bits/stdc++.h>
using namespace std;
void menu()
{
    cout << "********************" << endl;
    cout << "*      MENU        *" << endl;
    cout << "*  1.Armstrong     *" << endl;
    cout << "*  2.Prime         *" << endl;
    cout << "*  3.Finish        *" << endl;
    cout << "********************" << endl;
}
int main(int argc, char const *argv[])
{
    int choose;
    while (true)
    {
        menu();
        cin >> choose;
        switch (choose)
        {
        case 1:
            int n, m;
            cout << "Armstrong" << endl;
            cout << "Nhap n,m( n < m): ";
            cin >> n >> m;
            for (int i = n; i <= m; i++)
            {
                int sum = 0;
                int temp = i;
                int num = to_string(i).size();
                do
                    sum += pow((temp % 10), num);
                while (sum <= i && (temp /= 10));
                if (sum == i)
                    cout << sum << " ";
            }
            break;
        case 2:
        int n;
        cout << "Prime" << endl;
        cout << " Nhap n: ( n >= 0) ";
        cin >> n;
        if ( n == 0 && n == 1)
        cout << n<< " la so nguyen to";
        else {
            for ( int i = 2; i < sqrt(n); i++) {
                if ( n % i == 0) {
                    cout << n << " khong phai la so nguyen to";
                    break;
                }
            }
            cout << n << " la so nguyen to";
            break;
        }
        break;
        case 3:
            cout << "Do you want to finish (y/n)?: ";
            char choose3;
            cin >> choose3;
            if (choose3 == 'y' || choose3 == 'Y')
            {
                cout << "See you again!";
                break;
            }
            else if (choose3 == 'n' || choose3 == "N")
            {
                cout << "Cancel";
            }

        default:
            break;
        }

        return 0;
    }
