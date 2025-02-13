#include <stdio.h>
#include <iostream>

using namespace std;

int pemfaktoran(int bilanganPokok){
    if(bilanganPokok <= 1){
        return bilanganPokok;
    }

    else{
        return bilanganPokok * pemfaktoran(bilanganPokok-1);
    }
}

int main(void){
    int masukanInt = 0;

    cout<<"Masukan Bilangan : "; cin>> masukanInt;
    cout<<"Hasil Setelah Difaktorkan : "<<pemfaktoran(masukanInt);
}