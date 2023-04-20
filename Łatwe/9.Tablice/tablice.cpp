#include <iostream>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        int liczba;
        cin>>liczba;
        int tablica[liczba];

        for(int k=0; k<liczba; k++){
            cin>>tablica[k];
        }        
    
        int tablica2[liczba];
        int nr=0;

        for(int j=liczba-1; j>=0; j--){
            tablica2[nr]=tablica[j];
            nr++;
        }

        for(int l=0; l<liczba; l++){
            cout<<tablica2[l]<<" ";
        }

        cout<<"\n";
        

    }
    return 0;
}