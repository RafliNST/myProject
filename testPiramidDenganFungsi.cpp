#include <iostream>

using namespace std;

void piramid(int nilai)
{
    if(nilai==0){
        return;
    }

    piramid(nilai-1);
    for(int i=0; i<nilai; i++){
        cout<<"#";
    }
    cout<<endl;
}

int main(void){
    int masukan = 0;
    cout<<"Masukkan tinggi piramid: "; cin>>masukan;

    piramid(masukan);
}
