#include <iostream>

using namespace std;

void swap(int *x, int *y){
    cout << "Dari Fungsi" << endl;
    cout << "x = " << *x << " y = " << *y << endl;
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << "x = " << *x << " y = " << *y << endl;
}

int main()
{
    int a,b,c;
    a = 2;
    b = 4;
    // *
    // &

    cout << "a = " << a << " b = " << b << endl;
    swap(&a,&b);
    cout << "Bukan Dari Fungsi" << endl;
    cout << "a = " << a << " b = " << b << endl;
}