#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include "data.h"
#include "array1d.h"
#include "kelas.h"
#include "tampilData.h"
#include "tampilKtp.h"
//#include "class.h"
//#include "library/041.h"
//#include "library/array1d.h"
//#include "library/xcept.h"
//#include "library/045.h"
//#include "library/049.h"
//#include "library/MenuUtama.h"
//#include "library/dataPegawai.h"
//#include "library/TampilanKTP.h"
//#include "library/TampilanStruk.h"
//#include "library/ujicoba.h"
//#include"library/login.h"
using namespace std;

int main() 
{
  int pilihanmenu;
  rentalKendaraan x;


  cout<<"Masukkan Menu"<<endl;
  cout<<"1.Masukkan Data"<<endl;
  cout<<"2.Tampilkan Data"<<endl;
  cout<<"Pilihan : ";cin>>pilihanmenu;
  if (pilihanmenu==1)
  {
    x.tampildata();
  }
  else if (pilihanmenu==2)
  {
    x.tampilKtp();
    
    cout<<dataKTP[1].umur+dataKTP[2].umur;
    cout<<" Hasil Diskon Adalah : "<<0.5*dataKTP[1].umur; 

  }
  return 0;
}