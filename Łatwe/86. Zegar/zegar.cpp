#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int ilosc;
        cin>>ilosc;

        int liczby[ilosc];
        int sprawdzenie[ilosc];

        for(int k=0; k<ilosc; k++){
            int liczba;
            cin>>liczba;
            liczby[k]=liczba;
            sprawdzenie[k]=k+1;
        }

        int licznik=0;
        int wynik=0;
        int tura=0;

        for(int j=0; j<ilosc; j++){

            for(int m=0; m<ilosc; m++){


                if((m+j)>=ilosc){

                    for(int z=0; z<j; z++){
                        if(liczby[z]==sprawdzenie[m]) licznik++;
                        m++;
                    }

                }

                else if(liczby[m+j]==sprawdzenie[m]) licznik++;

            }

            if(licznik>wynik){

                wynik=licznik;
                tura=j;

            }

            licznik=0;

        }

        for(int n=tura; n<ilosc; n++){
            cout<<liczby[n]<<" ";
        } 

        for(int l=0; l<tura; l++){
            cout<<liczby[l]<<" ";
        }

        cout<<endl;

    }
    return 0;
}