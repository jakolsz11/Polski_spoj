#include <iostream>

using namespace std;

int main(){

    int ile, o_ile;
    cin>>ile>>o_ile;
    int n;
    int tab[ile];

    for(int i=0; i<ile; i++){
        cin>>n;
        tab[i]=n;
    }

    for(int m=o_ile; m<ile; m++){
        cout<<tab[m]<<" ";
    }

    for(int n=0; n<o_ile; n++){
        cout<<tab[n]<<" ";
    }


    return 0;
}