#include <iostream>
#include <string>

using namespace std;

string wyjscie;

int wpis(int godzina[]){

    string zmienna;

    if(godzina[0]<10){
       wyjscie.push_back('0'); 
    }

    zmienna=to_string(godzina[0]);
    wyjscie.append(zmienna);

    
    wyjscie.push_back(':');

    if(godzina[1]<10){
       wyjscie.push_back('0'); 
    }

    zmienna=to_string(godzina[1]);
    wyjscie.append(zmienna);

    wyjscie.push_back(',');

    return 0;
}

int main(){

    string pierwsza_lekcja;
    cin>>pierwsza_lekcja;

    int godzina[2];

    godzina[0]=stoi(pierwsza_lekcja.substr(0, 2));
    godzina[1]=stoi(pierwsza_lekcja.substr(3, 2));

    //cout<<godzina[0]<<":"<<godzina[1]<<endl;
    wpis(godzina);

    godzina[1]+=45;
    if(godzina[1]>=60){
        int ilosc=godzina[1]/60;
        godzina[1]%=60;
        godzina[0]+=ilosc;
        if(godzina[0]==24) godzina[0]=00;
    }
    
    //cout<<godzina[0]<<":"<<godzina[1]<<endl;
    wpis(godzina);

    int przerwa;

    while(cin>>przerwa){

        godzina[1]+=przerwa;
        if(godzina[1]>=60){
            int ilosc=godzina[1]/60;
            godzina[1]%=60;
            godzina[0]+=ilosc;
            if(godzina[0]>=24) godzina[0]%=24;
        }

        //cout<<godzina[0]<<":"<<godzina[1]<<endl;
        wpis(godzina);

        godzina[1]+=45;
        if(godzina[1]>=60){
            int ilosc=godzina[1]/60;
            godzina[1]%=60;
            godzina[0]+=ilosc;
            if(godzina[0]>=24) godzina[0]%=24; 
        }

        //cout<<godzina[0]<<":"<<godzina[1]<<endl;
        wpis(godzina);
    
    }

    wyjscie.pop_back();

    cout<<wyjscie;


    return 0;
}