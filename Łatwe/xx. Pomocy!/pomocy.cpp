#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        long long liczba, system;
        cin>>liczba>>system;

        long long wynik=liczba;
        long ilosc=0;

        if(liczba<system) ilosc=1;
        else{

            while(wynik > 0){

                ilosc++;
                wynik/=system;
            }
        }

        cout<<ilosc<<"\n";




    }
    return 0;
}