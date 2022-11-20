#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, total = 0;
    cout << "Nhap n: (n >= 0) ";
    cin >> n;
    if ( n >= 0) {
    for (int i = 1; i <= n; i++) {
        total += pow(i,2);
    }
    cout << "Total: " << total;
    }
    else cout << "Loi";
    return 0;
}