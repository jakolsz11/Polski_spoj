#include <iostream>

using namespace std;

int main(){

    int liczba;
    int ile;
    

    while(cin>>liczba>>ile){
        
        int tab[ile];
        int number;
        int ilosc=0;

        for(int i=0; i<ile; i++){
            cin>>number;
            tab[i]=number;
        }

        for(int k=0; k<ile; k++){
            if(tab[k]==liczba) ilosc++;
        }

        cout<<ilosc<<endl;
    }


    return 0;
}