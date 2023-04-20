#include <iostream>

using namespace std;

bool pierwsza(int liczba){

    if(liczba<2) return false;

    for(int i=2; i*i<=liczba; i++){
        if(liczba%i==0) return false;
    }

    return true;

}

int main(){

    ios_base::sync_with_stdio(false);
    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int liczba;
        cin>>liczba;
        bool test=true;

        while(liczba != 0){

            if(liczba % 2 == 0 && liczba != 2){
                test=false;
                break;
            }

            else if(pierwsza(liczba)==false){
                test=false;
                break;
            }
            liczba/=10;

        }

        if(test==true) cout<<"TAK\n";
        else cout<<"NIE\n";

    }
    return 0;
}

//jezeli jakakolwiek cyfra w liczbie jest parzysta to od razu NIE