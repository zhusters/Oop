#include <iostream>

using namespace std;

class Tree {

public:

	int n, m;//Поля для хранения значений
	Tree();
	void calc();
};

Tree::Tree()

{

	cout << "сколько у вас деревьев?" << endl;
	cin >> n;
	cout << "сколько хотите вырубить?" << endl;
	cin >> m;
	cout << endl;

}

void Tree::calc() {

	int S = 0;//Сумма прогрессии
	int k = (n - 1) / (m - 1);//Кол-во членов прогрессии
	int d = m - 1;//Шаг прогрессии
	S = (2 + (k - 1) * d) * k / 2; //ф-ла S первых членов АП
	cout << "Ввод:" << ' ' << n << ' ' << m << endl;
	cout << "Вывод:" << ' ' << S;
}

int main() {
	setlocale(LC_ALL, "Russian");

	Tree a;

	a.calc();

}