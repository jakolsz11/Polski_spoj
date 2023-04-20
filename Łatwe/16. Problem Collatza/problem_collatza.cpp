#include <iostream>

using namespace std;

int nr=0;
int wynik=0;

int ciag(int s){

    if(s != 1){

        if(s%2==0) wynik=s/2;
        else wynik=3*s+1;
        nr++;
        ciag(wynik);
    }
    else return nr;
    nr=0;
}

int ile;

int main(){

    cin>>ile;
    int s;

    for(int i=0; i<ile; i++){

        cin>>s;
        
        cout<<ciag(s)<<endl;

    }
    return 0;
}

