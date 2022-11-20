#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream f1;
    f1.open(report.txt);
    f1<< "helloworld";
    int n, count1 = 0, count2 = 1;
    
    cout << " Nhap gioi han day Fibonacci n ( n >= 0): ";
    cin >> n;
    if ( n >= 0) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
    {
        int temp = 1;
        cout << count1 << " ";
        cout << count2 << " ";
        do {
            cout << temp << " ";
            temp = count1 + count2;
            count1 = count2;
            count2 = temp;
        }
        while ( temp <= n);
    }
    }
    else cout << "Loi";
    return 0;
}
