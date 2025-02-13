#include <iostream>

using namespace std;

void tukar(int *a, int *b){
    int wadah= *a;
    *a= *b;
    *b= wadah;
}
/*awalnya variabel TUKAR memiliki nilai yaitu POINTER A*/
/*lalu POINTER A memiliki nilai yaitu POINTER B*/
/*POINTER B pun memilii nilai VARIABEL TUKAR*/

int main(void){
    int pertama= 2;
    int kedua= 4;
    cout<<"NIlai pertama: "<<pertama<<" Nilai kedua: "<<kedua<<endl;
    tukar(&pertama, &kedua);
    cout<<"NIlai pertama: "<<pertama<<" Nilai kedua: "<<kedua<<endl;
}
