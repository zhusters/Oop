#include <iostream>
using namespace std;
class Accountant {
public:
	char a[5], b[5];
	Accountant() {
		cout << "input one =" << ' '; 
		cin >> a;
		cout << "input two =" << ' '; 
		cin >> b;
	}
	void Run() {
		for (int i = 0; i < 3; i++) {
			if (a[i] < a[i + 1]) { 
				swap(a[i], a[i + 1]);
			}
		}
		for (int i = 0; i < 4; i++) {
			if (b[i] == '-') {
				i++;
				if (b[i] < b[i + 1])
					swap(b[i], b[i + 1]);
				break; }
			if (b[i] > b[i + 1]) {
				if (b[i + 1] == '0' && i == 0) break;
				swap(b[i], b[i + 1]);
			}

		}

		cout << "proverka" << ' ' << "stroki - " << ' ' << a << ' ' << b << ' ';
		int c = atoi(a);
		int d = atoi(b);
		cout << "number:" << ' ' << c << ' ' << d << ' ' << endl;
		cout << "Max =" << ' ' << c - d << endl;
	}
};

int main() {
	Accountant t1;
	t1.Run();
	return 0;

}