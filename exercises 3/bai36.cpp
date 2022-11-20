#include <iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << x << "|" << '\t' << y << "|" << '\t' << "A=y+3" << '\t' << "|" << "A=" << y+3 << endl;
    cout << x << "|" << '\t' << y << "|" << '\t' << "B=y-2" << '\t' << "|" << "A=" << y-2 << endl;
    cout << x << "|" << '\t' << y << "|" << '\t' << "C=y*5" << '\t' << "|" << "A=" << y*5 << endl;
    if (y != 0){
    cout << x << "|" << '\t' << y << "|" << '\t' << "D=x/y" << '\t' << "|" << "A=" << x/y << endl;
    cout << x << "|" << '\t' << y << "|" << '\t' << "E=x%y" << '\t' << "|" << "A=" << x%y << endl;
    }
    return 0;
}