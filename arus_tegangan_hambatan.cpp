#include <iostream>

using namespace std;

	

int main(){
	
//	cout<<"========== PROGRAM MENGHITUNG ARUS (I), TEGANGAN (V), DAN HAMBATAN (R) ==========";
//	cout<<endl;
	int pilihan;
	float v,r,i;
	
	pilihan :
		cout<<endl;
		cout<<endl;
		cout<<"========== DAFTAR PROGRAM =========="<<endl;
		cout<<endl;
		cout<<"1. Mengitung Arus (I)"<<endl;
		cout<<"2. Menghitung Tegangan (V)"<<endl;
		cout<<"3. Menghitung Hambatan (R)"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<endl;
		cout<<"===================================="<<endl;
		cout<<"Silahkan Pilih Program 1/2/3/4 : ";cin>>pilihan;
		cout<<"===================================="<<endl;
		system("cls");
	
	switch (pilihan) {
		case 1 :
			//Menghitung arus
			cout<<"======= MENGHITUNG ARUS (I) =======";
			cout<<endl;
			cout<<endl;
			
		    cout<<"Masukan Nilai Tegangan (V) :";cin>>v;
			cout<<endl;
		    cout<<"Masukan Nilai Hambatan (R) :";cin>>r;
			cout<<endl;
		    cout<<"==================================="<<endl;
		    cout<<"               RUMUS               "<<endl;
		    cout<<"==================================="<<endl;
		    i = v/r;
		    cout<<"     V"<<endl;
		    cout<<"I = ---"<<endl;
		    cout<<"     R";
		    cout<<endl;
		    cout<<endl;
		    cout<<"     "<< v <<endl;
		    cout<<"I = ---"<<endl;
		    cout<<"     "<< r;
			cout<<endl;
			cout<<endl;
		    cout<<"Nilai Arus Tersebut Adalah     = " << i << " A" << endl;
		    cout<<"===================================";
		    cout<<endl;
		    cout<<endl;
		goto pilihan;
		break;
		
		case 2 :
			//Menghitung tegangan
			cout<<"======= MENGHITUNG TEGANGAN (V) =======";
			cout<<endl;
			cout<<endl;
			cout << "Masukan Nilai Arus (I)    :";cin>>i;
			cout<<endl;
		    cout << "Masukan Nilai Hambatan (R):";cin>>r;
		    cout<<endl;
		    v = i*r;
		    cout << "V = I x R";
		    cout<<endl;
		    cout << "V = " << i << "x" << r << endl;
		    cout << "Nilai Tegangan Sebesar : " << v << " V" << endl;
		    cout << "=====================================";
		    cout<<endl;
		goto pilihan;
		break;
		
		case 3 :
	
			//Menghitung hambatan
			cout << "====== MENGHITUNG HAMBATAN (R) ======" << endl;
		    cout << "Masukan Nilai Tegangan = ";cin>>v;
		    cout<<endl;
		    cout << "Masukan Nilai Arus = ";cin>>i;
		    cout<<endl;
		    r = v/i;
		    cout << "Nilai Hambatannya adalah = " << r << " ohm" << endl;
		goto pilihan;
		break;
		case 4:
			cout<<"============ Selesai ============"<<endl;
		break;
		
		default :
			cout<<"===== Pilihan Tidak Tersedia ====="<<endl;
	}
	
}
	
