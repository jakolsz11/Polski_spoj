#include <iostream>

using namespace std;

int main(){
    
    int ile=0;
    string tekst;

    while(getline(cin, tekst)){

        for(int i=0; i<tekst.length(); i++){

            if(tekst[i]=='?') ile++;

            else if(tekst[i]=='!') ile++;

            else if(tekst[i]=='.'){
                if(tekst[i+1]=='.'){
                    i+=2;
                    ile++;
                }
                else ile++;
            }


        }
        
    }
    cout<<ile;
    
    return 0;
}