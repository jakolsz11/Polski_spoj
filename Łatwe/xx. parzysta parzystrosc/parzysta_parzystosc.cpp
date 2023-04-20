#include <iostream>

using namespace std;

int main(){

    string liczba;
    cin>>liczba;
    bool test=true;

    for(int i=0; i<liczba.length(); i++){

        if(liczba[i] %2 == 0){
            cout<<"Tak"<<"\n";
            test=false;
            break;
        }

    }

    if(test==true) cout<<"Nie"<<"\n";
    return 0;
}