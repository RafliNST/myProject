#include<iostream>
using namespace std;
int main()
{
    int Nomor;
    cout<<"Masukkan Nomor: ";cin>>Nomor;
    if(Nomor>0){
        cout<<"Angka yg anda masukkan bernilai positif: "<<Nomor<<endl;
    }
    else if(Nomor<0){
        cout<< "Angka yg anda masukkan bernilai negatif: "<<Nomor<<endl;
    }
    else{
        cout<< "Angka yg anda masukkan "<<Nomor<<endl;
    }

}
