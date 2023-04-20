#include <iostream>

using namespace std;

int main(){

    char tab[26][26];

    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){

            if(i+j>=26){
                tab[i][j]=(i+j)%26+65;
            } 
            else tab[i][j]=i+j+65;

        }
    }

    for(int i=0; i<26; i++){
        for(int j=0; j<26; j++){

            cout<<tab[i][j]<<" ";

        }
        cout<<"\n";
    }

    return 0;
}