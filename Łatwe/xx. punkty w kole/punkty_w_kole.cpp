#include <iostream>
#include <math.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long testy, promien, wynik=0, szukana=0, i;
    cin>>testy;

    while(testy--){

        cin>>promien;

        szukana=0;

        for(i=1; i<promien; i++){
            szukana+=sqrt(promien*promien-i*i);
        }

        cout<<1+4*promien+4*szukana<<"\n";

    }
    return 0;
}