#include <iostream>
#include <exception>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		cout << "Pertanyaan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		cout << "default Pengecualian diexekusi" << endl;
	}
}