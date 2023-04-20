#include <iostream>

using namespace std;

int main(){

    int ile, predkosc;
    cin>>ile>>predkosc;

    int tab[ile][4];

    for(int i=0; i<ile; i++){
        for(int j=0; j<4; j++){

            int liczba;
            cin>>liczba;
            tab[i][j]=liczba;

        }
    }



    

    /*for(int i=0; i<ile; i++){
        for(int j=0; j<4; j++){

            cout<<tab[i][j];
            if(j == 3) cout<<endl;

        }
    }*/

    




    return 0;
}