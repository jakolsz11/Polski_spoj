#include <iostream>

using namespace std;

int NWD(int a, int b){

    if(b==0) return a;
    else return NWD(b, a%b);
}

int main(){

    int ile;
    cin>>ile;

    int pozioma[ile], pionowa[ile], wynik[ile][ile];

    for(int i=0; i<ile; i++){

        int liczba;
        cin>>liczba;
        pozioma[i]=liczba;
        pionowa[i]=liczba;

    }

    for(int i=0; i<ile; i++){

        for(int m=0; m<ile; m++){

            wynik[m][i]=NWD(pionowa[i], pozioma[m]);
            cout<<wynik[m][i];
            if(m==ile-1) cout<<"\n";
            else cout<<" ";
        }


    }

    return 0;
}