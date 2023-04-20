#include <iostream>

using namespace std;

int newton(int a, int b){

    long long gora=1, dol=1;
    long long zwrot;

    if(a<=b/2){
        
        for(int i=0; i<a; i++){
            gora*=(b-i);
            dol*=(i+1);
            if(gora/(i+1) == 0) zwrot=(gora/(i+1))/(dol/(i+1));
            else zwrot=gora/dol;
        }

        return zwrot;
    }
    else{
        
        for(int i=0; i<(b-a); i++){
            gora*=(b-i);
            dol*=(i+1);
            if(gora/(i+1) == 0) zwrot=(gora/(i+1))/(dol/(i+1));
            else zwrot=gora/dol;
        }

        return zwrot;
    }

}

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string tekst;
        cin>>tekst;

        int dlugosc=tekst.length();

        int tab[26]={0};

        for(int j=0; j<dlugosc; j++){
            tab[tekst[j]-97]+=1;  
        }

        /*for(int j=0; j<26; j++){
            cout<<tab[j]<<" ";  
        }*/

        long long wynik=1;

        for(int j=0; j<26; j++){
            if(tab[j] != 0){
                wynik*=newton(tab[j], dlugosc);
                //cout<<wynik<<endl;
                dlugosc-=tab[j];
                if(dlugosc == 1) break;
            } 
        }

        cout<<wynik<<endl;

    }
    return 0;
}