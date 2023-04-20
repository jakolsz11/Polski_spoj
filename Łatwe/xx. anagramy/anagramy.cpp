#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    string wyraz;
    int testy;
    cin>>wyraz>>testy;

    sort(wyraz.begin(), wyraz.end());

    int ilosc=0;


    for(int i=0; i<testy; i++){

        string anagramy;
        cin>>anagramy;

        sort(anagramy.begin(), anagramy.end());

        if(wyraz == anagramy) ilosc++;

    }

    cout<<ilosc;

    return 0;
}