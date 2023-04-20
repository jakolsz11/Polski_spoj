#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    const int ile=testy;

    float liczby[ile];

    double suma=0;

    for(int i=0; i<ile; i++){

        cin>>liczby[i];
        suma+=liczby[i];
        
    }

    float srednia=suma/ile;
    //cout<<srednia<<" ";
    float wynik;
    float max=0;
    int it=0;


    for(int i=0; i<ile; i++){

        wynik=abs(srednia-liczby[i]);

        if(i==0) max=wynik;

        if(wynik<max){
            max=wynik;
            it=i;
        } 
        else if(wynik==max){
            if(liczby[i]>liczby[it]) it=i;
        }

    }

    cout<<liczby[it]<<"\n";

    return 0;
}