#include <iostream>
#include <map>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    map <int, string> zawodnik;

    for(int i=0; i<testy; i++){

        int nr;
        string tekst;

        cin>>nr>>tekst;

        if(tekst=="ja" || tekst=="gram" || tekst=="bede" || tekst=="odpadam" || tekst=="rezygnuje"){
            zawodnik[nr]=tekst;
        }

    }

    int wynik=0;

    for(auto it=zawodnik.begin(); it != zawodnik.end(); it++){

        if(it->second=="ja" || it->second=="gram" || it->second=="bede") wynik++;

    }

    if(wynik>=10) cout<<"Gramy! Bedzie nas "<<wynik;
    else cout<<"Nie gramy :( Jest nas tylko "<<wynik;

    return 0;
}