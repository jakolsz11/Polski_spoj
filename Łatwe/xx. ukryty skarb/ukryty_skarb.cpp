#include <iostream>
#include <math.h>

using namespace std;

struct Punkt{
    long x, y;
    void pokaz(){
        cout<<x<<" "<<y<<endl;
    }
};

struct Ogranicznik{
    long polnoc, poludnie=1, zachod=1, wschod;
};

int main(){

    ios_base::sync_with_stdio(0);
    long x, y, t;
    string komunikat; 
    Punkt p;

    cin>>t;

    while(t--){
        cin>>x>>y;
        Ogranicznik granica;
        granica.polnoc=granica.poludnie+y;
        granica.wschod=granica.zachod+x;

        while(true){
            p.x=round(float (granica.zachod+granica.wschod)/2);
            p.y=round(float (granica.polnoc+granica.poludnie)/2);
            p.pokaz();
            cin>>komunikat;
            if(komunikat=="OK") break;
            else if(komunikat=="N") granica.poludnie=p.y+1;
            else if(komunikat=="E") granica.zachod=p.x+1;
            else if(komunikat=="S") granica.polnoc=p.y-1;
            else if(komunikat=="W") granica.wschod=p.x-1;
            else if(komunikat=="NE"){
                granica.zachod=p.x+1;
                granica.poludnie=p.y+1;
            }
            else if(komunikat=="NW"){
                granica.poludnie=p.y+1;
                granica.wschod=p.x-1;
            }
            else if(komunikat=="SE"){
                granica.polnoc=p.y-1;
                granica.zachod=p.x+1;
            }
            else if(komunikat=="SW"){
                granica.polnoc=p.y-1;
                granica.wschod=p.x-1;
            }
        }
    }
    return 0;
}