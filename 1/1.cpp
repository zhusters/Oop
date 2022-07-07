#include <iostream>

using namespace std;

class Player {
private:
	int HP;
	int Stamina;
	int MagicPower;
	int Chaknorosity = 0;

public:


	Player(int VlaueHP, int ValueStamina, int ValueMagicPower) {
		HP = VlaueHP;
		Stamina = ValueStamina;
		MagicPower = ValueMagicPower;
	} 


	int GetHP() {
		return HP;
	}
	void SetHP(int ValueHP) {
		HP = ValueHP;
	}


	int GetStamina() {
		return Stamina;
	}
	void SetStamina(int ValueStamina) {
		Stamina = ValueStamina;
	}


	int GetMagicPower() {
		return MagicPower;
	}
	void SetMagicPower(int ValueMagicPower) {
		MagicPower = ValueMagicPower;
	}

	int GetСhaknorosity() {
		if (HP == 0) {
			cout << "HP = 0 ((((" << HP;

		}
		if (Stamina == 0) {
			cout << "Stamina = 0 ((((" << Stamina;
		}
		if (MagicPower == 0) {
			cout << "MagicPower = 0 ((((" << MagicPower;
		}
		else {
			Chaknorosity = HP * MagicPower / Stamina + HP * Stamina / MagicPower - Stamina * MagicPower / HP;
			
			return 0;
		}
		cout << "Chaknorosity - " << Chaknorosity << endl;

	}

	void Print() {
		cout << "==\t==\t==\t==\t==\t" << endl;
		cout <<"HP - " <<HP<<endl;
		cout << "Stamina - " << Stamina << endl;
		cout << "MagicPower - " << MagicPower << endl;
		//cout << "Chaknorosity - " << Chaknorosity << endl;


	}

};






int main() {

	Player archer(250, 30, 75);
	archer.GetСhaknorosity();
	archer.Print();
	Player tank(100, 45,33);
	//tank.GetСhaknorosity();
	tank.Print();


}




{
"cmd": ["g++.exe", "-std=c++11", "-o", "$file_base_name", "$file", "&&", "start", "cmd", "/c", "$file_base_name & echo. & echo. & pause"],
"shell": true,
"selector": "source.c++"
}