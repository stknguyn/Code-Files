#include <bits/stdc++.h>
using namespace std;
void numToWord(int n) {
    switch (n) {
        case 0:
        cout << "zero ";
        break;
        case 1:
        cout << "one ";
        break;
        case 2:
        cout << "two ";
        break;
        case 3:
        cout << "three ";
        break;
        case 4:
        cout << "four ";
        break;
        case 5:
        cout << "five ";
        break;
        case 6:
        cout << "six ";
        break;
        case 7:
        cout << "seven ";
        break;
        case 8:
        cout << "eight ";
        break;
        case 9:
        cout << "nine ";
        break;
        default:
        break;
    }
}
int reverse(int num) {
    int digit, revN;
    do {
        digit = num%10;
        revN = (revN*10) + digit;
        num/=10;
    }
    while (num != 0);
    return revN;
}
int main(int argc, char const *argv[])
{
    int n,reverseN,digit;
    cout << "Nhap so tu nhien n: ";
    cin >> n;
    if ( n > 0) {
    reverseN = reverse(n);

    do {
        digit = reverseN%10;
        numToWord(digit);
        reverseN/=10;
    }
    while (reverseN != 0);
    }
    else cout << "Loi";
    return 0;
}
