#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x;

    cout << "Input degree of angle x : ";
    cin >> x;
    cout << "sin(x) = " << sin(x) << endl;
    cout << "cos(x) = " << cos(x) << endl;
    cout << "tan(x) = " << tan(x) << endl;
    cout << "cot(x) = " << 1 / tan(x) << endl;
    return 0;
}