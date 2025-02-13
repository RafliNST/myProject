#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    //tipe data
    char buah;
    int JBeli;
    int pembayaran;
    int kembalian;

    //perintah
    do{
            //perintah beli buah
            for(int JBeli=0;;){
                //membeli buah nanas
                for(char buah;;){
                    cout<<"Apakah Anda Ingin Membeli Nanas?(y/n)";cin>>buah;
                    //jika y
                    if (buah == 'Y'|| buah == 'y'){
                        cout<<"Buah Ditambahkan Ke Keranjang\n";
                        JBeli= JBeli + 1500;
                    }
                    //jika n
                    else{
                        cout<<"Silahkan Pilih Buah Yang lain\n";
                    }
                    break;
                }
                //membeli buah pisang
                for(char buah;;){
                    cout<<"Apakah Anda Ingin Membeli Pisang?(y/n)";cin>>buah;
                    //jika y
                    if(buah == 'y' || buah == 'Y'){
                        cout<<"Buah Ditambahkan Ke Keranjang\n";
                        JBeli= JBeli + 1000;
                    }
                    //jika n
                    else{
                        cout<<"Silahkan Pilih Buah Yang Lain\n";
                    }
                    break;
                }
                printf("Jumlah yang Harus Dibayar Adalah %i!\n", JBeli);
                //sistem pembayaran
                do{

                   cout<<"Tolong Masukkan Nominal Pembayaran: ";cin>>pembayaran;
                   if(pembayaran<JBeli){
                    cout<<"Uang Anda Tidak Cukup!\n";
                   }
                   else{
                    continue;
                   }
                }while(pembayaran<JBeli);
                kembalian = pembayaran-JBeli;
                break;
            }

            printf("Kembalian Anda: %i\n", kembalian);
            cout<<"Terimakasih Telah Berbelanja!\n";

    }while(JBeli>0);
}
