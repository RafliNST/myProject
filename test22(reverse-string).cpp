#include <iostream>
#include <string.h>

char* reverseString(char str[])
{
    int size = strlen(str);
    char temp = ' ';

    for (int i = size; i > 0; i--){
        for (int j = 0; j < i-1; j++){
            temp    = str[j];
            str[j]  = str[j+1];
            str[j+1]= temp;
        }        
    }

    return str;
}

int main(int argc, char const *argv[])
{
    char nama[55];
    time_t start, end;

    std::cout << "Nama: "; 
    std::cin.getline(nama, 55);

    std::cout << nama << std::endl;
    std::cout << reverseString(nama) << std::endl;
    return 0;
}
