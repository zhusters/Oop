#include<iostream>

using namespace std;

template<typename T>

class Array {
private:
	T arrlength;
	T *size;
public:
	Array() {
	}
	Array(T arrlength) {
		this->arrlength = arrlength;
		size = new T[arrlength];
		cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << "arr - ";

		for (int i = 0; i < arrlength; i++)
		{

			size[i] = rand() % 100;	
			cout << size[i] << ' ';
			

		}
		cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;

	}
	~Array() {
		delete[]size;
		cout << "destruct - " << this << endl;
	}
	T findAverage() {
		T sum = 0, res, count = 0;
		for (int i = 0; i < arrlength; i++)
		{
			for (int j = 0; j < arrlength; j++)
			{
				if (size[i] > size[j]) {
					swap(size[i], size[j]);
				}
			}
		}
		cout << "sort mass - ";
		for (int i = 0; i < arrlength; i++)
		{
			sum += size[i];
			count++;
			cout << size[i] << ' ';

		}
		cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;

		res = sum / count;
		cout<<endl << "res - " << res << endl;
		return 0;

	}


};

int main() {
	
	Array<int> a(45);

	a.findAverage();
}