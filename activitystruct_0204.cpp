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
}
