#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        string ciag, podciag;
        cin>>ciag>>podciag;

        int dciag, dpodc;
        dciag=ciag.length();
        dpodc=podciag.length();
        int nr=0;

        if(dciag<dpodc) cout<<"Nie\n";
        else{
            for(int j=0; j<dciag; j++){

                if(ciag[j]==podciag[nr]) nr++;

            }
            if(nr == dpodc) cout<<"Tak\n";
            else cout<<"Nie\n";
        }



    }
    return 0;
}