#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        float starsza_o, za_lat, razy_starsza;
        cin>>starsza_o>>za_lat>>razy_starsza;

        starsza_o=starsza_o*12;
        za_lat=za_lat*12;

        float wiek_dziecka;

        wiek_dziecka=abs((starsza_o+za_lat-za_lat*razy_starsza)/(razy_starsza-1));
        cout<<round(wiek_dziecka)<<endl;


    }
    return 0;
}