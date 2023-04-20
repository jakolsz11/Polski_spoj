#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    int tab[1000];

    for(int i=0; i<ile; i++){

        int liczba;
        cin>>liczba;
        tab[i]=liczba;

    }

    char znak;
    int wartosc;

    cin>>znak>>wartosc;

    switch(znak){

        case '<':
            for(int i=0; i<ile; i++){
                if(tab[i]<wartosc) cout<<tab[i]<<endl;
            }
            break;
        
        case '>':
            for(int i=0; i<ile; i++){
                if(tab[i]>wartosc) cout<<tab[i]<<endl;
            }
            break;

    }




    return 0;
}