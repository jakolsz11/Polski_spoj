#include <iostream>

using namespace std;

int main(){

    int pomiary;
    cin>>pomiary;

    int wys[pomiary];

    for(int i=0; i<pomiary; i++){

        cin>>wys[i];
    }

    int wynik=0;

    for(int i=2; i<pomiary; i++){

        if(wys[i-2]<wys[i-1] && wys[i-1]>wys[i]) wynik++;

    }

    cout<<wynik;

    return 0;
}