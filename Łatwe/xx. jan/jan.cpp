#include <iostream>
#include <string>

using namespace std;

int main(){

    string tekst;
    cin>>tekst;

    unsigned int licznik_N=0;
    unsigned int licznik_A=0;
    size_t suma=0;
    size_t pozycja_J;
    size_t pozycja_N;

    pozycja_J=tekst.find("J", 0);
    pozycja_N=tekst.rfind("N", tekst.size()-1);

    tekst=tekst.substr(pozycja_J, pozycja_N-pozycja_J+1);

    for(int i=tekst.size()-1; i>=0; i--){

        if(tekst[i]=='N') licznik_N++;
        else if(tekst[i]=='A') licznik_A+=licznik_N;
        else suma+=licznik_A;

    }

    cout<<suma<<"\n";

    return 0;
}