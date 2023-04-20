#include <iostream>
#include <map>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    map <int, int> osoby;
    int minuta;

    for(int i=0; i<testy; i++){

        cin>>minuta;
        osoby[minuta]+=1;

    }

    int ilosc=0;
    int wynik=0;

    for(auto it=osoby.begin(); it != osoby.end(); it++){

        if(ilosc == 0 && it->second == 1){
            wynik=0;
            ilosc=1;
        } 
        else{
            wynik+=ilosc+it->second;
            ilosc+=it->second;
        }

    }

    cout<<wynik;

    return 0;
}