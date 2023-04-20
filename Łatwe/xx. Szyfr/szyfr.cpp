#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string linia;
        cin>>linia;

        string liczba;
        int wynik=65;

        for(int j=0; j<linia.length(); j+=5){
            wynik=65;
            liczba=linia.substr(j, 5);
            for(int m=0; m<5; m++){
                if(liczba[m]=='1') wynik+=pow(2, 4-m);
            }
            char litera=wynik;
            cout<<litera;
            

        }

        cout<<"\n";



    }
    return 0;
}