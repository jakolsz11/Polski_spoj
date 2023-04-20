#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int liczba;
    int tab[21];

    int wartosci[21];

    for(int i=0; i<21; i++){
        wartosci[i]=i-10;
        tab[i]=0;
    }
    
    while(cin>>liczba){

        tab[liczba+10]+=1;
        
    }

    float maks=0;
    for(int i=0; i<21; i++){
        if(tab[i]>maks) maks=tab[i];
    }

    float mnoznik=30/maks;


    for(int i=0; i<21; i++){
        if(i==0) cout<<wartosci[i]<<":"<<"|";
        if((i>0 && i<10) || i==20) cout<<" "<<wartosci[i]<<":"<<"|";
        if(i>=10 && i<=19) cout<<" "<<" "<<wartosci[i]<<":"<<"|"; 
        
        for(int k=0; k<30; k++){
            if(k<round(tab[i]*mnoznik)) cout<<"*";
            else cout<<" ";
        }
        
        cout<<"|"<<endl;
    }

    
    return 0;
}
