void rentalKendaraan::tampilKtp() //ini buat nampilin dari ktp.txt
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
		cout << "=======================================\n";
	    cout << "Tinggi   : " << dataKTP[i].tinggi <<endl;
   		cout << "=======================================\n\n";
    
	}
}