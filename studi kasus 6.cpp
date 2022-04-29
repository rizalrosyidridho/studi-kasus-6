#include <iostream>
using namespace std;

int nilai[5];
int jml_nilai = 0;
int rata_rata = 0;
int nilai_max = 0;
int nilai_min =100;
int i;
string nama,matkul;

class dosen{
public:
  string nama;
  string matkul;
};
int main()
{
cout <<"========================================" << endl; cout<<"Nama Dosen :";
getline(cin,nama);
cout<<"Mata Kuliah:";
getline(cin,matkul);
cout <<"========================================"<< endl;
cout <<"Masukkan nilai mahasiswa : "<<endl;
for (int index=0;index<5;index++)
{
cout << "Nilai Mahasiswa ke –  "<< index+1 << ": ";
cin >> nilai[index];
jml_nilai = jml_nilai + nilai[index];
if (nilai_max < nilai[index])
{
nilai_max = nilai[index];
}
else if (nilai_min > nilai[index])
{
nilai_min = nilai[index];
}
}
cout <<"==========================================" << endl;
cout << "Jumlah nilai mahasiswa \t\t"<<"= "<<jml_nilai << endl;
rata_rata = jml_nilai/5;
cout << "Rata-rata nilai mahsiswa \t"<<"= " <<rata_rata << endl;
cout << "Nilai Maximum mahasiswa \t"<<"=" <<nilai_max << endl;
cout << "Nilai Minimum mahasiswa \t"<<"= " <<nilai_min << endl;
cout <<"==========================================" << endl;
}
