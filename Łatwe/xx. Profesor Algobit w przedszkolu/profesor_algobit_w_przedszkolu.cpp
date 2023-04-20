#include <iostream>

using namespace std;

int main(){

    string tekst;
    getline(cin, tekst);

    long dlugosc=tekst.length();

    if(dlugosc % 2 == 0){

        for(long i=0; i<dlugosc; i+=2){
            cout<<tekst[i];
        }

        for(long i=dlugosc-1; i>=0; i-=2){
            cout<<tekst[i];
        }
    }
    else{
        for(long i=0; i<dlugosc; i+=2){
            cout<<tekst[i];
        }

        for(long i=dlugosc-2; i>=0; i-=2){
            cout<<tekst[i];
        }
    }

    

    return 0;
}