#include <iostream>
#include <string.h>
using namespace std;
int main (){
	char kalimat [100];
	int  jumlah_kata;
	
	cout<<"Masukkan kalimat :";
	cin.getline (kalimat,sizeof(kalimat));
	
	jumlah_kata = 0;
	for(int x= 0; kalimat [x] ; x++);
	jumlah_kata ++;
	
	cout<<cin.gcount()-1;
}
	
	
