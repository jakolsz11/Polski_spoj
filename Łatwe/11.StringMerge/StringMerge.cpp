#include <iostream>
#include <string>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        string wyraz1, wyraz2;
        cin>>wyraz1>>wyraz2;

        int dlugosc1=wyraz1.length();
        int dlugosc2=wyraz2.length();

        int liczba;

        if(dlugosc1<=dlugosc2) liczba=dlugosc1;
        else liczba=dlugosc2;

        
        for(int k=0; k<liczba; k++){
            cout<<wyraz1[k];
            cout<<wyraz2[k];
        }   
        cout<<"\n";

    }
    return 0;
}