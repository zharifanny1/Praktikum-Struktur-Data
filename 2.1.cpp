#include<iostream>
using namespace std;
void Tampil(int n)
{
	static int i=0;
	if(n<=0) return;
	cout<<"Pemanggilan Ke : "<<++i<<endl;
	Tampil(n-1);
}

int main(int argc, char *argv[])
{
	int n=3;
	Tampil(n);
}
