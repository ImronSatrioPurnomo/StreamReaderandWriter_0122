#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File: ";
	cin >> NamaFile;

	ofstream outfile;
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis File, \'q\' untuk keluar" << endl;

	while (true) {
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}
	outfile.close();

	ifstream infile;

	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= membuka dan mambaca file" << endl;

	if (infile.is_open()) {
		while (getline(infile, baris)) {
			cout << baris << '\n';
		}
	}
}