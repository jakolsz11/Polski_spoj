#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    

    for(int i=0; i<testy; i++){

        ios_base::sync_with_stdio(false);
        int liczba;
        cin>>liczba;

        int poczatek[4]={1, 4, 5, 9};
        int koniec[4]={6, 0, 0, 0};

        int suma=0;

        while(suma != liczba){

            suma=0;

            if(poczatek[3] != 9) poczatek[3]+=1;
            else{
                poczatek[3]=0;
                if(poczatek[2] != 5) poczatek[2]+=1;
                else{
                    poczatek[2]=0;
                    if(poczatek[1] != 9) poczatek[1]+=1;
                    else{
                        poczatek[1]=0;
                        poczatek[0]+=1;
                    }
                }
            }

            for(int j=0; j<4; j++){

                if(poczatek[j]==0) suma+=6;
                else if(poczatek[j]==1) suma+=2;
                else if(poczatek[j]==2) suma+=5;
                else if(poczatek[j]==3) suma+=5;
                else if(poczatek[j]==4) suma+=4;
                else if(poczatek[j]==5) suma+=5;
                else if(poczatek[j]==6) suma+=6;
                else if(poczatek[j]==7) suma+=3;
                else if(poczatek[j]==8) suma+=7;
                else suma+=6;

            }

        
            

        }

        suma=0;


        while(suma != liczba){

            suma=0;

            if(koniec[3] != 0) koniec[3]-=1;
            else{
                koniec[3]=9;
                if(koniec[2] != 0) koniec[2]-=1;
                else{
                    koniec[2]=5;
                    if(koniec[1] != 0) koniec[1]-=1;
                    else{
                        koniec[1]=9;
                        koniec[0]-=1;
                    }
                }
            }

            for(int j=0; j<4; j++){

                if(koniec[j]==0) suma+=6;
                else if(koniec[j]==1) suma+=2;
                else if(koniec[j]==2) suma+=5;
                else if(koniec[j]==3) suma+=5;
                else if(koniec[j]==4) suma+=4;
                else if(koniec[j]==5) suma+=5;
                else if(koniec[j]==6) suma+=6;
                else if(koniec[j]==7) suma+=3;
                else if(koniec[j]==8) suma+=7;
                else suma+=6;

            }

        
            

        }

        cout<<poczatek[0]<<poczatek[1]<<":"<<poczatek[2]<<poczatek[3]<<" "<<koniec[0]<<koniec[1]<<":"<<koniec[2]<<koniec[3]<<"\n";

    }

    return 0;
}