#include <iostream>
using namespace std;
class shashlyk
{
public:
	int Frank, Jack;
	void calc();

};
void shashlyk::calc()
{
	setlocale(LC_ALL, "ru");
	int Summa = Frank + Jack - 1;
	cout << "было -" << Summa << " банок" << endl;
	cout << "френк не успел подстрелить " << Summa - Frank << " банок" << endl;
	cout << "джек не успел подстрелить " << Summa - Jack << " банки" << endl;
}
int main()
{
	shashlyk a;
	a.Frank = 4;
	a.Jack = 7;
	a.calc();
}
