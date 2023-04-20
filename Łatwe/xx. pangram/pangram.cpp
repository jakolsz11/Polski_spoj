#include <iostream>
#include <map>

using namespace std;

int main(){

    string tekst;
    cin>>tekst;

    map<char, int> litery;

    for(int i=0; i<tekst.length(); i++){

        char symbol=tekst[i];
        litery[symbol]+=1;

    }

    int ilosc=0, poprzednia=0;
    bool test=true;
    int ile=0;

    for(auto it=litery.rbegin(); it != litery.rend(); it++){

        if(ile == 0) ilosc=it->second;
        else{
            poprzednia=it->second;

            if(ilosc != poprzednia) test=false;
        }
        ile++;     

    }
    
    if(ile != 26) cout<<"NIE";
    else if(test == false) cout<<"PANGRAM";
    else cout<<"PANGRAM PERFEKCYJNY"; 

    return 0;
}