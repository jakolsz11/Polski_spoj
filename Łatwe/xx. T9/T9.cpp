#include <iostream>
#include <map>

using namespace std;

//to rozwiazaqnie jest dobre ale za dlugie i nie mam pojecia jak je skrocic

map<char, char> znak{
    {'1', '1'}, {'2', '2'}, {'a', '2'}, {'A', '2'}, {'b', '2'}, {'B', '2'}, {'c', '2'}, {'C', '2'}, 
    {'3', '3'}, {'d', '3'}, {'D', '3'}, {'e', '3'}, {'E', '3'}, {'f', '3'}, {'F', '3'},
    {'4', '4'}, {'g', '4'}, {'G', '4'}, {'h', '4'}, {'H', '4'}, {'i', '4'}, {'I', '4'},
    {'5', '5'}, {'j', '5'}, {'J', '5'}, {'k', '5'}, {'K', '5'}, {'l', '5'}, {'L', '5'},
    {'6', '6'}, {'m', '6'}, {'M', '6'}, {'n', '6'}, {'N', '6'}, {'o', '6'}, {'O', '6'},
    {'7', '7'}, {'p', '7'}, {'P', '7'}, {'q', '7'}, {'Q', '7'}, {'r', '7'}, {'R', '7'}, {'s', '7'}, {'S', '7'},
    {'8', '8'}, {'t', '8'}, {'T', '8'}, {'u', '8'}, {'U', '8'}, {'v', '8'}, {'V', '8'},
    {'9', '9'}, {'w', '9'}, {'W', '9'}, {'x', '9'}, {'X', '9'}, {'y', '9'}, {'Y', '9'}, {'z', '9'}, {'Z', '9'}, {'0', '0'},
};

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string tekst, numer;
        cin>>tekst>>numer;

        if(tekst.length() != numer.length()) cout<<"NIE\n";
        else{

            bool test=true;

            for(int j=0; j<tekst.length(); j++){

                if(numer[j]=='*' && tekst[j]>='0' && tekst[j]<='9') continue;
                else if(znak[tekst[j]] == numer[j]) continue;
                else{
                    cout<<"NIE\n";
                    test=false;
                    break;
                }


            }

            if(test==true) cout<<"TAK - "<<tekst;
        }




    }
    return 0;
}