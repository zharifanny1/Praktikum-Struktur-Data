void rentalKendaraan::tampildata() //ini buat input ke ktp.txt
{
  int usia;
  string nik,nama,alamat;
  string tinggi;
    
  KTP dataKTP;
  Array1D < KTP > X(3);

string namaFile = "ktp.txt";

	cout << "NIK    : "; cin >> nik;
	cout << "NAMA   : "; 
  	cin.ignore();
  	getline(cin,nama);
	cout << "Alamat : ";
	  getline(cin,alamat);
	cout << "Usia   : ";  cin >> usia;
	cout << "Tinggi : "; cin>>tinggi;

	ofstream tulis;
	tulis.open(namaFile, ios::app);
	tulis << nik << ";" << nama << ";" << alamat << ";" << usia << ";" << tinggi;
	tulis << endl;
	tulis.close();
}