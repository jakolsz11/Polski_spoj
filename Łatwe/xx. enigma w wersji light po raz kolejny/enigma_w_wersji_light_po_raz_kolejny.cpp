#include <iostream>
#include <string>

using namespace std;

int main(){

    string linia;

    while(getline(cin, linia)){

        bool test=true;
        int nr=0;

        for(int i=0; i<linia.length(); i++){


            if(test==true){
                cout<<linia[nr];
                nr++;
                test=false;
            }

            if(linia[i] == ' '){
                int poczatek=i+1;
                int ilosc=0;
                int licznik=i+1;
                while(linia[licznik] != ' ' && licznik<=linia.length()){
                    licznik++;
                    ilosc++;
                }
                i=licznik-1;
                string linia2;
                linia2=linia.substr(poczatek, ilosc);
                if(i != linia.length()-1) cout<<linia2<<" ";
                test=true;
            }

        }

        cout<<"\n";
    }
    return 0;
}