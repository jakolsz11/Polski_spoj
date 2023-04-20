#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    float liczba;
    cin>>liczba;
    liczba*=100;
    int ilosc=0;
    int pomoc=int(liczba);
    int ile=0;
    

    while(pomoc > 0){

        if(pomoc>=500){
            ile=0;
            ilosc+=pomoc/500;
            ile=pomoc/500;
            pomoc-=ile*500;
        }
        else if(pomoc>=200 && pomoc<500){
            ile=0;
            ilosc+=pomoc/200;
            ile=pomoc/200;
            pomoc-=ile*200;
        }
        else if(pomoc>=100 && pomoc<200){
            ile=0;
            ilosc+=pomoc/100;
            ile=pomoc/100;
            pomoc-=ile*100;
        }
        else if(pomoc>=50 && pomoc<100){
            ile=0;
            ilosc+=pomoc/50;
            ile=pomoc/50;
            pomoc-=ile*50;
        }
        else if(pomoc>=20 && pomoc<50){
            ile=0;
            ilosc+=pomoc/20;
            ile=pomoc/20;
            pomoc-=ile*20;
        }
        else if(pomoc>=10 && pomoc<20){
            ile=0;
            ilosc+=pomoc/10;
            ile=pomoc/10;
            pomoc-=ile*10;
        }
        else if(pomoc>=5 && pomoc<10){
            ile=0;
            ilosc+=pomoc/5;
            ile=pomoc/5;
            pomoc-=ile*5;
        }
        else if(pomoc>=2 && pomoc<5){
            ile=0;
            ilosc+=pomoc/2;
            ile=pomoc/2;
            pomoc-=ile*2;
        }
        else if(pomoc>=1 && pomoc<2){
            ile=0;
            ilosc+=pomoc/1;
            ile=pomoc/1;
            pomoc-=ile*1;
        }
    }

    cout<<ilosc;

    return 0;
}