// Lab_03_2.cpp
// Кругліцький Мстислав
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 14

#include <iostream>

using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F1;
	double F2;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (x + c < 0 && a != 0)
		F1 = -a * x * x - b;
	if (x + c > 0 && a == 0)
		F1 = (x - a) / (x - c);
	if (!(x + c < 0 && a != 0) && !(x + c > 0 && a == 0))
		F1 = x / c + c / x;
	cout << endl;
	cout << "1) F = " << F1 << endl;


	// спосіб 2: розгалуження в повній формі
	if(x + c < 0 && a != 0)
		F2 = -a * x * x - b;
	else 
		if (x + c > 0 && a == 0)
			F2 = (x - a) / (x - c);
		else 
			F2 = x / c + c / x;

	cout << "2) F = " << F2;

	cin.get();
	return 0;
}