#include <iostream>

using namespace std;

int sprawdzanie(string ciag){

    int wynik=0;

    for(int i=0; i<ciag.length(); i++){

        if(ciag[i] == '2') wynik+=2;
        else if(ciag[i] == '3') wynik+=3;
        else if(ciag[i] == '4') wynik+=4;
        else if(ciag[i] == '5') wynik+=5;
        else if(ciag[i] == '6') wynik+=6;
        else if(ciag[i] == '7') wynik+=7;
        else if(ciag[i] == '8') wynik+=8;
        else if(ciag[i] == '9') wynik+=9;
        else if(ciag[i] == 'T') wynik+=10;
        else if(ciag[i] == 'J') wynik+=11;
        else if(ciag[i] == 'Q') wynik+=12;
        else if(ciag[i] == 'K') wynik+=13;
        else if(ciag[i] == 'A') wynik+=14;

    }

    return wynik;
}

int main(){

    string jasio;
    string stasio;

    cin>>jasio;
    cin>>stasio;
    int j, s;
    j=sprawdzanie(jasio);
    s=sprawdzanie(stasio);

    if(j>s) cout<<"JASIO";
    else if(j<s) cout<<"STASIO";
    else if(j==s) cout<<"REMIS";



    return 0;
}