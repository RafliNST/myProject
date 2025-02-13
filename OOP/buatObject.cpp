#include <iostream>

using namespace std;

class Waifu{
    public:
        const char* nama;
        const char* alamat;
        int umur;
        bool taken;

        // constructor
        Waifu(const char* nama, const char* alamat, int umur, bool taken){
            Waifu::nama = nama;
            Waifu::alamat = alamat;
            this->umur = umur;
            this->taken = taken;            
        }

        string getNama(){
            return nama;
        }
        int getUmur(){
            return umur;
        }
        string getAlamat(){
            return alamat;
        }

        void printData(){
            cout<<"Namanya "<<getNama()<<endl;
            cout<<"Umurnya "<<getUmur()<<endl;
            cout<<"Alamatnya "<<getAlamat()<<endl;
        } 

};

int main(int argc, char const *argv[])
{
    Waifu Shiina("Shiina Mashiro", "Sakurasou No Pet Na Kanojo", 17, true);
    Waifu Mikasa("Mikasa Ackerman", "Shingeki No Kyoujin", 27, true);
    Waifu CC("C.C", "Code Geass: Hangyaku No Lelouch", 500, true);

    Shiina.printData();
    cout << "Namanya "<<Mikasa.getNama()<<endl;

    cin.get();

    return 0;
}
