#include <iostream>
#include <stdlib.h>

using namespace std;

int i=0;

void cetakArray(char **namaBarang)
{
    while(*namaBarang[i] != NULL){
        cout<<namaBarang[i]<<" ";

        if(i%2 != 0){
            cout<<endl;
        }
        i++;
    }
}

int main(void)
{
    char *namaBenda[5]= {
        "Apel", "Durian", "Anggur"
    };

    cetakArray(*&namaBenda);
}
