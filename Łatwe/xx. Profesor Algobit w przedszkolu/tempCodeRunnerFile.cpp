#include <iostream>

using namespace std;

int main(){

    string tekst;
    getline(cin, tekst);

    long dlugosc=tekst.length();

    for(long i=0; i<dlugosc; i+=2){
        cout<<tekst[i];
    }

    for(long i=dlugosc-2; i>=0; i-=2){
        cout<<tekst[i];
    }

    return 0;
}