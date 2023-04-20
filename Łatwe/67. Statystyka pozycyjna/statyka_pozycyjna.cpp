#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool myfunction(int x, int y){
    return x>y; 
}

int main(){

    string linia;

    while(getline(cin, linia)){

        int dlugosc=linia.length();

        int tab[100];
        bool test=true;
        int ilosc=0, nr=0;

        for(int i=0; i<dlugosc; i++){

            while(isdigit(linia[i])){

                ilosc++;
                i++;

            }

            if(ilosc != 0){

                string wycieta;
                wycieta=linia.substr(i-ilosc, ilosc);

                int number;
                number=stoi(wycieta);

                for(int k=1; k<nr; k++){
                    if(number==tab[k]){
                        test=false;
                    }
                }

                if(test==true){
                    tab[nr]=number;
                    nr++;
                     
                }
                ilosc=0;
                wycieta.clear();
                test=true;
                
            }

        }
     
        int liczba=tab[0];

        sort(tab+1, tab+nr, myfunction);    

        if(liczba>nr-1) cout<<"-"<<endl;
        else cout<<tab[liczba]<<endl;
    }
    
    return 0;
}