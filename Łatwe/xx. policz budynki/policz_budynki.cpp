#include <iostream>
#include <map>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    map<int, int> zamieszkale;

    for(int i=0; i<testy; i++){

        int nr;
        string nazwisko;
        cin>>nr>>nazwisko;

        zamieszkale[nr]=1;

    }

    int wynik=zamieszkale.size();
    cout<<wynik;

    return 0;
}