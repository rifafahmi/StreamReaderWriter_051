#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string Baris;

	ofstream outfile;

	outfile.open("Fileexample.txt");

	cout << ">=Writing file, \'q' for exit" << endl;

	while (true) {
		cout << "+";

		getline(cin, Baris);

		if (Baris == "q") break;


		outfile << Baris << endl;

	}
	outfile.close();

	ifstream infile;

	infile.open("contohfile.txt");

	cout << endl << ">Membuka dan Membaca File" << endl;


	if (infile.is_open()) {
		while (getline(infile, Baris)) {
			cout << Baris << '\n';
		}
		infile.close();

	}
	else cout << "unable to open file ";
	return 0;
}
