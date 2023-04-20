#include <iostream>

using namespace std;

unsigned long long pow2(long long b){

    unsigned long long wynik=1;

    for(int i=0; i<b; i++){
        wynik*=2;
    }

    return wynik;

}

int main(){

    unsigned long long liczba;
    

    while(cin>>liczba){

        unsigned long long suma=0;
        unsigned long long nr=1;
        unsigned long long dlugosc=0;
        unsigned long long liczba1=liczba;

        while(liczba1 != 0){
            liczba1/=2;
            dlugosc+=1;
            
        }

        while(liczba != 0){
            if(liczba % 2 == 1) suma+=pow2(dlugosc-nr);
            liczba=liczba/2;
            nr++;
        }

        cout<<suma<<"\n";

    }
    return 0;
}