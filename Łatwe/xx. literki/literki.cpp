#include <iostream>
#include <map>
#include <math.h>

using namespace std;

int main(){

    string tekst;
    getline(cin, tekst);

    map <char, int> litery={
        {'A', 0}, {'B', 0}, {'C', 0}, {'D', 0}, {'E', 0}, {'F', 0}, {'G', 0}, {'H', 0}, {'I', 0}, {'J', 0}, {'K', 0}, {'L', 0}, {'M', 0}, {'N', 0}, {'O', 0}, {'P', 0}, {'Q', 0}, {'R', 0}, {'S', 0}, {'T', 0}, {'U', 0}, {'V', 0}, {'W', 0}, {'X', 0}, {'Y', 0}, {'Z', 0}, 
    };

    float ilosc=0;
    for(int i=0; i<tekst.length(); i++){
        if(tekst[i] != ' '){
            litery[tekst[i]]+=1;
            ilosc++;
        }
    }

    for(auto it=litery.begin(); it != litery.end(); it++){

        cout<<it->first;
        double ile=it->second;
        if(ile != 0){

            double gwiazdki=round(ile/ilosc*100);

            for(int i=0; i<gwiazdki; i++){
                cout<<"*";
            }
        }
        

        cout<<"\n";
    }
    

    return 0;
}