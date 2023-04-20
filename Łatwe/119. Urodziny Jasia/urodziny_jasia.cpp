#include <iostream>
#include <math.h>

using namespace std;

int main(){

    long ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        long liczba;
        cin>>liczba;
        long numer=liczba, wynik;
        int k=0;

        while(numer>=0){
            k++;
            numer=liczba-pow(2, k);
        }

        k-=1;

        long szukana;

        szukana=liczba-pow(2, k);

        wynik=2*szukana+1;

        cout<<wynik<<endl;


    }
    return 0;
}