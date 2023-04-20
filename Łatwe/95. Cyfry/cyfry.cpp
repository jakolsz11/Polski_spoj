/*
wczytuje punkty
sprawdzam czy nie sa zerowe jezeli sa to cout<<"-";
jezeli bierki maja wspolne wspolrzedne dla jednego punktu to moge rozpatrywac V i L
w innym wypadku sprawdzam X

*/

#include <iostream>
#include <math.h>

using namespace std;

int iloczyn_wektorowy(int x1, int y1, int x2, int y2){

    if((x1*y2-x2*y1)>0) return 1;
    else if((x1*y2-x2*y1)<0) return -1;
    else return 2;
}

int main(){

    int testy;
    cin>>testy;
    long long iloczyn=1;
    int zera=0;

    for(int i=0; i<testy; i++){

        double x1, y1, x11, y11, x2, y2, x22, y22;

        cin>>x1>>y1>>x11>>y11>>x2>>y2>>x22>>y22;

        if(x1 == x11 && y1==y11) cout<<"-"<<"\n";
        else if(x2 == x22 && y2==y22) cout<<"-"<<"\n";
        else if(((x1==x2 && y1==y2) && (x11==x22 && y11==y22)) || 
            ((x1==x22 && y1==y22) && (x11==x2 && y11==y2))) cout<<"-"<<"\n";
        else if((x1==x2 && y1==y2) || (x1==x22 && y1==y22) || (x11==x2 && y11==y2)|| (x11==x22 && y11==y22)){

            double d1, d2, d3;

            d1=(x11-x1)*(x11-x1)+(y11-y1)*(y11-y1);
            d2=(x22-x2)*(x22-x2)+(y22-y2)*(y22-y2);
            if(x1==x2 && y1==y2){
                d3=(x22-x11)*(x22-x11)+(y22-y11)*(y22-y11);
            }
            
            else if(x1==x22 && y1==y22){
                d3=(x11-x2)*(x11-x2)+(y11-y2)*(y11-y2);
            }
            
            else if(x11==x2 && y11==y2){
                d3=(x22-x1)*(x22-x1)+(y22-y1)*(y22-y1);
            }
            
            else{
                d3=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
            }

            if(d3 == d1+d2){
                cout<<"L"<<"\n";
                iloczyn*=5;
                zera++;
            } 
            else if( d3 < d1+d2){
                cout<<"V"<<"\n";
                iloczyn*=5;
            } 
            else cout<<"-"<<"\n";
            
            //przekminic z iloczynem wektorowym zeby odnosil sie do polozenia punktow przyklad 2 4 6 6, 2 4 0 4
            //atan rozkminic poniewaz zle zaokragla
        }
        else{

            int dx1, dy1, dx2, dy2;

            dx1=x11-x1;
            dy1=y11-y1;
            dx2=x2-x1;
            dy2=y2-y1;
            int suma=0;

            suma+=iloczyn_wektorowy(dx1, dy1, dx2, dy2);

            dx1=x11-x1;
            dy1=y11-y1;
            dx2=x22-x1;
            dy2=y22-y1;

            suma+=iloczyn_wektorowy(dx1, dy1, dx2, dy2);

            if(suma != 0) cout<<"-"<<"\n";
            else{
                suma=0;
                dx1=x22-x2;
                dy1=y22-y2;
                dx2=x1-x2;
                dy2=y1-y2;

                suma+=iloczyn_wektorowy(dx1, dy1, dx2, dy2);

                dx1=x22-x2;
                dy1=y22-y2;
                dx2=x11-x2;
                dy2=y11-y2;

                suma+=iloczyn_wektorowy(dx1, dy1, dx2, dy2);

                if(suma == 0){
                    cout<<"X"<<"\n";
                    zera++;
                } 
                else cout<<"-"<<"\n";

            }




        }
    }
    cout<<iloczyn;
    for(int i=0; i<zera; i++){
        cout<<"0";
    }
    cout<<"\n";
    return 0;
}