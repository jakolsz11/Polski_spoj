#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int liczba;
        cin>>liczba;
        int ilosc=0;
        int max=0;

        char tab[liczba][liczba];

        for(int j=0; j<liczba; j++){

            ilosc=0;

            for(int k=0; k<liczba; k++){

                cin>>tab[j][k];
                if(tab[j][k]=='.') ilosc++;
                else if(tab[j][k]=='#') ilosc=0;
                if(ilosc>max) max=ilosc;
            }

        }

        cout<<max*max<<"\n";




    }
    return 0;
}