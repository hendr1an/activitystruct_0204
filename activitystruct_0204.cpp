#include <iostream>

using namespace std;

struct DetailAlamat{
    string desa;
    string kota;
};

struct  Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main(){
    Mahasiswa mhs [3];
    for (int i=0;i<3;i++){
        cout << "Nomor Mahasiswa : ";
        getline(cin , mhs.nim);
        cout <<"Nama Mahasiswa : ";
        getline(cin,mhs.nama);

        cout << "Alamat Mahasiswa : "<<endl;
        cout << "\t Nama Desa : ";
        cin >> mhs.alamat.desa;
        cout << "\t Nama Kota : ";
        cin >> mhs[i].alamat.kota;
        cout << "Umur Mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1,'\n');
}
        