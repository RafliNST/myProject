#include <iostream>
#include <iomanip>
#define u_int int unsigned

using namespace std;

struct Waifu{
    const char* nama;
    const char* source;
    u_int umur;
    Waifu* nextWaifu;
};

Waifu* createWaifu(const char* nama, const char* source, u_int umur) 
{
    Waifu* waifu = new Waifu;
    waifu->nama = nama;
    waifu->source = source;
    waifu->umur = umur;
    waifu->nextWaifu = NULL;

    return waifu;
}

Waifu* newWaifu(Waifu* root, const char* nama, const char* source, u_int umur) 
{
    if(root == NULL) return createWaifu(nama, source, umur);

    root->nextWaifu = newWaifu(root->nextWaifu, nama, source, umur);
    return root;
}

void printWaifu(Waifu* root) 
{
    if(root == NULL) return;

   printWaifu(root->nextWaifu);
    std::cout << root->nama << std::setw(45) << root->source << std::setw(45) << root->umur << setw(45) << std::endl;
}

int main(int argc, char** argv) 
{
    Waifu* root = NULL;
    root = createWaifu("Chinatsu Kano", "Ao no Hako", 16);
    newWaifu(root, "Shiina Mashiro", "Sakurasou no Pet na Kanojo", 17);
    newWaifu(root, "Fuyutsuki-san", "Koori Zokusei to Cool na Douryou Joshi", 27);
    newWaifu(root, "Mikasa Ackerman", "Shingeki no Kyoujin", 19);
    newWaifu(root, "Touka Kirishima", "Tokyo Ghoul", 27);
    newWaifu(root, "Nanakura Rin", "Pseudo Harem", 15);

     std::cout << setiosflags(ios::left) << std::setw(45);
    std::cout << setiosflags(ios::left) << std::setw(45);
    std::cout << setiosflags(ios::left) << std::setw(45) << std::endl;
    std::cout << "nama" << std::setw(45) << "source" << std::setw(45) << "umur" << setw(45) << std::endl;

    printWaifu(root);
    delete root;
}
