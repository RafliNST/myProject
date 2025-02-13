#include <iostream>

using namespace std;

int faktorial(int nilai);

int main(int argc, char const *argv[])
{
    int masukan = 0;
    int nilai_faktorial = 0;

    cout << "Nilai faktorial: "; 
    cin >> masukan;

    nilai_faktorial = faktorial(masukan);
    cout << "Nilai Dari " << masukan << "! Adalah " << nilai_faktorial << endl;
    return 0;
}

int faktorial(int nilai)
{
    if (nilai == 0){
        return 1;
    }else{
        return nilai * faktorial(nilai-1);
    }
}