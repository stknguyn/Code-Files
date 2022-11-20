#include <iostream>

using namespace std;
int main() {
    int x,temp,sum=0;
    cout << "Enter two-digits number: ";
    cin >> x;
    temp = x;
    if (x > 10 and x < 100) {
        while (temp != 0) {
            sum += temp % 10;
            temp /=10;
        }
        cout << "Total: " << sum;
    }
    else cout << "Error";
    return 0;
}