#include <iostream>
using namespace std;
int main()
{
    double exam1, exam2, exam3, midterm, _final;
    cout << "======DIEM KIEM TRA======\n";
    cout << "Nhap diem kiem tra 1 : ";
    cin >> exam1;
    cout << "Nhap diem kiem tra 2 : ";
    cin >> exam2;
    cout << "Nhap diem kiem tra 3 : ";
    cin >> exam3;
    cout << "======DIEM THI GIUA KY=====\n";
    cout  << "Nhap diem giua ky: ";
    cin >> midterm;
    cout << "=====DIEM THI CUOI KY=====\n";
    cin >> _final;
    if (exam1, exam2, exam3, midterm, _final >=0) {
    cout << "Tong diem kiem tra: " << exam1 + exam2 + exam3 << "\nDiem thi giua ky: " << midterm << "\nDiem thi cuoi ky:" << _final;
    }
    else cout << "error";
    return 0;
}