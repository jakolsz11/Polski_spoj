#include <iostream>

using namespace std;

int main(){

    float pomoc;
    cin>>pomoc;
    pomoc*=100;
    int liczba=int(pomoc);

    int ilosc=0;
    
    while(liczba != 0){

        if(liczba>=500){
            liczba-=500;
            ilosc++;
        }
        else if(liczba>=200 && liczba<500){
            liczba-=200;
            ilosc++;
        }
        else if(liczba>=100 && liczba<200){
            liczba-=100;
            ilosc++;
        }
        else if(liczba>=50 && liczba<100){
            liczba-=50;
            ilosc++;
        }
        else if(liczba>=20 && liczba<50){
            liczba-=20;
            ilosc++;
        }
        else if(liczba>=10 && liczba<20){
            liczba-=10;
            ilosc++;
        }
        else if(liczba>=5 && liczba<10){
            liczba-=5;
            ilosc++;
        }
        else if(liczba>=2 && liczba<5){
            liczba-=2;
            ilosc++;
        }
        else if(liczba>=1 && liczba<2){
            liczba-=1;
            ilosc++;
        }

    }

    cout<<ilosc;

    return 0;
}