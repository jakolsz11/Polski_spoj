#include <iostream>

using namespace std;

int ile, liczba;


int main(){

    cin>>ile;

    for (int i=0; i<ile; i++){

        cin>>liczba;
        
        if (liczba < 10){
            int wynik=1;

            for( int i=2; i<=liczba; i++){
                wynik *= i;
                    
            }

            int jednosci = wynik%10;
            int dziesiatki = (wynik/10)%10;
            cout<< dziesiatki << " " << jednosci<<endl;
        }
        else cout<< "0" << " " << "0"<<endl;
            
    }
    return 0;
}