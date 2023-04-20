#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    //int wyniki[n];

    for(int i=0; i<n; i++){

        string linia;
        cin>>linia;
        //cout<<linia<<"\n";
        long long wynik=1;
        const long long liczba=1000000007;

        for(long j=0; j<linia.length(); j++){
            
            if(j==0 && linia[j]=='p' && linia.length() != 1){
                wynik=4;
                //cout<<"xxx";
            } 
            else wynik*=5;
            
            if(wynik>=liczba) wynik%=liczba;
    
        }

        cout<<wynik<<"\n";
        //wyniki[i]=wynik;

    }

    /*for(int i=0; i<n; i++){
        cout<<wyniki[i]<<"\n";
    }*/

    return 0;
}