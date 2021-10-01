#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, firstPart, secondPart;

	// ������� ����������� ������ �������� �
	cout << "Enter x: ";
	cin >> x;

	// �������� �����(�������) ������� ������
	firstPart = 2 * x - 13.5;

	// ��������� ����� ������������
	if (x < -1) secondPart = -sin(x) / (1 + pow(cos(x), 2));
	if ((x >= -1) && (x <= 1)) secondPart = -pow(cos(pow(sin(x), 2)), 2) - 1;
	if (x > 1) secondPart = -log10(x + 0.4);

	// ���������� �� ���� �������� �
	y = firstPart + secondPart;
	cout << "\nResult 1: " << firstPart + secondPart;

	// ����� ����� ������������
	if (x < -1) secondPart = -sin(x) / (1 + pow(cos(x), 2));
	else if (x <= 1) secondPart = -pow(cos(pow(sin(x), 2)), 2) - 1;
	else secondPart = -log10(x + 0.4);

	// ���������� �� ���� �������� �
	y = firstPart + secondPart;
	cout << "\nResult 2: " << firstPart + secondPart << endl;

	system("pause");
	return 0;
}