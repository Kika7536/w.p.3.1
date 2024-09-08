#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "-----Проверяем-----" << endl;

	if (a < b) {
		cout << "Наименьшее число: " << a << endl;
	}
	else if (a > b) {
		cout << "Наименьшее число: " << b << endl;
	}
	else {
		cout << "Числа равны!" << endl;
	}
}