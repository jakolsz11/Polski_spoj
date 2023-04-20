#include <iostream>

using namespace std;

int main(){

    string linia;
    getline(cin, linia);
    int balans=0;

    for(int i=0; i<linia.length(); i++){

        if(linia[i]=='+') balans++;
        if(linia[i]=='-') balans--;

    }

    int ile=0;
    if(balans>=3){
        ile=balans/3;
        for(int j=0; j<ile; j++){
            cout<<"5 ";
        }
    }
    else if(balans<=-3){
        ile=(-1)*balans/3;
        for(int j=0; j<ile; j++){
            cout<<"1 ";
        }
    }
    else cout<<"BRAK";

    return 0;
}