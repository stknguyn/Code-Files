#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, num, revN = 0,digit;
    cout << " Nhap so tu nhien n: ";
    cin >> n;
    num = n;
    do {
        digit = num%10;
        revN = (revN*10) + digit;
        num/=10;
    }
    while (num != 0);
    if ( revN == n)
    cout << n << " is a palindrome number";
    else 
    cout << n << " is not a palindrome number";
    return 0;
}
