#include <iostream>
#include <math.h>
using namespace std;
int main() { 
    int x,y,p,s,q;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    p=x*y;
    s=x+y;
    q=pow(s,2) + pow(p, s*x) * (p +y);
    cout << p << endl;
    cout << s << endl;
    cout << q << endl;
    return 0;
    }
