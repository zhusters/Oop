#include <iostream>
#include <string> 
#include <algorithm>


using namespace std;


class player {
private:
	int* hp;
	int* damage;
	int* armour;
	int* magicdamage, * physicaldamage;
	int price, magicprice, physicalprice;



public:
	int a;
	player() {
		hp = 0;
		damage = 0;
		armour = 0;
		price = 0;

	}
	player(int hp, int damage, int valuearmour, int magicdamage, int physicaldamage) {
		this->hp = new int(hp);
		this->damage = new int(damage);
		this->armour = new int(valuearmour);
		this->magicdamage = new int(magicdamage);
		this->physicaldamage = new int(physicaldamage);
	}


	~player() {
		delete (hp, damage, armour);
	}


	int gethp() {
		return *hp;
	}
	void sethp(int valuehp) {
		*hp = valuehp;
	}

	void setdamage(int valuedamage) {
		*damage = valuedamage;
	}
	int getarmour() {
		return*armour;
	}
	void setarmour(int valuearmour) {
		*armour = valuearmour;
	}
	int getdamage();
	int getprice();
	void print();

	//void whowin(player& value) {
	//	if (*value.damage> 1){//(((*valueone).hp) / (value.damage - (*valueone).armour) > (value.hp) / ((*valueone).damage - value.armour) ) {
	//		cout << "победили силы света" << endl;
	//	}
	//	else {
	//		cout << "победили силы тьмы" << endl;

	//	}
	//	.Если HP(игрока) / (Урон монстра – броня иг - рока) > HP(Монстра) / (Урон игрока – броня монстра), то игрок победил, а в против - ном случае – проиграл.
	//}

};
int player::getdamage() {
	if (magicdamage != 0 && physicaldamage != 0) {

		magicprice = ((*magicdamage) *(* physicaldamage)) - (*armour);
		physicalprice = ((*physicaldamage) * (*armour)) + (*hp) - (*magicdamage);
		return magicprice;
		return physicalprice;

	}
	
	else {
		cout << "ошибка ";

	}
}
int player::getprice()
{
	if (hp != 0 && armour != 0 && damage != 0) {
		//cout << "жизни = 0 ((((" << hp;
		price = *(hp) * (*armour) * (*damage) + (*hp) * (*damage) / (*armour) - (*damage) * (*armour) / (*hp);
		return price;
	}
	else {
		cout << "ошибка ";
	}
	/*	if (damage == 0) {
			cout << "выносливость = 0 ((((" << damage;
		}
		if (armour == 0) {
			cout << "сила = 0 ((((" << armour;
		}*/
		/*	else {
				price = *(hp) * (*armour) * (*damage) + (*hp) * (*damage) / (*armour) - (*damage) * (*armour) / (*hp);

				return 0;
			}*/

	return 0;
}








void player::print()
{
	// тут ошибка если не передаем параметры
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

	cout << "жизни - " << *hp << endl;
	cout << "урон - " << *damage << endl;
	cout << "броня - " << *armour << endl;
	cout << "стоимость - " << price << endl;
	cout << "магический урон  - " << magicprice << endl;
	cout << "физический урон  - " << physicalprice << endl;


	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

//	cout << endl;



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
			cout << endl << "введите id под номером " << i + 1 << " - "; cin >> arr[i].id;
			cout << endl << "введите weight под номером " << i + 1 << " - "; cin >> arr[i].weight;
			cout << endl << "введите name под номером " << i + 1 << " - "; cin >> arr[i].name;
			//arr[i].weight = rand() % 50;
			size[i] = rand() % 2000;
		}
	}
	~inventory() {
		delete[]size;
		delete[]arr;

		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "деструктор инвентори - "<<this << endl;

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
			cout << "weight под номером " << i + 1 << " - " << arr[i].weight << ' ' << endl;
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
			// исправить вывод
			arrforlevel[i][j].level1 = rand() % 100;
			arrforlevel[i][j].level2 = rand() % 100;
			arrforlevel[i][j].level3 = rand() % 100;
			arrforlevel[i][j].level4 = rand() % 100;
			arrforlevel[i][j].level5 = rand() % 100;
			cout << arrforlevel[i][j].level1 << "\t ";
			cout << arrforlevel[i][j].level2 << "\t ";
			cout << arrforlevel[i][j].level3 << "\t ";
			cout << arrforlevel[i][j].level4 << "\t ";
			cout << arrforlevel[i][j].level5 << "\t ";



		}cout<< endl;
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
	int countmy = 0, counthis = 0, countneutral = 0;
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
			if (i > j && value.arrforlevel[i][j].level1, value.arrforlevel[i][j].level2, value.arrforlevel[i][j].level3, value.arrforlevel[i][j].level4, value.arrforlevel[i][j].level5 > 0) {
				counthis++;
			}
			if (value.arrforlevel[i][j].level1, value.arrforlevel[i][j].level2, value.arrforlevel[i][j].level3, value.arrforlevel[i][j].level4, value.arrforlevel[i][j].level5 < 0) {
				countneutral++;
			}

		}
	}
	cout << "нейтральные воины - " << countneutral << endl;
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
		transform(text.begin(), text.end(), text.begin(), tolower);
	}

	void printtext() {
		cout << "текст - " << text << endl;
	}


	serveranswer operator =	(const serveranswer& other) {
		

		if (this == &other) {
			text = other.text;
			return *this;
			//for (int i = 0; i < other.text.length(); i++)
			//{
			//	if (text == "A") {
			//		transform(text.begin(), text.end(), text.begin(), tolower);// перевод регистров
			//	}
			//}
			//getline(cin, test.text); //Помещаем строку, введенную пользователем, в поле
		}	
		text = other.text;
		return *this;
	}

};









class monsters {
public:
	int *hp, *damage, *armour;
	int price;
	string voice;
	
public:
	monsters() {
	
	}
	monsters(int hp, int damage, int armour) {
		this->hp = new int (hp);
		this->damage = new int  (damage);
		this->armour = new int (armour);
	}

	~monsters() {
		delete(hp, damage, armour);
	}
	void printinfo() {
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

		cout << "жизни - " << *hp << endl;
		cout << "урон - " << *damage << endl;
		cout << "броня - " << *armour << endl;
		cout << endl;
	}
	void scream(string voice) {
		this->voice = voice;
		cout << voice << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

	}
	friend void whowin(player& value);


};

class nightmonsters:public monsters{
public:
	nightmonsters(){
	}
	nightmonsters(int hp, int damage, int armour) {
		this->hp = new int(hp);
		this->damage = new int(damage*5);
		this->armour = new int(armour);
	}


};

class daymonsters :public monsters {
public:
	daymonsters() {

	}
	daymonsters(int hp, int damage, int armour) {
		this->hp = new int(hp*5);
		this->damage = new int(damage);
		this->armour = new int(armour);
	}
	~daymonsters() {
	}

};

class bossmonsters :public monsters {
public:
	bossmonsters() {

	}
	bossmonsters(int hp, int damage, int armour) {
		this->hp = new int(hp*5);
		this->damage = new int(damage*5);
		this->armour = new int(armour*5);
	}
	~bossmonsters() {
	}

};




















int main() {


	setlocale(LC_ALL, "Russian");
	////////////////////////////////////
	// метод getprice выводит цену данного героя
	//метод print выводит информацию о герое 
	//player x (жизни , урон, броня, магический урон, физический урон)
player tank(333, 333 ,30, 50,50);
	cout << "tank" << endl;
	tank.getprice();
	tank.print();
	
	player archer(100, 100, 100 ,45,45);
	archer.setarmour(777);
	archer.getarmour();
	cout << "archer" << endl;
	archer.getprice();
	archer.getdamage();
	archer.print();

	//
	//archer.a = 4;
	//player* y;
	//y = &archer;
	//cout << y->a; //Косвенное обращение к полю a объекта x, так как y хранит указатель, на адрес объекта x в памяти
	//cout << endl << archer.a; //Прямое обращение к полю a

	/////////////////////////////////////
	// monsters x(жизни, урон, броня)
	// printinfo(); выводит информацию монстра
	// scream("x"); выводит фразу героя
	// nightmonsters damage*5
	// daymonsters hp*5
	// bossmonsters all *5
	cout << "ogr"<<endl;
	monsters ogr(30,30,30);
	ogr.printinfo();
	ogr.scream("Не могу стоять, пока другие работают... Пойду полежу. Орк - рабочий");




	cout << "necromancer" << endl;
	nightmonsters necromancer(10,10,10);
	necromancer.printinfo();
	necromancer.scream("Первое условие бессмертия — смерть. Некромант");
	



	// реализация метода whowin 
	// whowin дружественный метод класса player к-ый принимает указатель базового класса monsters к-ый указывает
	// на обьекты производных классов
	// x.whowin(); где х обект класса player не иначе

	player* pointerone;
	pointerone = &tank;

	monsters* pointer;
	pointer = &necromancer;
	//tank.whowin(*pointerone);






	cout << "alchemist" << endl;
	daymonsters alchemist(11,11,11);
	alchemist.printinfo();
	alchemist.scream("Сгинь нечистая сила, останься чистый спирт! Алхимик");



	cout << "headhunter" << endl;
	bossmonsters headhunter(777,777,777);
	headhunter.printinfo();
	headhunter.scream("Одна голова — хорошо, а на плечах — еще лучше. Охотник за головами");
	



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
	army.createarena(2);
	army.createarenaforlevel(2);
	run(army);






	//settext устанавлиет значение переменной класса serveranswer
	// printtext вывод переменной
	serveranswer test,testtwo;
	test.settext("ПОДСКАЗКА:МОНСТРЫ СКРЫВАЮТСЯ В ТЕМНОТЕ");
	testtwo = test;
	//test.printtext();
	testtwo.printtext();




}
// освободить память 
// сделать проверку в arrforlevel +
// разобратся с указателями если не передаем параметры в player
// при передаче параметров в ф-ии createarena(); createarenaforlevel(); параметры должны быть ==
// при перегрузке оператора присваивания в классе serveranswer не работает ф-ия transform
// краш программы в конце при передаче параметров в поля диструктора monsters delete(hp, damage, armour);
// доделать метод whowin 
// почему вызываются 3 деструктора



