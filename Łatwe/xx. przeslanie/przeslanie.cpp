#include <iostream>

using namespace std;

int main(){

    string tekst;
    cin>>tekst;

    string wynik;

    for(int i=0; i<tekst.size(); i+=2){

        tekst[i]+=(tekst[i+1]%26);
        
        if(tekst[i]>'Z') tekst[i]-=26;
        wynik.push_back(tekst[i]);

    }

    cout<<wynik;
    return 0;
}