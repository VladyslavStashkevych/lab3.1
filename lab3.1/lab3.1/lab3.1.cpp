#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, firstPart, secondPart;

	// Просимо користувача ввести значення х
	cout << "Enter x: ";
	cin >> x;

	// Записуємо першу(незмінну) частину виразу
	firstPart = 2 * x - 13.5;

	// Скорочена форма розгалуження
	if (x < -1) secondPart = -sin(x) / (1 + pow(cos(x), 2));
	if ((x >= -1) && (x <= 1)) secondPart = -pow(cos(pow(sin(x), 2)), 2) - 1;
	if (x > 1) secondPart = -log10(x + 0.4);

	// Обчислення та вивід значення у
	y = firstPart + secondPart;
	cout << "\nResult 1: " << firstPart + secondPart;

	// Повна форма розгалуження
	if (x < -1) secondPart = -sin(x) / (1 + pow(cos(x), 2));
	else if (x <= 1) secondPart = -pow(cos(pow(sin(x), 2)), 2) - 1;
	else secondPart = -log10(x + 0.4);

	// Обчислення та вивід значення у
	y = firstPart + secondPart;
	cout << "\nResult 2: " << firstPart + secondPart << endl;

	system("pause");
	return 0;
}