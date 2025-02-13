#include<stdio.h>
#include<iostream>
using namespace std;
const int total = 3;
int main(void)

{
    int nilai[total];
    for(int i =0; i< total; i++){
        nilai[i] = printf("Masukkan Nilai: "); scanf("%f",&i);
    }
    printf("Rata-rata: %f\n",(total, nilai));
}
float average(int lenght, int array[])
{
    int sum = 0;
    for (int i=0;i<lenght;i++){
        sum = sum + array[i];
    }
    return sum/(float)lenght;
}
