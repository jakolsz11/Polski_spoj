#include <iostream>

using namespace std;

int date(int d, int m){
    if(d<10) cout<<"0"<<d<<".";
    else cout<<d<<".";

    if(m<9) cout<<"0"<<m<<".2019";
    else cout<<m<<".2019";

    return 0;
}

int main(){

    int testy;
    cin>>testy;

    int dmin=0, mmin=0;
    int dmax=0, mmax=0;

    for(int i=0; i<testy; i++){
        string date1, date2;
        cin>>date1>>date2;

        int min1, min2, max1, max2;

        min1=stoi(date1.substr(0, 2));
        min2=stoi(date2.substr(0, 2));
        max1=stoi(date1.substr(3, 2));
        max2=stoi(date2.substr(3, 2));


        if(i==0){
            dmin=min1;
            dmax=min2;
            mmin=max1;
            mmax=max2;
        }
        else{
            if(max1>mmin){
                mmin=max1;
                dmin=min1;
            }
            else if(max1==mmin){
                if(min1>dmin) dmin=min1;
            }


            if(max2<mmax){
                mmax=max2;
                dmax=min2;
            }
            else if(max2==mmax){
                if(min2<dmax) dmax=min2;
            }
        }
        

    }

    if(dmin==dmax && mmin==mmax){
        date(dmin, mmin);
    }
    else cout<<"Jak Marcin zgubi buty do biegania";

    //cout<<dmin<<":"<<mmin<<", "<<dmax<<":"<<mmax;






    return 0;
}