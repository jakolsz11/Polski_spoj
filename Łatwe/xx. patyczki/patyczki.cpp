#include <iostream>
#include <map>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    int liczba;
    map <int, int> patyki;

    for(int i=0; i<ile; i++){
        cin>>liczba;
        patyki[liczba]+=1;
    }

    int wynik=0;

    for(auto it=patyki.begin(); it != patyki.end(); it++){

        if(it->second >= 3) wynik+=it->second/3;

    }

    cout<<wynik;

    return 0;
}