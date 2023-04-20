#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int liczba;
        
        cin>>liczba;

        int tab[liczba];
        int n;

        for(int k=0; k<liczba; k++){
            cin>>n;
            tab[k]=n;
        }

        for(int j=1; j<liczba; j++){
            cout<<tab[j]<<" ";
            j++;
        }

        for(int m=0; m<liczba; m++){
            cout<<tab[m]<<" ";
            m++;
        }
        cout<<"\n";
    }

        


    return 0;
}