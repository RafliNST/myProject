#include <iostream>
#include <string.h>

// using namespace std;

int main(int argc, char const *argv[])
{
    char* inputWaifu = new char;

    int besar;

    while(strcmp( inputWaifu, "HEHE" ) != 0){
        std::cout<<"Hello World"<<std::endl;
        std::cin.getline(inputWaifu, 150);
        besar = strlen(inputWaifu);

        for(int i=0; i<besar; i++){
            std::cout<<(int)inputWaifu[i]<<", "<<inputWaifu[i];
            std::cout<<"["<<i<<"]"<<std::endl;    
        }
        std::cout<<besar<<std::endl;
    }
    
    delete inputWaifu;
    return 0;
}
