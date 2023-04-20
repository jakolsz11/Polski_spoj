#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testy, pietra, dlugosc, licznik, min, max;
    string kolejnosc;
    cin>>testy;

    for(int i=0; i<testy; i++){

        cin>>pietra;
        cin>>kolejnosc;

        dlugosc=kolejnosc.length();

        licznik = min = max = 0;

        for(int j=0; j<dlugosc; j++){

            if(kolejnosc[j]=='U'){
                licznik++;
                if(licznik>max) max=licznik;
            } 

            if(kolejnosc[j]=='D'){
                licznik--;
                if(licznik<min) min=licznik;
            } 

        }

        if((max-min)<pietra) cout<<"TAK\n";
        else cout<<"NIE\n";

    }
    return 0;
}