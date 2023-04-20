#include <iostream>
#include <map>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int ilosc;
        cin>>ilosc;

        map<int, int> liczby;

        for(int i=0; i<ilosc; i++){

            int liczba;
            cin>>liczba;

            liczby[liczba]+=1;

        }

        for(auto i = liczby.begin(); i != liczby.end(); i++){

            if(i->second % 2 != 0){
                cout<<i->first<<"\n";
                break;
            } 
        }

    }
    return 0;
}