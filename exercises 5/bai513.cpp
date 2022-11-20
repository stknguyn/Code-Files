#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y;
    cout << " Nhap x, y (x,y > 0):";
    cin >> x >> y;
    if ( x > 0 && y > 0) {
    for ( int j = 0; j < y; j++) {
        for (int i = 0; i < x; i++) {
            cout << "* ";
        }
        cout << endl;
    }
    }
    else cout << "Loi";
    return 0;
}
