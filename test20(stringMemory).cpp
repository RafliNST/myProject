#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const * argv[])
{
    char* nama = new char;
    cout<<"Masukkan Nama: "; cin.getline(nama, 50);

    for(int i = 0, n = strlen(nama); i < n; i++){
        cout<<"Alamat Dari "<<nama[i]<<" Adalah "<<static_cast<void *>(&nama[i])<< "("<<(int)nama[i]<<")"<<endl;
    }

    delete nama;
}