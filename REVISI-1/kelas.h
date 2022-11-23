using namespace std;
struct Node {
  struct alamat {
  string alamat;} rumah;

  struct ktp {
  string nama,no_telepon;} data;

    Node* next;
};
class rentalKendaraan 
{
public :

rentalKendaraan()
{
      head = NULL;
    }
  void push_back(string nama, string alamat, string no_telepon);
  void PrintList();
  void DataStruk();
  void tampildata();
  void tampilKtp();
  void login2();
  void tampilkanData();
  void inputoutput();
  void DataPegawai();
  void bonus();
  void discount();
  void Struk();
  void MenuUtama();
  void SimpanDataLinklist();
  void ujicoba();
  void login();
  void full(string notlp, string nm, string alm)
  {
    no_telepon = notlp;
    nama = nm;
    alamat = alm; 
  }
  int pilih, harga, jumlah,diskon,hasil,harga_total;
  string no_telepon;
  string nama;
  string alamat;
  string NIK;
  string tinggi;
  int umur;

  private:
     Node* head;
    //hapus atas
    int saldo,cashback;
    int usia;
    string nik;
    string struk;
    string temp_menu;
    //string menu[10] =
//{
  //                     "Paket A : (Nasi, Ayam, Sambal, Lalapan)",
    //                   "Paket B : (Nasi, Lele, Sambal, Lalapan)",
      //                 "Paket C : (Nasi, Semur Daging, Sambal, Lalapan)",
        //               "Paket D : (Nasi, Gudeg, Kerupuk, Sambal)"};
      
};
 rentalKendaraan dataKTP[5];
int toInt(string x){
	int y;

	stringstream ss;
	ss << x;
	ss >> y;

	return y;
}

int hitung(int a, int b) {
  if (b == 0)
    return 1;
  else if (b == 1)
    return a;
  else
    return a + hitung(a, b - 1);
}

void tokenize(string s, string del = " ", int idx =0)
{
	string tmp;
	int i = 1;
    int start, end = -1*del.size();
    do {
        start = end + del.size();
        end = s.find(del, start);
        tmp = s.substr(start, end - start);

        if (i == 1)
        {
        	dataKTP[idx].NIK = tmp;
        }
        else if (i == 2){
        	dataKTP[idx].nama = tmp;
        }
        else if (i == 3){
        	dataKTP[idx].alamat = tmp;
        }
        else if (i ==4){
        	dataKTP[idx].umur = toInt(tmp);
        }
        else{
          dataKTP[idx].tinggi = tmp;
        }
        i++;

    } while (end != -1);
}

void rentalKendaraan::push_back(string nama, string alamat, string no_telepon){
      Node* newNode = new Node();
      newNode->data.nama = nama;
      newNode->data.no_telepon = no_telepon;
      newNode->rumah.alamat = alamat;
      newNode->next = NULL; 
      if(head == NULL) {
        head = newNode;
      } else {
        Node* temp = head;
        while(temp->next != NULL)
          temp = temp->next;
          temp->next = newNode;
      }  
    }
void rentalKendaraan::PrintList() {
        ofstream tulis;
        tulis.open("data-ktp.txt",ios::app);
      Node* temp = head;
      if(temp != NULL) {
        cout<<"The list contains: "<<endl;;
        while(temp != NULL) {
          cout<<"Nama         : ";
          cout<<temp->data.nama<<endl;
          cout<<"Alamat       : ";
          cout<<temp->rumah.alamat<<endl;
          cout<<"No Telepon   : ";
          cout<<temp->data.no_telepon<<endl;
          cout<<"----------------------"<<endl;
          tulis<<temp->data.nama<<endl;
          tulis<<temp->rumah.alamat<<endl;
          tulis<<temp->data.no_telepon<<endl;
          temp = temp->next;
        }
        cout<<endl;
        tulis.close();
      } else {
        cout<<"The list is empty.\n";
      }
    }   