#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string pesel;
        cin>>pesel;
        int kontrola[5]={7, 9, 1, 3, 1};

        int kontrolna=73;

        pesel.erase(0, 6);
        int suma=0;
        int ilosc=0;

        for(int j=0; j<pesel.size(); j++){

            if(pesel[j]=='?') ilosc++;
            else{
                if(j==0) suma+=(pesel[j]-48)*kontrola[j];
                else if(j==1) suma+=(pesel[j]-48)*kontrola[j];
                else if(j==2) suma+=(pesel[j]-48)*kontrola[j];
                else if(j==3) suma+=(pesel[j]-48)*kontrola[j];
                else if(j==4) suma+=(pesel[j]-48)*kontrola[j];
            }
             
        }

        if(ilosc==0 || ilosc==1){
            cout<<"1\n";
            return 0;
        }

        suma+=kontrolna;

        suma=10-suma%10;
        //cout<<suma;

        








        



    }
    return 0;
}