#include <iostream>
#include <string>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    while(ile != 0){

        string linia;
        cin>>linia;

        int dlugosc=linia.length();
        int liczba, ilosc=0;
        int suma=0;
        int nr=0;

        while(isdigit(linia[nr])){
            nr++;
        }

        if(nr != 0){
            liczba=stoi(linia.substr(0, nr));
            suma+=liczba;
        }
        


        for(int j=nr; j<dlugosc; j++){

            switch(linia[j]){

                case '+':
                    while(isdigit(linia[j+1])){
                        ilosc++;
                        j++;
                    }
                    liczba=stoi(linia.substr(j+1-ilosc, ilosc));
                    suma+=liczba;
                    ilosc=0;
                    break;

                case '-':
                    while(isdigit(linia[j+1])){
                        ilosc++;
                        j++;
                    }
                    liczba=stoi(linia.substr(j+1-ilosc, ilosc));
                    suma-=liczba;
                    ilosc=0;
                    break;
            }

        }

        cout<<suma<<endl;
        suma=0;
        ile--;      

    }


    return 0;
}