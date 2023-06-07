#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x;											 //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() {											 //constructor
		x = 0;
	}
	virtual void input() {}								// fungsi yang menerima input dan mengirim input melalui
															//fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; }			 //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; }			 //fungsi untuk menghitung keliling
	void setX(int a) {									 //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() {										//fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar { 
public:
	lingkaran(int a) :
		bidangDatar(a)
	{
		cout << "lingkaran dibuat\n" << endl;
	}
};
class Bujursangkar :public bidangDatar {
public:
	Bujursangkar(int a) :
		bidangDatar(a)
	{
		cout << "Bujursangkar dibuat\n" << endl;
	}

};
int main() { 
	lingkarana a(6)
}

