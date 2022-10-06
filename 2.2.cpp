#include<iostream>
using namespace std;
void cari(int x, int n)
{
	static int i;
	if(n==0) 
	cout<<"Bilangan Tidak Ditemukan";
	
	else if(x==n)
	cout<<"Bilangan Ditemukan Setelah Perulangan Ke \n"<<i;
	
	else
	{
		i++;
		cari(x,n-1);
	}
}

int main(int argc, char *argv[])
{
	cari(1,9);
}

