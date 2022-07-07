////#include<iostream>
////
////using namespace std;
////
////
////class Game {
////private:
////	int number, checked;
////
////public:
////	Game(int number) {
////		this->number = number;
////	};
////
////	void Check();
////
////};
////
////void Game::Check() {
////	while (number != checked)
////	{
////		cout << "Повтори число - ";
////		cin >> checked;
////		if (checked == number && checked > 0 && checked < 100) {
////			cout << "Верно!" << endl;
////		}
////		else {
////			cout << "Ошибка!" << endl;
////		}
////	}
////}
////
////
////
////
////
////
////
////
////int main() {
////	setlocale(LC_ALL, "Russian");
////	int n; 
////	cout << "Родитель введите число для ребенка - ";
////	cin >> n;
////	Game a(n);
////	a.Check();
////
////}
//
//
//
//
//
//
//#include<iostream>
//
//using namespace std;
//
//
//
//
//class Game {
//
//private:
//	int number, checked;
//	int random, vvod;
//	int length;
//
//public:
//	Game(int number) {
//		this->number = number;
//		
//
//	}
//	void Check();
//	void Rand();
//
//
//};
//
//
//
//void Game::Check() {
//
//	try
//	{
//		cout << "Повтори число - ";
//		while (number != checked) {
//			cin >> checked;
//			if (checked == number && checked > 0 && checked < 100) {
//				cout << "Верно!" << endl;
//			}
//			/*else {
//				cout << "Ошибка!" << endl;
//			}*/
//		}
//	}
//	catch (const std::exception& a)
//	{
//		cout << "Ошибка!"<<a.what() << endl;
//	}
//	
//
//
//}
//
//
//
//
//void Game::Rand() {
//	random = rand() % 50-50;
//	cout << "Компьютер загадал число попробуйте угадать - " << endl;
//	cin >> vvod;
//	while (random != vvod)
//	{
//
//		
//		if (random < vvod) {
//			cout << "Число больше загаданного" << endl;
//		}
//		if (random > vvod)
//		{
//			cout << "Число меньше загаданного" << endl;
//
//		}
//		if (vvod < -50 || vvod > 50)
//		{
//			cout << "Число выходит за рамки диапозона загаданного" << endl;
//
//		}
//		if (random == vvod)
//		{
//			cout << "Вы отгадали число!" << endl;
//		}
//		cout << "Повтори число - " << endl;
//		cin >> vvod;
//
//
//	}
//
//}
//
//
//
//
//
//
//
//
//
//
//
//int main() {
//
//	setlocale(LC_ALL, "Russian");
//	int n; 
//	cout << "Родитель введите число для ребенка - ";
//	cin >> n;
//
//	Game a(n);
//	a.Check();
//	a.Rand();
//	
//
//
//
//
//}
#include <iostream>

using namespace std;

void Count();
class game {
public:
	double number, vvod;
	game(int, int);
	~game();
	void Count();
};
game::game(int p, int mp) {
	number = p;
	vvod = mp;
}
void game::Count() {
	if ((vvod - number)) throw (number - vvod);
	cout << "верно"<< endl;
}
game::~game() {};
int main() {

	setlocale(LC_ALL, "rus");
	double b, c;
	while (true) {

		cout << "введите число - " << ' ';
		cin >> b;
		cout << "повотрите число- " << ' ';
		cin >> c;
		game a(b, c);
		try
		{
			a.Count();
		}
		catch (double d) {
			cout << "ошибка"<< endl;

		}
	}

	return 0;

}