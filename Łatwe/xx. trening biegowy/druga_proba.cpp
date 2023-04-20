#include <iostream>
#include <math.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){
        double m;
        long hh, mm, ss;
        char sign;
        cin>>m>>hh>>sign>>mm>>sign>>ss;

        long time=hh*3600+mm*60+ss;

        m/=1000;
        double pace = double (time)/m;
        int resm=pace/60;
        int ress = round((pace-resm*60));

        if(ress>=60){
            resm+=ress/60;
            ress%=60;
        }
        cout<<resm<<":";
        if(ress<10){
            cout<<"0";
        }
        cout<<ress<<"\n";




    }
    return 0;
}