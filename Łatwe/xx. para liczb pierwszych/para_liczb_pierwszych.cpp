#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int liczba){
    if(liczba<2) return 0;
    float a=sqrt(liczba);
    for(int i=2; i<=a; i++){
        if(liczba%i == 0) return 0;
    }
    return 1;
}

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int liczba;
        cin>>liczba;
        bool test=true;

        if(liczba % 2 != 0){
            if(isPrime(liczba-2)){
                cout<<"TAK 2 "<<liczba-2<<"\n";
            }
            else cout<<"NIE\n";
        }

        else{
            if(liczba==4) cout<<"TAK 2 2\n";
            else{
                for(int i=2; i<=1+liczba/2; i++){
                    if(isPrime(i)){
                        if(isPrime(liczba-i)){
                            cout<<"TAK "<<i<<" "<<liczba-i<<"\n";
                            test=false;
                            break;   
                        } 
                    }
                }
                if(test==true) cout<<"NIE\n";
            }

        }



    }
    return 0;
}