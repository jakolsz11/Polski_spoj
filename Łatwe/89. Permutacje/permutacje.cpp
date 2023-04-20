#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    int testy;
    cin>>testy;
    for(int i=0; i<testy; i++){

        int ile;
        cin>>ile;
        map<string, int> wyrazy;

        for(int j=0; j<ile; j++){

            string linia;
            cin>>linia;

            sort(linia.begin(), linia.end());
            int ilosc=0;

            wyrazy[linia]+=1;

        }

        int wynik=0;
        for(auto it=wyrazy.cbegin(); it != wyrazy.cend(); it++){

            if(it->second > wynik) wynik= it->second;
        }

        cout<<wynik<<"\n";
        

    }
    return 0;
}