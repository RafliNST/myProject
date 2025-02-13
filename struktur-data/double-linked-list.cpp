#include <iostream>
#include <iomanip>

using namespace std;

struct Waifu {
    std::string nama;
    std::string source;
    int umur;
    Waifu* prevWaifu;
    Waifu* nextWaifu;
};

Waifu* newWaifu(std::string nama, std::string source, int umur)
{
    Waifu* waifu = new Waifu;
    waifu->nama = nama;
    waifu->source = source;
    waifu->umur = umur;
    waifu->nextWaifu = waifu->prevWaifu = NULL;

    return waifu;
}

Waifu* insertWaifu(Waifu* root, std::string nama, std::string source, int umur)
{
    if (root == NULL)
        return newWaifu(nama, source, umur);

    if(umur < root->umur){
        root->prevWaifu = insertWaifu(root->prevWaifu, nama, source, umur);
    }else if(umur >= root->umur){
        root->nextWaifu = insertWaifu(root->nextWaifu, nama, source, umur);
    }
    return root;
}

void printAll(Waifu* root) {
    if (root == NULL)
        return;
    printAll(root->prevWaifu);
    std::cout << root->nama << std::setw(45) << root->source << std::setw(45) << root->umur << setw(45) << std::endl;
    printAll(root->nextWaifu);
}

int main(void)
{
    Waifu* root = NULL;
    root = insertWaifu(root, "Emilia", "Re; Zero Kara Hamimeru", 100);
    insertWaifu(root, "Shiina Mashiro", "Sakurasou no Pet na Kanojo", 17);
    insertWaifu(root, "Mikasa Ackerman", "Attack on Titan", 17);
    insertWaifu(root, "Violet Evergarden", "Violet Evergarden", 17);
    insertWaifu(root, "C.C", "Code Geass", 100);
    insertWaifu(root, "Vladilena Milize", "86", 21);
    insertWaifu(root, "Anastasia Nikolaevna Romanova", "Fate/Grand Order", 19);
    insertWaifu(root, "Marie Antoinette", "Fate/Grand Order", 21);
    insertWaifu(root, "Fuyutsuki-san", "Koori Zokusei to Cool na Douryou Joshi",27);


    Waifu* kepala = NULL;
    kepala = insertWaifu(kepala, "Gege Akutami", "Jujutsu Kaise", 21);
    insertWaifu(kepala, "Aka Akasaka", "86", 21);
    std::cout << setiosflags(ios::left) << std::setw(45);
    std::cout << setiosflags(ios::left) << std::setw(45);
    std::cout << setiosflags(ios::left) << std::setw(45) << std::endl;
    std::cout << "nama" << std::setw(45) << "source" << std::setw(45) << "umur" << setw(45) << std::endl;
    printAll(root);

    std::cout << setiosflags(ios::left) << std::setw(45);
    std::cout << setiosflags(ios::left) << std::setw(45);
    std::cout << setiosflags(ios::left) << std::setw(45) << std::endl;
    std::cout << "nama" << std::setw(45) << "source" << std::setw(45) << "umur" << setw(45) << std::endl;
    printAll(kepala);

    delete kepala;
    delete root;
}