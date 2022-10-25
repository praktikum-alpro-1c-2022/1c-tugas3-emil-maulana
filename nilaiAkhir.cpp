#include <iostream>

using namespace std;

int main(){
    // Deklarasikan variabel
    double nilai_praktikum = 75, nilai_uts = 70, nilai_uas = 88;
    float total, total2;

    // Output
    cout << "Nilai Praktikum : " << nilai_praktikum << endl;
    cout << "Nilai UTS : " << nilai_uts << endl;
    cout << "Nilai UAS : " << nilai_uas << endl;

    // Rumus nilai akhir
    total = (0.2 * nilai_praktikum) + (0.3 * nilai_uts) + (0.5 * nilai_uas);

    // Hasil akhir
    cout << "Nilai akhir mahasiswa adalah: " << total << endl;

  return 0;    
}
