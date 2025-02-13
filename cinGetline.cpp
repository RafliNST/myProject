#include <string.h>
#include <iostream>

using namespace std;

void pencariNama(const char **namaBarang, const char *kirimNama)
{
    if(strcmp(namaBarang[0], kirimNama) == 0){
        cout<<"Sama 1"<<endl;
    }
    else if(strcmp(namaBarang[1], kirimNama) == 0){
        cout<<"Sama 2"<<endl;
    }
    else{
        cout<<"Beda"<<endl;
    }
}

int main(void){
    const char *namaBarang[55] = {"Shiina", "C.C"};
    char kirimnama[15];
    cout<<"Masukkan Nama: "; cin.getline(kirimnama, 25);
        pencariNama(namaBarang, kirimnama);
}

