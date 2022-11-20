#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, sum = 0;
    cout << "Nhap n: ";
    cin >>n;
    if ( n > 0 ) {
    for ( int i = 1; i <=n; i++ ) {
        if ( i % 2 ==0) 
        sum += i;
    }
    cout << sum;
    }
    else cout << "Loi";
    return 0;
}
