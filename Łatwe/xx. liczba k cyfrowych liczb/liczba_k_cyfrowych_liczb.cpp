#include <iostream>
#include <math.h>

using namespace std;

unsigned long long potega(unsigned long long system, unsigned long long cyfrowe){

    unsigned long long wynik=1;

    for(unsigned long long i=0; i<cyfrowe; i++){
        wynik*=system;
    }

    return wynik;
}

int main(){

    unsigned long long testy;
    cin>>testy;

    for(unsigned long long i=0; i<testy; i++){

        unsigned long long cyfrowe, system;
        cin>>cyfrowe>>system;

        unsigned long long wynik=0;

        if(cyfrowe == 1) wynik=potega(system, cyfrowe);
        else wynik=potega(system, cyfrowe)-potega(system, (cyfrowe-1));

        cout<<wynik<<"\n";

    }
    return 0;
}