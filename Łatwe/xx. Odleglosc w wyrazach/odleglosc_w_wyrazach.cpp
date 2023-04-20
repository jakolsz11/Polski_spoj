#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string tekst;
        cin>>tekst;
        char min=tekst[0], max=tekst[0];
        int wynik=0;

        for(int j=0; j<tekst.length(); j++){

            if(tekst[j]<min) min=tekst[j];
            else if(tekst[j]>max) max=tekst[j];

            if(min==65 && max==90) break;

        }
        wynik=max-min;
        cout<<wynik<<"\n";

    }

    return 0;
}