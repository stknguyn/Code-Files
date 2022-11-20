#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, product = 1;
    
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    if ( n >= 0) {
    while ( n!=0) {
        product*=(n%10);
        n/=10;
    }
    cout << "Ket qua: " << product;
    }
    else cout << "Loi";
    return 0;
}
