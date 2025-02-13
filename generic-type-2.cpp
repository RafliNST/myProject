#include <iostream>

using namespace std;

template<typename N, typename S, typename U> struct Character {
    N nama;
    S source;
    U umur;
    Character* prevCharacter;
    Character* nextCharacter;
};

template<typename N, typename S, typename U> Character<N, S, U> newCharacter(N, S, U){
    Character*<N, S,U> karakter = new Character;
    karakter->nama = N;
    karakter->source = S;
    karakter->umur = U;
    Character*<N, S, U> prevChar;
    Character*<N, S, U> nextChar;
}

int main(int argc, char const *argv[])
{
    newCharacter<const char*, const char*, int>("Vladilena Milize", "86", 27);
    // Character<const char*, const char*, int> vladilena;
    // vladilena.nama = "Vladilena Milize";
    // vladilena.source = "86";
    // vladilena.umur = 26;

    // Character<char, int, Character<const char*, const char*, int>> Megumin;
    // Megumin.nama = 'M';
    // Megumin.source = 23;
    // Megumin.umur.nama = "Megumin";

    // cout << Megumin.umur.nama << endl;
    // cout << vladilena.nama << " - " << vladilena.source << " - " << vladilena.umur << endl;
    return 0;
}
