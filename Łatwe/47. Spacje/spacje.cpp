#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){

    string liczba;

    while(getline(cin, liczba)){

        for(unsigned int i=0; i<liczba.size(); i++){

            if(isspace(liczba[i])){
                liczba[i]=0;
                liczba[i+1]=toupper(liczba[i+1]);
            }

        }

        for(unsigned int i=0; i<liczba.size(); i++){

            if(liczba[i] != 0){

                cout<<liczba[i];

            }
        }

        cout<<"\n";
    }
    return 0;
}