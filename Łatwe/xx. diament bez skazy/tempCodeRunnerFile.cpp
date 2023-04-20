#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int liczba;
        cin>>liczba;
        int wynik=0;
        int nr=1;
        bool test=true;

        while(wynik<liczba){

            wynik=((nr*(nr-3))/2)+nr;

            if(wynik==liczba){
                test=false;
                break;
            }
            nr++;

        }

        if(test==true) cout<<"NIE\n";
        else cout<<"TAK\n";


    }
    return 0;
}