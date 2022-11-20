#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    cout << "Nhap n,m( n < m): ";
    cin >> n >> m;
    if ( n<= m) {
    for( int i = n; i <= m; i++) {
        int sum = 0;
        int temp  = i;
        int num = to_string(i).size();
        do 
        sum+=pow((temp%10), num);
        while 
        (sum <= i && (temp/=10));
        if ( sum == i)
        cout << sum << " ";
    }
    }
    else cout << "Loi";
    return 0;
}
