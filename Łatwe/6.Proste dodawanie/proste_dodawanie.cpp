#include <iostream>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        int ile_liczb;

        cin>>ile_liczb;

        int liczby[ile_liczb];

        for(int k=0; k<ile_liczb; k++){
            cin>>liczby[k];
        }

        int suma=0;

        for(int j=0; j<ile_liczb; j++){
            suma+=liczby[j];
        }

        cout<<suma<<endl;
    }


    return 0;
}