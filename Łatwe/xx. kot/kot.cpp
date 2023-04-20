#include <iostream>

using namespace std;

int main(){

    string linia;
    cin>>linia;
    int liczk=0, liczo=0, liczt=0;
    int wynik=0;

    for(int i=0; i<linia.length(); i++){

        if(linia[i]=='k') liczk=1;
        if(liczk==1){
            if(linia[i]=='o') liczo=1;
            if(liczo==1){
                if(linia[i]=='t'){
                    wynik++;
                    liczk=0;
                    liczo=0;
                    liczt=0;
                } 
            }
        }

    }

    if(wynik == 0) cout<<"NIE\n";
    else cout<<wynik<<"\n";

    return 0;
}