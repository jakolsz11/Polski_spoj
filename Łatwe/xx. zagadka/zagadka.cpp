#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    const int licz=1001;
    int tab[licz];
    int max=-1;

    for(int i=0; i<1001; i++){
        tab[i]=0;
    }

    for(int i=0; i<testy; i++){

        int ile;
        cin>>ile;

        for(int j=0; j<ile; j++){

            int liczba;
            cin>>liczba;
            if(liczba > max) max=liczba;

            while(liczba--){
                tab[liczba]++;
            }


        }

        for(int j=0; j<max; j++){
            cout<<tab[j]<<" ";
            tab[j]=0;
        }

        cout<<"\n";
        max=-1;
    }

    return 0;
}