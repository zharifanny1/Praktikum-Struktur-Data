#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;



int main()
{
  ifstream baca;
	string namaFile = "ktp.txt";
	string t;
	int idx = 0;
	baca.open(namaFile);
	while(!baca.eof()){
		baca >> t;
		tokenize(t, ";", idx);
		idx++;
	}
	baca.close();

	cout << "\n\n";
	cout << "Data Pegawai\n";  
	for (int i = 0; i < idx-1; ++i)
	{
		cout << "=======================================\n";
    cout << "Nama     : " << dataKTP[i].nama << endl;
    cout << "---------------------------------------\n";
		cout << "NIK      : " << dataKTP[i].NIK << endl;
    cout << "---------------------------------------\n";
		cout << "Alamat   : " << dataKTP[i].alamat << endl;
    cout << "---------------------------------------\n";
		cout << "Umur     : " << dataKTP[i].umur << endl;
		cout << "=======================================\n\n";
	}
}