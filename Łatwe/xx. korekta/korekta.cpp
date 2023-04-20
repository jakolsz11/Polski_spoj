#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int w1, p1, w2, p2, w3, p3, w4, p4;
        cin>>w1>>p1>>w2>>p2>>w3>>p3;

        int ile_gier=w1+p1;
        int wygrane=w1+w2+w3;
        int przegrane=p1+p2+p3;

        w4=(przegrane-wygrane+ile_gier)/2;
        p4=ile_gier-w4;

        cout<<w4<<" "<<p4<<"\n";
        
    }
    return 0;
}