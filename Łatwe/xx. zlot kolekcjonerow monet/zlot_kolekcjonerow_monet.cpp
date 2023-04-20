#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int ile_monet;
    cin>>ile_monet;

    const int stala=ile_monet;

    int tab1[stala];
    int tab2[stala];

    for(int i=0; i<stala; i++){

        cin>>tab1[i];

    }

    for(int i=0; i<stala; i++){

        cin>>tab2[i];

    }

    sort(tab1, tab1+stala);
    sort(tab2, tab2+stala);

    bool test=true;

    for(int i=0; i<stala; i++){
        if(tab1[i] != tab2[i]){
            test=false;
            break;
        }
    }

    if(test==true) cout<<"TAK\n";
    else cout<<"NIE\n";






    return 0;
}