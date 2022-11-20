#include <iostream>
using namespace std;
int main() { 
    double v0, a, v, t;
    cout << "Nhap van toc ban dau: ";
    cin >> v0;
    cout << "Nhap gia toc: ";
    cin >> a;
    cout << "Nhap thoi gian: ";
    cin >> t;
    if (t>=0) {
    v = v0 + a*t;
    cout << "Van toc cua xe: " << v;
    }
    else cout << "error";
}
