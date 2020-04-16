#include <iostream>
#include <string.h>
using namespace std;

int main () {
	char kalimat1 [100];
	char kalimat2 [100];
	
	cout<<"Masukkan Kalimat :";
	gets (kalimat1);
	
	cout<<"Masukkan Kalimat pengganti :";
	gets (kalimat2);
	
	strcpy (kalimat1,kalimat2);
	cout<<"kalimat setelah di ganti adalah :"<<kalimat1;
	return 0;
}
	
	
