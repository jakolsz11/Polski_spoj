#include <iostream>

using namespace std;

int main(){

    long long ile, liczba;
    cin>>ile>>liczba;

    long long dodac=((1+ile-1)*(ile-1)/2);

    for(long long i=1; i<=liczba; i++){

        if((ile*i+dodac)==liczba){
            for(long long j=0; j<ile; j++){
                cout<<j+i<<" ";
            }
            break;
        }
    }

    return 0;
}