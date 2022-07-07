#include <stdio.h>
#include <iostream>
using namespace std;
class Picture
{
public:
	int** mass, lenght1, lenght2;
	Picture(int w, int h);
	int check_input2();
	int check_input1();
	int check_input();
	int calc(int n);
	void view();
};

int Picture::check_input()
{
	int digit;
	while (1)
	{
		cin >> digit;
		if (digit > 0 && digit <= 100)
			return digit;
		cout << "Неверный ввод!" << endl;
	}
}

int Picture::check_input2()
{
	int digit;
	while (1)
	{
		cin >> digit;
		if (digit <= lenght1)
			return digit;
		cout << "Неверный ввод!" << endl;
	}
}

int Picture::check_input1()
{
	int digit;
	while (1)
	{
		cin >> digit;
		if (digit <= lenght2)
			return digit;
		cout << "Неверный ввод!" << endl;
	}
}

Picture::Picture(int w, int h)
{
	cout << "Высота холста: ";
	w = check_input();
	cout << "Ширина холста: ";
	h = check_input();
	lenght1 = w;
	lenght2 = h;
	mass = new int* [w];
	for (int i = 0; i < w; i++) {
		mass[i] = new int[h];
		for (int j = 0; j < h; j++) {
			mass[i][j] = 0;
		}
	}
}

int Picture::calc(int n)
{
	int x1, x2, y1, y2, sum = 0;
	cout << "Введите количество прямоугольников" << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Введите координату х1: ";
		x1 = check_input1();
		cout << "Введите координату у1: ";
		y1 = check_input2();
		cout << "Введите координату х2: ";
		x2 = check_input1();
		cout << "Введите координату у2: ";
		y2 = check_input2();
		for (int q = x1; q < x2; ++q) {
			for (int w = y1; w < y2; ++w) {
				if (mass[q][w] == 0) {
					sum++;
					mass[q][w] = 1;
				}
			}
		}
	}
	int rez = lenght1 * lenght2 - sum;
	cout << "площадь незакрашенной области -" << rez;
	return rez;
}

void Picture::view()
{
	cout << "массив: \n";
	for (int i = 0; i < lenght1; i++) {
		cout << endl;
		for (int j = 0; j < lenght2; j++) {
			cout << mass[i][j] << " ";
		}
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Picture g(1, 2);
	g.view();
	g.calc(3);
	g.view();
	
}
