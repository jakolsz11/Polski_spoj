#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;
    const int ile=testy;
    int wyprzedzil=0;
    int zostalwyprzedzony=0;

    int s[ile];
    int v[ile];

    for(int i=0; i<testy; i++){

        cin>>s[i]>>v[i];

    }

    int ktory;
    cin>>ktory;

    float czas_ktory=float (s[ktory-1])/v[ktory-1];
    //cout<<czas_ktory;

    for(int i=0; i<testy; i++){

        if(i != ktory-1){

            if(s[i]<s[ktory-1]){
                float czas=float (s[i])/v[i];
                if(czas>czas_ktory) wyprzedzil++;
            }
            else{
                float czas=float (s[i])/v[i];
                if(czas<czas_ktory) zostalwyprzedzony++;
            }

        }
    }

    cout<<wyprzedzil<<" "<<zostalwyprzedzony;

    return 0;
}