#include<iostream>
using namespace std;

int main()
{
    for(int hehe=1; hehe<=50;hehe++){
        if(hehe%3==0){
            cout<<"Hehe";
        }
        if(hehe%5==0){
            cout<<"Haha";
        }
        if(hehe%3!=0 && hehe%5!=0){
            cout<<hehe;
        }
        cout<<" ";
    }
}
