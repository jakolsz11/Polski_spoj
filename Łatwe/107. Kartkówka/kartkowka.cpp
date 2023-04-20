#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        long long liczba;
        cin>>liczba;

        long long suma=0;

        long long dzielenie=liczba;

        while(dzielenie >= 5){

            suma+=floor(dzielenie/5);
            dzielenie=floor(dzielenie/5);

        }

        cout<<suma<<endl;


    }
    return 0;
}