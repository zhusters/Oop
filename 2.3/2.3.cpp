#include <iostream>
#include <string> 
#include <algorithm>


using namespace std;


class salary {
private:
	int *x, *y, *z;
	int res, max, min;

public:
	salary() {
	}
	salary(int a, int b, int c) {
		this->x = new int(a);
		this->y = new int(b);
		this->z = new int(c);
	
	}


	~salary() {
		delete (x, y, z);
	}


	void calc();
	
};
void salary::calc() {
	max = ((*x) > (*y) ? (*x) : (*y));
	max = (max > (*z) ? max : (*z));
	cout << "max - "<<max<<endl;
	res = max - (*x); cout << "РАЗНИЦА x - "<<res <<endl;
	res = max - (*y); cout << "РАЗНИЦА  y - " << res << endl;
	res = max - (*z); cout << "РАЗНИЦА  z - " << res << endl;
}

int main() {

	salary a(100,500,1000);
	a.calc();
}