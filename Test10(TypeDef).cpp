#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

using namespace std;

typedef struct
{
    string buah;
    int harga;
}NamaHarga;

int main(void)
{
    int jumlah=0;
    NamaHarga barang[5];

        barang[0].buah="Apel";
        barang[0].harga=200;

        barang[1].buah="Jeruk";
        barang[1].harga=300;

        barang[2].buah="Jambu";
        barang[2].harga=450;

        barang[2].buah="Semangka";
        barang[2].harga=750;

    for(int i=0;i<3;i++){
        cout<<barang[i].buah<<ends;
        cout<<barang[i].harga<<endl;
        jumlah+=barang[i].harga;
    }cout<<jumlah<<endl;
}
