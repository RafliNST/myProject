#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

class Waifu{
    public:
        const char* nama;
        const char* sumber;
        int tahunRilis;

        Waifu(const char* inputNama, const char* inputSumber, int inputRilis){
            Waifu::nama = inputNama;
            Waifu::sumber = inputSumber;
            Waifu::tahunRilis = inputRilis;
        }

        void printData(){
            cout<<"Namanya "<< nama << endl;
            cout<<"Dari anime "<< sumber << endl;
            cout<<"Tahun rilisnya "<< tahunRilis << endl;
        }
};


int main(int argc, char const  *argv[])
{
    int i = 1;

    Waifu Mikasa("Mikasa Ackerman", "Attack On Titan", 2013);
    Waifu Mashiron("Shiina Mashiro", "Sakurasou No Pet Na Kanojo", 2011);
    Waifu CC("C.C", "Code Geass", 2006);

    Mikasa.printData();
    Mashiron.printData();
    CC.printData();
    cout << argc << endl;
    
    while (strcmp(argv[i], "\0") != 0){
        cout << argv[i] << endl;
        i++;
    }


    return 0;
}
