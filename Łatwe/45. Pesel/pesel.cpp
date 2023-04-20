#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        string liczba;
        int tab[11];
        cin>>liczba;
        for(int m=0; m<11; m++){
            tab[m]=liczba[m];
        }

        for(int k=0; k<10; k++){
            if(k%4==0) tab[k]=tab[k];
            else if(k%4==1) tab[k]=tab[k]*3;
            else if(k%4==2) tab[k]=tab[k]*7;
            else tab[k]=tab[k]*9;
        }

        int suma=0;
        for(int j=0; j<11; j++){
            suma+=tab[j];
        }

        if(suma%10 == 0) cout<<"D"<<endl;
        else cout<<"N"<<endl;


    }
    return 0;
}