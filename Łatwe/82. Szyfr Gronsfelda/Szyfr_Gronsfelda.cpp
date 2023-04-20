#include <iostream>

using namespace std;

int main(){

    string komenda;
    cin>>komenda;

    string kod;
    cin>>kod;
    int nr=0;

    while(kod[nr] == '0'){
        nr++;
    }

    if(nr != 0 && nr != kod.length()){
        kod.erase(0, nr);
    }

    string do_zaszyfrowania;
    cin>>do_zaszyfrowania;

    if(komenda=="SZYFRUJ"){
        
        for(int i=0; i<do_zaszyfrowania.length(); i++){

            do_zaszyfrowania[i]+=kod[i%kod.length()]-48;
            //cout<<kod[i%kod.length()];
            //cout<<do_zaszyfrowania[i];
            if(do_zaszyfrowania[i]>90){

                do_zaszyfrowania[i] = do_zaszyfrowania[i] - 26; 
            }

        }

        cout<<do_zaszyfrowania;

    }

    if(komenda=="DESZYFRUJ"){
        

        for(int i=0; i<do_zaszyfrowania.length(); i++){

            do_zaszyfrowania[i]-=kod[i%kod.length()]-48;
            //cout<<kod[i%kod.length()];
            //cout<<do_zaszyfrowania[i];
            if(do_zaszyfrowania[i]<65){

                do_zaszyfrowania[i] = do_zaszyfrowania[i] +26; 
            }

        }

        cout<<do_zaszyfrowania;

    }
    return 0;
}