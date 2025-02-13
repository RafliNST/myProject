#include <iostream>

using namespace std;

void funcPointer(int &b){
    b= b*3;
    cout<<" Nilai B setelah diganti: "<<b<<endl;
    cout<<"Alamat B: "<<&b<<endl<<endl;
}

void pangkat(int &nPangkat){
    nPangkat= nPangkat * nPangkat;
    cout<<nPangkat<<endl;
}

int main(void){
    int a= 7;
    cout<<" Nilai A: "<<a<<endl;
    cout<<"Alamat A: "<<&a<<endl<<endl;

    funcPointer(a);
    cout<<"Nilai A setelah dipangkatkan: ";pangkat(a); cout<<endl;
}
