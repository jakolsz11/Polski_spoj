#include <iostream>

using namespace std;

int main(){

    long long a, b;
    cin>>a>>b;

    long long wynik=1;
    long long mnoznik=1;

    long long ilosc=0;

    while(wynik<b){

        wynik*=mnoznik;
        mnoznik++;

        if(wynik>=a && wynik<=b) ilosc++;

    }

    if(a<=1) ilosc++;
    if(b<=1) ilosc++;
    if(a==0 && b==0) ilosc=0;

    cout<<ilosc<<"\n";

    return 0;
}