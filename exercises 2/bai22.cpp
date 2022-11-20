#include<iostream>
using namespace std;

int main() {

double tax, tip, tbill, meal_cost = 88.67; 
tax	= meal_cost * 0.0675;
tip	= (meal_cost + tax) * 0.2; 
tbill = meal_cost + tax + tip;
cout << "Meal cost = $" << meal_cost << endl; 
cout << "Tax amount = $" << tax << endl;
cout << "Tip amount = $" << tip << endl; 
cout << "Total bill = $" << tbill << endl; 
return 0;
}