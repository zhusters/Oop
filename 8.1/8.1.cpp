#include <iostream>

using namespace std;

class Student {
public:
	int N;
	Student(int);
	~Student();
	void calc();
};

Student::Student(int a) {
	N = a;
}

void Student::calc() {
	int* a = new int[N];
	int* b = new int[N];
	for (int i = 0; i < N; i++) {
		cout << "введите часы работы предподавателя - " << ' ' << i + 1 << ' ' << endl;
		cout << "начало - " << ' ';
		cin >> a[i];
		if (a[i] < 1 || a[i]>31) throw a[i];
		cout << "конец - " << ' ';
		cin >> b[i];
		if (b[i] < 1 || b[i]>31 || b[i] < a[i]) throw b[i];
	}
	double p;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (a[i] > b[j]) {
				p = a[i] - b[j]; throw p;
			}
			if (b[i] < a[j]) {
				p = b[i] - a[j]; throw p; 
			}
		}

	}

	cout << "да" << endl;
}
Student::~Student() {};
int main() {

	setlocale(LC_ALL, "rus");
	int c;
	while (true) {
		cout << "введите количество предметов - " << ' ';
		try

		{
			cin >> c;
			Student o(c);
			if (c < 1 || c>100) throw c;
			o.calc();
		}
		catch (int d) {
			cout << "ошибка " << endl << "число" << ' ' << d << ' ' << " невернно" << endl;
		}
		catch (double f) {
			cout << "нет"<< endl;
		}

	}

	return 0;
}