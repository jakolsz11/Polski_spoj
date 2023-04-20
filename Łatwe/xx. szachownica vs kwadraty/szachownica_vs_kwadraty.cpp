#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    int testy;
    cin>>testy;

    for (int i=0; i<testy; i++){

        long liczba;
        cin>>liczba;
        long long wynik;

        wynik=(liczba*(liczba+1)*(2*liczba+1))/6;
       

        cout<<wynik<<"\n";

    }
    return 0;
}