#include <iostream>
#include <math.h>
#include <map>

using namespace std;

long long poziom(long long a){

    long long b=1;
    long long licznik=0;

    if(a==1) return 1;
    else{
        while(a>=b){
            b*=2;
            licznik++;
        }
        return licznik;
    }

}

int main(){

    int testy;
    cin>>testy;

    map <long long, long long> wyniki;

    for(int i=0; i<testy; i++){

        long long liczba;
        cin>>liczba;

        wyniki[poziom(liczba)]+=1;

    }

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        long long poz;
        cin>>poz;

        cout<<wyniki[poz]<<"\n";
    }







    return 0;
}