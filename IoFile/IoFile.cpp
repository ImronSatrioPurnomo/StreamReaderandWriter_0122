#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	ofstream outfile;
	outfile.open("Saepul.txt");
	cout << ">=Menulis file, \'q\ untuk keluar" << endl;
	while (true)
	{
		cout << "- ";
		getline(cin, baris);
		if (baris == "q") break;
		outfile << baris << endl;
	}

	outfile.close();

	ifstream infile;

	infile.open("Saepul.txt");

	cout << endl << ">= membuka dan mambaca file" << endl;

	if (infile.is_open()) {
		while (getline(infile, baris)) {
			cout << baris << '\n';
		}
	}
	else cout << "Unable to open file";
	return 0;
}