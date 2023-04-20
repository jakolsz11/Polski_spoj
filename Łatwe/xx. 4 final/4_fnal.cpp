#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, event, h, min, s, sleepAfter, time, timeMax=-1, time0=32400, timeEnd=50400;
    string what;
    char x;
    cin>>tests;

    while(tests--){

        cin>>event;
        cin>>h>>x>>min>>x>>s;
        sleepAfter=(h*3600+min*60+s);
        time0=32400;
        timeMax=-1;

        while(event--){
            cin>>h>>x>>min>>x>>s>>what;
            
            if(what == "AC"){
                time = (h*3600+min*60+s)-time0;
                if(time > sleepAfter){
                    time-=sleepAfter;
                    if(time>timeMax) timeMax=time;
                }
                time0=(h*3600+min*60+s);
            }
        }

        time=(timeEnd-time0);
        if(time > sleepAfter){
            time-=sleepAfter;
            if(time>timeMax) timeMax=time;
        }

        if(timeMax==-1) cout<<"0\n";
        else{

            h=timeMax/3600;
            min=(timeMax%3600)/60;
            s=(timeMax%3600)%60;
            cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<min<<":"<<setfill('0')<<setw(2)<<s<<"\n";
        }


    }




    return 0;
}