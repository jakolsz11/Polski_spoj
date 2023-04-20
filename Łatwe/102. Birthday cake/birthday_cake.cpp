#include <iostream>

using namespace std;

int main(){

    long long liczba;

    while(cin>>liczba){

        long long suma=1;
        long long pomocnicza=0;
        long long nr=0;
        while(liczba>suma){
            pomocnicza+=1;
            suma+=pomocnicza;
            nr++;
        }

        cout<<nr<<endl;
    }
    return 0;
}