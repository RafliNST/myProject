#include <iostream>

struct Waifu
{
    const char* nama;
    int umur;
};

class Player
{
public:
    struct Coordinates
    {
        int x;
        int y;
    };

    Coordinates const& getPosition() const
    {
        return position_;
    }

private:
    Coordinates position_;
};

Waifu getName() {
    Waifu Vladilena;
    Vladilena.nama = "Vladilena Milize";
    Vladilena.umur = 25;

    return Vladilena;
}

int main(int argc, char const *argv[])
{
    const char* Vladilena = getName().nama;
    const int umur = getName().umur;
    std::cout << "Namanya " << Vladilena << std::endl;
    std::cout << "Umurnya " << umur << " tahun" << std::endl;

    return 0;
}
