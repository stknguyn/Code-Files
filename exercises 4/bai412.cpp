#include <bits/stdc++.h>
using namespace std;
int main()
{
    char kyTu;
    cout << "Ky Tu: ";
    cin >> kyTu;

    if ((kyTu >= 'a' && kyTu <= 'z') || (kyTu >= 'A' && kyTu <= 'Z'))
        cout << kyTu << ": A";
    else if ((kyTu >= 48 && kyTu <= 57))
        cout << kyTu << ": D";
    else
        cout << kyTu << ": S";

    return 0;
}
