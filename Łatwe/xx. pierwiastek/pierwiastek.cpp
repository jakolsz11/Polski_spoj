#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    

    for(int i=0; i<ile; i++){

        int liczba;
        cin>>liczba;

        bool test=true;

        if(liczba <= 0){
            cout<<"NIE"<<"\n";
            test=false;
        } 

        int wynik=0;
        int nr=1;
        

        while(wynik<liczba){
            wynik=nr*nr;
            if(wynik==liczba){
                cout<<"TAK"<<"\n";
                test=false;
            }
            nr++;
        }

        if(test==true) cout<<"NIE"<<"\n"; 
        liczba--;



    }
    return 0;
}