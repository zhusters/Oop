#include <iostream>


using namespace std;


class player {
private:
	int* hp;
	int* stamina;
	int* power;
	int price ;
	

public:
	player() {
		hp = 0;
		stamina = 0;
		power = 0;
		
	}

	player(int hp, int stamina, int valuepower) {
		this->hp = new int(hp);
		this->stamina = new int( stamina);
		this->power = new int( valuepower);
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
		return* power;
	}
	void setpower(int valuepower) {
		*power = valuepower;
	}

	int getprice() {
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

	}

	void print() {
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "жизни - " << *hp << endl;
		cout << "выносливость - " << *stamina << endl;
		cout << "сила - " << *power << endl;
		cout << "стоимость - " << price << endl;


	}

};


class inventory {
private:
	int* size;
	int length = 0;
	int id = 0;
	int weight;
	char name;

public:
	inventory() {
		size = 0;

	}
	inventory(int valuesize){
		size = new int[valuesize];
		length = valuesize;
		for (int i = 0; i < length; i++)
		{
			size[i] = rand()%2000;
		}
	}
	~inventory() {
		delete[]size;
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

		cout << "(диструктор)" << endl;

	}












	int printarr() {
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "инвентарь - ";

		for (int i = 0; i < length; i++)
		{
			cout << size[i] << ' ';
		}
		cout << endl;
		return 0;
	}
	







	int run() {
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "числа не делящиеся на два - ";
		for (int i = 0; i < length; i++)
		{
			if (size[i] % 2) {
				cout << size[i] << ' ';
			}
		}
		cout << endl;
		return 0;

	}


};


class arena {

private:
	int length;
	int** arr;
public:

	void createarena(int valuelength) {
		length = valuelength;
		arr = new int* [length];
		for (int i = 0; i < length; i++)
		{
			arr[i] = new int[length];
		}
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;

		for (int i = 0; i < length; i++)
		{
			for (int j = 0; j < length; j++)
			{
			
				arr[i][j] = rand()%1500-500;
				cout << arr[i][j] << '\t';
			}cout << endl;
		}
		/*for (int i = 0; i < length; i++)
		{
			for (int j = 0; j < length; j++)
			{
				delete[]arr[i];
			}
			delete[]arr;
		}*/
	}

	

	


	friend void runarena(arena& value);
};




void runarena(arena &value) {
	int countmy =0, counthe=0;
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < value.length; i++)
	{
		for (int j = 0; j < value.length; j++)
		{
			if (i<j && value.arr[i][j] > 0 ) {
				countmy++;
			}
			if (i>j && value.arr[i][j] > 0) {
				counthe++;
			}
		}
	}
	cout << "мои воины - " << countmy<<endl;
	cout << "вражеские воины - " << counthe << endl;



}












int main() {
	setlocale(LC_ALL, "Russian");
	/////////////////////////////////////
	player archer;
	//archer.print();
	player tank(100, 23, 33);
	tank.getprice();
	tank.print();
	/////////////////////////////////////
	inventory arr(20);
	arr.printarr();
	arr.run();
	/////////////////////
	arena army;
	army.createarena(8);
	runarena(army); 
}