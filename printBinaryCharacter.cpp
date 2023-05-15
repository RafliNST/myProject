#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    char nama[75];
    do{
        cout << "\tMasukkan Kalimat Untuk Ditranslasi: ";
        cin.getline(nama, 75);

        for(int i = 0, length = strlen(nama); i < length; i++){
            char binary[] = "\t00000000";
            int binary_len = strlen(binary)-1;
            int bin = (int)nama[i];


            while (bin > 0){
                binary[binary_len] = (bin%2 == 0)? '0' : '1';
                
                bin = bin/2;
                binary_len--;
            }
            
            cout << setiosflags(ios::left) << setw(5);
            cout << "\t" << nama[i] <<" : "<< setw(5) << setiosflags(ios::left);
            cout << (int)nama[i] << " -> " << setw(2) << binary << endl;
        }
    } while(strcmp( nama, "") != 0);
    return 0;
}
