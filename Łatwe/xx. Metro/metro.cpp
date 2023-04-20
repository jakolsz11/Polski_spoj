#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        double r, c, w, h;
        cin>>r>>c>>w>>h;

        double x=sqrt(r*r-c*c);

        if(2*w<2*c){
            if(h+w<r+x) cout<<"TAK\n";
            else cout<<"NIE\n";
        }
        else cout<<"NIE\n";

    }
    return 0;
}