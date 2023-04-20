#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int wymiary, przypadki;
    cin>>wymiary>>przypadki;

    for(int i=0; i<przypadki; i++){

        long long poczatek[wymiary], koniec[wymiary];

        for(int j=0; j<wymiary; j++){

            long long liczba;
            cin>>liczba;
            poczatek[j]=liczba;
            
        }

        for(int j=0; j<wymiary; j++){

            long long liczba;
            cin>>liczba;
            koniec[j]=liczba;

        }

        long long suma=0;

        for(int j=0; j<wymiary; j++){

            suma+=abs(poczatek[j]-koniec[j]);

        }

        cout<<suma<<endl;



    }
    return 0;
}