#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x,p = 3.14159265;
	cout << "Градусна мiра:";
	cin >> x; 
	cout << "Радiанна мiра:" << x*p/180;
	system("pause>nul");
}