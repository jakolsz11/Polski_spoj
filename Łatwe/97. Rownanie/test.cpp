#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string linia;
    string tab[1000];

    cin>>linia;

    int dlugosc=linia.length();
    int ile=0;
    int nr=0;
    int poczatek=0;

    for(int i=0; i<dlugosc; i++){

        ile++;
        if(linia[i]=='-'){
            tab[nr]=linia.substr(poczatek, ile-1);
            poczatek+=ile-1;
            nr++;
            ile=0;

        }
        cout<<tab[nr]<<endl;
    }



    return 0;
}