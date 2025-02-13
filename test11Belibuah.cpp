#include<iostream>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<windows.h>

using namespace std;

int main(void)
{
    system("cls");

    char buah[][20]={
        "Apel", "Anggur", "Pisang", "Jeruk", "Durian", "Semangka", "Nanas", "Jambu",
        "Kelengkeng", "Duku", "Kedondong", "Salak", "Durian Belanda", "Markisa"
    };
    char beli[15]; /*Besar ukuran BUAH dan BELI harus sama agar tidak error*/
    int i, jumlahbeli = 0, pembayaran = 0, kembalian = 0;
    int harga[15]={
        85, 175, 75, 100, 250, 135, 80, 70, 55, 105, 80, 75, 115, 65
    };

    /*Keluaran nama-nama buah*/
    cout<<" Selamat Datang Di Toko Buah! \n Silahkan Pilih Buah Yang Anda Suka\n";
    cout<<setiosflags(ios::left)<<setw(15)<<endl;
    i = 0;

    while(strcmp(buah[i], "") != 0){
        cout<<ends<<buah[i]<<": "<<setw(15)<<setiosflags(ios::left)<<harga[i]<<setw(15);
        if(i%2 != 0){
            cout<<endl;
        }       i++;
    }cout<<endl;

    cout<<"\nKetik Bayar/bayar untuk pembayaran!\n";
    cout<<"--------------------------------------------\n";

    /*program keluaran dan masukan*/
    while(true){ //i= 15, kalau i >=0, tambah 1
            int penampung = i;        
        cout<<"Ingin Beli Buah Apa? "; cin.getline(beli, 15);

        if(strcmp(beli, "Bayar") == 0 || strcmp(beli, "bayar") == 0){
            break;
        }
        else{
            while(strcmp(buah[i], beli) != 0){
                    i--;
                //selagi pembanding buah[i] dan beli lebih besar-kecil kurangi satu
                if(strcmp(beli, buah[i]) != 0 && i < 0){
                    printf("Buah %s Tidak Ada Atau Penulisan Salah\n", beli);
                    break;
                    //kalau i<0 atau pembanding beli dan buah[i] lebih besar-kecil keluaran
                }                
            }

            if(i >= 0 && strcmp(buah[i], beli) == 0){
                printf("%s Ditambahkan\n", beli);
                jumlahbeli+=harga[i];
            }                            
        }       i = penampung;
    }cout<<"---------------------------\n";

    /*untuk pembayaran*/
    while(pembayaran<jumlahbeli){
        printf("Jumlah Yang Harus Anda Bayar Adalah: %i\n", jumlahbeli);
        printf("Tolong Masukkan Jumlah Uang: "); cin>>pembayaran;
        if(pembayaran<jumlahbeli){
            cout<<"Uang Anda Tidak Cukup!\n";
        }
        else{
            break;
        }
    }
            cout<<"Terimakasih Telah Berbelanja! Silahkan Datang Lagi\n";
    kembalian=pembayaran-jumlahbeli;
    printf("Kembalian Anda: %i", kembalian);
}
