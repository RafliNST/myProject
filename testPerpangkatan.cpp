#include <iostream>

using namespace std;

int perpangkatan(int bilanganPokok, int nilaiPangkat){
    if (nilaiPangkat <= 1){
        return bilanganPokok;
    }
    else{
        return bilanganPokok * perpangkatan(bilanganPokok, (nilaiPangkat-1));
    }
}

int main(void){
    int bilanganAsal, nilaiPangkat = 0;

    cout<<"Masukkan Bilangan Asal : "; cin>>bilanganAsal;
    cout<<"Masukkan Nilai Pangkat : "; cin>>nilaiPangkat;
    cout<<"Bilangan Setelah Dipangkatkan : "<<perpangkatan(bilanganAsal, nilaiPangkat);
}