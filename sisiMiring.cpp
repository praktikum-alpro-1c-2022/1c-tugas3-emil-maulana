#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//	Deklarasikan variabel
	double sisiAlas = 8;
	double sisiTinggi = 10;
	float sisiMiring;
	
	//Rumus
	sisiMiring = (sisiAlas*sisiAlas)+(sisiTinggi*sisiTinggi);
	sisiMiring = sqrt(sisiMiring);
	
	//Output
	cout<<"Panjang sisi alas : "<<sisiAlas<<" cm"<<endl;
	cout<<"Panjang sisi tinggi : "<<sisiTinggi<<" cm"<<endl;
	cout<<"Jadi sisi miring segitiga adalah : "<<sisiMiring<<" cm"<<endl;
	
	return 0;
	
}
