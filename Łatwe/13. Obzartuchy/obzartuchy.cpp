#include <iostream>
#include <math.h>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){
        int ile_obzartuchow, ciastka;
        cin>>ile_obzartuchow>>ciastka;
        int czas[ile_obzartuchow];
        float suma=0;
        for(int k=0; k<ile_obzartuchow; k++){
            cin>>czas[k];
            int ilosc= floor(24*3600/czas[k]);
            suma+=ilosc;
        }
        cout<<ceil(suma/ciastka)<<endl;       

    }
    return 0;
}

