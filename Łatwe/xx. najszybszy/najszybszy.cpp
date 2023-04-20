#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int tab[3];
    cin>>tab[0]>>tab[1]>>tab[2];

    if(tab[0]>tab[1]){
        if(tab[1]>tab[2]) cout<<"TAK 3\n";
        else if(tab[1]==tab[2]) cout<<"NIE\n";
        else cout<<"TAK 2\n";
    }
    else if(tab[0]<tab[1]){
        if(tab[0]>tab[2]) cout<<"TAK 3\n";
        else if(tab[0]==tab[2]) cout<<"NIE\n";
        else cout<<"TAK 1\n";
    }
    else{
        if(tab[2]<tab[1]) cout<<"TAK 3\n";
        else cout<<"NIE\n";
    }





    return 0;
}