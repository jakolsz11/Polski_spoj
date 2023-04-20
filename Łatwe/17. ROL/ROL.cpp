#include <iostream>
#include <math.h>

using namespace std;

int petle;

int main(){

    cin>>petle;
    

    for(int i=0; i<petle; i++){

        int ile;
        cin>>ile;
        int tab[ile];

        for(int i=0; i<ile; i++){
            cin>>tab[i];
        }
        for(int i=1; i<ile; i++){
            cout<<tab[i]<<" ";
        }
    
        cout<<tab[0]<<" ";
        cout<<"\n";
        
    }
    return 0;
}