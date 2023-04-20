#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string tekst;
        cin>>tekst;

        int ile=tekst.length();
        long long suma=0;
        int poczatek=65;

        for(int j=0; j<ile; j++){

            int w_lewo=0;
            int w_prawo=0;

            if(tekst[j]>poczatek){
                w_lewo=abs(poczatek-65+91-tekst[j]);
                w_prawo=abs(tekst[j]-poczatek);
                poczatek=tekst[j];
                //cout<<w_lewo<<" "<<w_prawo<<endl;
            }

            else if(tekst[j]<=poczatek){
                w_lewo=abs(poczatek-tekst[j]);
                w_prawo=abs(91-poczatek+tekst[j]-65);
                poczatek=tekst[j];
                //cout<<w_lewo<<" "<<w_prawo<<endl;
            }
            

            suma+=min(w_lewo, w_prawo);


        }

        cout<<suma<<endl;



    }
    return 0;
}