#include <iostream>

using namespace std;

unsigned long long NWD(unsigned long long l1, unsigned long long l2){

    if(l2 == 0) return l1;
    else return NWD(l2, l1 % l2);

}

unsigned long long NWW(unsigned long long l1, unsigned long long l2){

    return l1*l2/NWD(l1, l2);

}

unsigned long long ile_wystapien(unsigned long long dziel, unsigned long long s1, unsigned long long s2){

    unsigned long long wynik=0;

    if(s1%dziel == 0) wynik=s2/dziel-s1/dziel+1;
    else wynik=s2/dziel-s1/dziel;

    return wynik;

}

int main(){

    unsigned long long a, b, c;
    cin>>a>>b>>c;

    unsigned long long s1, s2;

    while(cin>>s1>>s2){

        unsigned long long ilosc=0;

        ilosc+=ile_wystapien(a, s1, s2);
        ilosc+=ile_wystapien(b, s1, s2);
        ilosc+=ile_wystapien(c, s1, s2);

        ilosc-=ile_wystapien(NWW(a, b), s1, s2);
        ilosc-=ile_wystapien(NWW(a, c), s1, s2);
        ilosc-=ile_wystapien(NWW(b, c), s1, s2);
        ilosc+=ile_wystapien(NWW(NWW(a, b), c), s1, s2);

        cout<<ilosc<<"\n";

    }

    return 0;
}