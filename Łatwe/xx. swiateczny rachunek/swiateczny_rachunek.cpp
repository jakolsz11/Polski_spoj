#include <iostream>

using namespace std;

int main(){

    string tekst;
    getline(cin, tekst);
    string kwota;
    int suma=0;

    for(int i=0; i<tekst.length(); i++){

        if(isdigit(tekst[i])){
            kwota.push_back(tekst[i]);
        }
        if(!isdigit(tekst[i]) || i+1==tekst.length()){
            if(!kwota.empty()){
                suma+=stoi(kwota);
                kwota.clear();
            }
            
        }
    }
    
    cout<<suma;

    return 0;
}