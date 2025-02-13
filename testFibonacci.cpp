#include <iostream>

using namespace std;

int fibonacci(int nilaiFibonacci)
{
    if((nilaiFibonacci == 0) || (nilaiFibonacci == 1)){
        return nilaiFibonacci;
    }
    else{
        // cout<<"Hehe"<<endl;
        return fibonacci(nilaiFibonacci-1) + fibonacci(nilaiFibonacci-2K);
    }
}

int main(void)
{
    int masukan = 0;
    cout<<"Masukkan Nilai FIbonacci : ";cin>> masukan;
    cout<<"Nilai Dari Fibonacci ke-"<<masukan<<" Adalah "<<fibonacci(masukan)<<endl;
}