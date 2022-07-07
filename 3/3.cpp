#include <iostream>
#include <string> 


using namespace std;


class player {
private:
	int* hp;
	int* stamina;
	int* power;
	int price;


public:
	player() {
		hp = 0;
		stamina = 0;
		power = 0;

	}
	player(int hp, int stamina, int valuepower) {
			this->hp = new int(hp);
			this->stamina = new int(stamina);
			this->power = new int(valuepower);	
	}


	~player() {
		delete (hp, stamina, power);
	}


	int gethp() {
		return *hp;
	}
	void sethp(int valuehp) {
		*hp = valuehp;
	}


	int getstamina() {
		return *stamina;
	}
	void setstamina(int valuestamina) {
		*stamina = valuestamina;
	}


	int getpower() {
		return*power;
	}
	void setpower(int valuepower) {
		*power = valuepower;
	}


	int getprice();
	void print();

};
int player::getprice()
{ 
	if (hp != 0 && power != 0 && stamina != 0) {
		//cout << "жизни = 0 ((((" << hp;
		price = *(hp) * (*power) * (*stamina) + (*hp) * (*stamina) / (*power) - (*stamina) * (*power) / (*hp);
		return price;
	}
	else {
		cout << "ошибка ";
	}
	/*	if (stamina == 0) {
			cout << "выносливость = 0 ((((" << stamina;
		}
		if (power == 0) {
			cout << "сила = 0 ((((" << power;
		}*/
		/*	else {
				price = *(hp) * (*power) * (*stamina) + (*hp) * (*stamina) / (*power) - (*stamina) * (*power) / (*hp);

				return 0;
			}*/

	return 0;
}
void player::print()
{
	
		cout << "жизни - " << *hp << endl;
		cout << "выносливость - " << *stamina << endl;
		cout << "сила - " << *power << endl;
		cout << "стоимость - " << price << endl;
		cout << endl;



}





class inventory {
private:
	int* size;
	int length = 0;
	int id;
	int weight;
	char name[256];
	inventory* arr;

public:

	inventory() {
		size = 0;
		arr = 0;
	}
	inventory(int valuesize) {
		size = new int[valuesize];
		arr = new inventory[valuesize];
		length = valuesize;


		for (int i = 0; i < length; i++)
		{
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << endl << "введите id под номером "<< i+1 <<" - "; cin >> arr[i].id;
			cout << endl << "введите weight под номером " << i+1 << " - "; cin >> arr[i].weight;
			cout << endl << "введите name под номером " << i + 1 << " - "; cin >> arr[i].name;
			//arr[i].weight = rand() % 50;
			size[i] = rand() % 2000;
		}
	}
	~inventory() {
		delete[]size;
		delete[]arr;

		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "деструктор инвентори" << endl;

	}


	int printarr();

	int run();
		
	

};
int inventory::printarr()
{

	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "инвентарь - ";

	for (int i = 0; i < length; i++)
	{
	
			cout << size[i] << ' ';
	}
	cout << endl;
	return 0;

}
int inventory::run()
{
	for (int i = 0; i < length; i++)
	{


		if (arr[i].weight > 30 && arr[i].weight < 90) {
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "задание" << endl;
			cout << "id под номером " << i + 1 << " - " << arr[i].id << ' ' << endl;
			cout <<"weight под номером "<<i+1<<" - "<< arr[i].weight << ' '<<endl;
			cout << "name под номером " << i + 1 << " - " << arr[i].name << ' ' << endl;

		}


	}
	cout << endl;

	return 0;

}


















class arena {

private:
	int length;
	int** arr;
	arena** arrforlevel;
	int level1, level2, level3, level4, level5;
public:

	void createarena(int valuelength);
	void createarenaforlevel(int valuelenght);		
	friend void run(arena& value);
};
void arena::createarenaforlevel(int valuelength) {
	length = valuelength;
	arrforlevel = new arena * [length];
	for (int i = 0; i < length; i++)
	{
		arrforlevel[i] = new arena[length];
	}
	cout << "уровень 2" << endl;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			arrforlevel[i][j].level1 = rand() % 100;
			arrforlevel[i][j].level2 = rand() % 100;
			arrforlevel[i][j].level3 = rand() % 100;
			arrforlevel[i][j].level4 = rand() % 100;
			arrforlevel[i][j].level5 = rand() % 100;
			cout << arrforlevel[i][j].level1 << "\t";
			cout << arrforlevel[i][j].level2 << "\t ";
			cout << arrforlevel[i][j].level3 << "\t ";
			cout << arrforlevel[i][j].level4 << "\t ";
			cout << arrforlevel[i][j].level5 << "\t ";



		}cout << endl;
	}



}

void arena::createarena(int valuelength)
{
	length = valuelength;
	arr = new int* [length];
	for (int i = 0; i < length; i++)
	{
		arr[i] = new int[length];
	}
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "уровень 1" << endl;

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{

			arr[i][j] = rand() % 1500 - 500;
			cout << arr[i][j] << '\t';
		}cout << endl;
	}
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	// аварийный выход
	//for (int i = 0; i < length; i++)
	//{
	//	for (int j = 0; j < length; j++)
	//	{
	//		delete[]arr[i];
	//	}
	//	delete[]arr;
	//}
}
void run(arena& value) {
	int countmy = 0, counthis = 0, countneutral = 0, test = 0;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < value.length; i++)
	{
		for (int j = 0; j < value.length; j++)
		{
			// уровень 1
			if (i < j && value.arr[i][j] > 0) {
				countmy++;
			}
			if (i > j && value.arr[i][j] > 0) {
				counthis++;
			}
			if (value.arr[i][j] < 0) {
				countneutral++;
			}
			// уровень 2
			// не верно
			if (i < j && value.arrforlevel[i][j].level1, value.arrforlevel[i][j].level2, value.arrforlevel[i][j].level3, value.arrforlevel[i][j].level4, value.arrforlevel[i][j].level5 > 0) {
				countmy++;
			}
			if (i > j && value.arrforlevel[i][j].level1, value.arrforlevel[i][j].level2, value.arrforlevel[i][j].level3, value.arrforlevel[i][j].level4, value.arrforlevel[i][j].level5  > 0) {
				counthis++;
			}
			if (value.arrforlevel[i][j].level1, value.arrforlevel[i][j].level2, value.arrforlevel[i][j].level3, value.arrforlevel[i][j].level4, value.arrforlevel[i][j].level5  < 0) {
				countneutral++;
			}

		}
	}
	cout << "нейтральные воины - " << countneutral<<endl;
	cout << "мои воины - " << countmy << endl;
	cout << "вражеские воины - " << counthis << endl;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

}




class serveranswer {
private:
	string text;

public:
	
	string gettext() {
		return text;
	}
	void settext(string value) {
		text = value;
	}
	
	void printtext() {
		cout<<"текст - " << text<<endl;
	}




	/*stringstream ss;
	ss << text;
	while (ss >> fiveSymbol) {
		if (fiveSymbol.length() == 5) {
			countFiveSymbol++;
			cout << fiveSymbol << " " << endl;
		}
	}*/

};
















int main() {
	

	setlocale(LC_ALL, "Russian");
	////////////////////////////////////
	// метод getprice выводит цену данного героя
	//метод print выводит информацию о герое 
	//player x (жизни , выносливость, сила)
	player tank(100, 23, 130);
	cout << "tank" << endl;
	tank.getprice();
	tank.print();

	player archer(30, 150 , 90);	
	cout << "archer" << endl;
	archer.getprice();
	archer.print();

	/////////////////////////////////////
	//inventory x ( размер одномерного массива)
	//метод printarr выводит одномерный массив
	//метод run выводит количество нечетных цифр
	inventory arr(2);
	arr.printarr();
	arr.run();


	//////////////////////////////
	//метод createarena создает двумерный массив размером (х)
	//метод createarenaforlevel создает двумерный динамический массив обьектов размером (х
	//ф-ия run (x) считает количество вражеских и моих воинов
	arena army;
	army.createarena(4);
	army.createarenaforlevel(4);
	run(army);






	//settext устанавлиет значение переменной класса serveranswer
	// printtext вывод переменной
	serveranswer test;
	test.settext("vrsvrds");
	test.printtext();

	
}
// освободить память 
// сделать проверку в arrforlevel +
// разобратся с указателями если не передаем параметры в player
// при использовании конструктора inventory.arr(); не срабатывает метод settext
// при передаче параметров в ф-ии createarena(6); createarenaforlevel(5); параметры должны быть ==