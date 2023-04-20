#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    long tab[ile];
    int ilosc=0;
    int suma=0;
    int nr=1;

    for(int i=0; i<ile; i++){

        cin>>tab[i];

    }

    for(int i=0; i<ile-2; i++){

        if(tab[i]+tab[i+1]==tab[i+2]) ilosc++;

    }

    cout<<ilosc<<"\n";

    return 0;
}