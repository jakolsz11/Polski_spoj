#include <iostream>
#include <map>

using namespace std;

int main(){

    int pomiary;
    cin>>pomiary;

    map<int, int> ilosc;

    for(int i=0; i<pomiary; i++){

        int pomiar;
        cin>>pomiar;
        ilosc[pomiar];

    }

    int wynik=0;

    for(auto it=ilosc.begin(); it != ilosc.end(); it++){
        wynik++;
    }

    cout<<wynik;

    return 0;
}