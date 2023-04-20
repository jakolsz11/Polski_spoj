#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float Ox, Oy, r;
    cin>>Ox>>Oy>>r;

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        float x, y, d;
        cin>>x>>y;

        d=sqrt(pow((Ox-x), 2) + pow((Oy-y), 2));

        if(d<r) cout<<"I"<<endl;
        else if(d==r) cout<<"E"<<endl;
        else cout<<"O"<<endl;

    }
    return 0;
}