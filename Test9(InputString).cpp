#include <iostream>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;
int main()
{
    char nama[30];
    cout<<"Masukkan Nama: ";
    cin>>nama;

    //using ctype.h TOUPPER
    for(int i = 0, n = strlen(nama); i<n;i++){
        if(islower(nama[i])){
            printf("%c", toupper(nama[i]));
        }
        else{
            printf("%c", nama[i]);
        }
    }cout<<endl;

    //using ctype.h TOUPPER simplified
    for(int i = 0, n = strlen(nama); i<n;i++){
        printf("%c", toupper(nama[i]));
    }cout<<endl;

    //using Binary
    for(int i = 0, n = strlen(nama); i<n;i++){
        if(nama[i] >= 'a' && nama[i] <= 'z'){
            printf("%c", nama[i]-32);
        }
        else{
            printf("%c", nama[i]);
        }
    }cout<<endl;
}
