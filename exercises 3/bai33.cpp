#include <iostream>
#include <string>

using namespace std;
int main() {
    string fullName;
    cout << "Type  your full name: ";
    getline(cin, fullName);
    cout << "Wellcome " << fullName << " to VKU";
    return 0;
}