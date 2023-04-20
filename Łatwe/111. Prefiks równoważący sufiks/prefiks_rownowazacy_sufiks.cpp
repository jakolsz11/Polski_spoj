#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int ile;
        cin>>ile;
        int tab[ile];

        for(int j=0; j<ile; j++){
            int liczba;
            cin>>liczba;
            tab[j]=liczba;
        }

        bool zero=true;

        for(int j=0; j<ile-1; j++){

            long suma1=0;
            long suma2=0;
            int nr=0;

            for(int i=0; i<=j; i++){
                suma1+=tab[i];
                nr=i+1;
            }

            for(int i=ile-1; i>j; i--){
                suma2+=tab[i];
            }

            if(suma1 == suma2){
                cout<<nr<<endl;
                zero = false;
                break;
            }

        }

        if(zero==true) cout<<"0"<<endl;

    }
    return 0;
}