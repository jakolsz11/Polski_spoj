#include <iostream>
#include <string>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        string godzina;
        cin>>godzina;
        int hour;
        int minutes;

        hour=stoi(godzina.substr(0, 2));
        minutes=stoi(godzina.substr(3, 2));

        int uderzenia=0;

        while(hour != 24){

            if(minutes==0){
                
                if(hour>12) uderzenia+=(hour-12);
                else uderzenia+=hour;
                uderzenia++;
                hour++;
                minutes=0;
            }
            else if(minutes>0 && minutes<=30){
                uderzenia++;
                hour++;
                minutes=0;
            }
            else{
                hour++;
                minutes=0;
            }
        }

        cout<<uderzenia<<"\n";

    }
    return 0;
}