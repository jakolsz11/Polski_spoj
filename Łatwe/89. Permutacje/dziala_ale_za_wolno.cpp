#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    int testy;
    cin>>testy;
    for(int i=0; i<testy; i++){

        int ile;
        cin>>ile;
        int wynik=0;
        string wyrazy[ile];

        for(int j=0; j<ile; j++){

            string linia;
            cin>>linia;

            sort(linia.begin(), linia.end());

            wyrazy[j]=linia;
            int ilosc=1;
            

            for(int m=0; m<j; m++){
                if(wyrazy[j]==wyrazy[m]) ilosc++;
            }

            if(ilosc>wynik) wynik=ilosc;


            

        }
        cout<<wynik<<"\n";



    }
    return 0;
}