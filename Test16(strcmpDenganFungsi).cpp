#include <iostream>
#include <string.h>
#include <malloc.h>

using namespace std;

void pembandingStr(char **masukan1, char **masukan2)
{
    // cout<<"String pertama: ";
    // cin.getline(*masukan1, 30);

    // cout<<"String kedua: ";
    // cin.getline(*masukan2, 30);

    if(strcmp(*masukan1, *masukan2)==0){
        cout<<* masukan1<<" & "<<*masukan2<<" sama\n";
    }
    else{
        cout<<*masukan1<<" & "<<*masukan2<<" berbeda\n";
    }
}

int main(void)
{
    // char *str1, *str2;

    // str1 = (char *) malloc(10);
    // str2 = (char *) malloc(10);
    char *str1 = new char[10];
    char *str2 = new char[10];
    cout << "String pertama: ";
    cin >> str1;

    cout << "String kedua: ";
    cin >> str2;

    if (str1 == str2)
        cout << "String bernilai sama" << endl;
    else
        cout << "String berbeda" << endl;
    
    pembandingStr(&str1, &str2);

    delete str1;
    delete str2;

    return 0;
}
