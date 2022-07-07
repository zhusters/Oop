#include<iostream>
#include<math.h>

using namespace std;

class Chess {

public:
	char q, w, e, r, t, y, a, b = 48;
	void Resh();
	Chess() {
		cout << "Координаты" << endl << "Например, D1 D3 E5 - " << endl;
		cin >> q >> w >> e >> r >> t >> y;
	}
	~Chess() {}
};
void Chess::Resh() {
	int d = 0;
	for (; ++b < 57; )
		for (a = 64; ++a < 73; )
			if ((b - w || a - q)&& (b - r || a - e)&& (b - y || a - t)&& (abs(q - a) == abs(w - b)||a == q || b == w||a == e || b == r||abs(a - t) * abs(b - y) == 2))
				++d;
	cout << "Количество пустых полей, которые бьют указанные во входных данных фигуры - " << endl;
	cout << d;
}

int main()

{

	setlocale(LC_ALL, "rus");
	Chess a;
	a.Resh();
}