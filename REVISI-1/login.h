void rentalKendaraan::login()

{
  cout<<"NIK = 123, nama = nandu "<<endl;
  ifstream baca;
	string namaFile = "ktp.txt";
	string t;
	int idx = 0;
	baca.open(namaFile);
	while(!baca.eof())
    {
		baca >> t;
		tokenize(t, ";", idx);
		idx++;
	}
    baca.close();
    
    cout << "======================= PROGRAM LOGIN ====================\n";
			cout << "|                                                        |\n";
			cout << "|                                                        |\n";
			cout << "|                 LOGIN SISTEM                           |\n";
			cout << "|                 Masukkan NIK  : ";
			cin >> NIK;
			cout << "|                 Masukkan Nama : ";
			cin.ignore();
			getline(cin, nama);
      cout << "|                                                        |\n";
			cout << "|                                                        |\n";
      cout << "==========================================================\n";

      for (int i = 0; i < 1; ++i)
	    {
			if (dataKTP[i].nama == nama && dataKTP[i].nik == nik)
			{
				cout<<"Benar";
			}
            
            else
            {
				cout<<"Salah";
			}
		}
}    