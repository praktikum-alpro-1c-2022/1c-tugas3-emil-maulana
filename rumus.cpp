#include <iostream>

using namespace std;

int main(){
	
    // Deklarasikan variabel
    float b = 25, x = 15, c = 20;
    float Y;

    // print
    cout<<"========== DIKETAHUI =========="<<endl;
    cout << "Nilai b: " << b << endl;
    cout << "Nilai x: " << x << endl;
    cout << "Nilai c: " << c << endl;
    cout<<"==============================="<<endl;
	cout<<endl;
    // rumus
    Y = (b*x*x) + 0.5 * x - c;
	
	cout<<"============ RUMUS ============"<<endl;
	cout<<"Y = bx2 + 0,5x - c"<<endl;
	cout<<"==============================="<<endl;
    // hasil akhir
    cout << "Hasil Perhitungan dari Rumus : " << Y << endl;

  return 0;    
}
