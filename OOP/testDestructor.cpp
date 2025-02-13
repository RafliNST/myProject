#include <iostream>
#include <string.h>

using namespace std;

class Anime{
    public:
        const char* judul;
        const char* MC;
        int tahunRilis;
        int episode;

        // constructor = dipanggil ketika pertama objek dideklarasi
        Anime(const char* inpJudul, const char* inputMC, int inpRilis, int inpEpisode){
            judul = inpJudul;
            MC = inputMC;
            tahunRilis = inpRilis;
            episode = inpEpisode;

            cout << "Objek" << judul << " Telah Dibuat\n" << endl;
        }

        // destructor = dipanggil saat objek dihapus
        ~Anime(){
            cout << "Objek " << judul << " Telah Dihapus" << endl;
        }
};

int main(int argc, char const *argv[])
{    
    Anime JSHK("Jibaku Shounen Hanako-kun", "Yugi Amane", 2020, 13);
    // deklarasi di Stack       

    Anime* Sakurasou = new Anime("Sakurasou No Pet Na Kanojo", "Kanda Sorata", 2012, 24);
    // deklarasi di Heap
    delete Sakurasou;
    // ketika membuat objek di Heap, objek harus di-delete agar tidak terjadi Memory Leak

    
    return 0;
}