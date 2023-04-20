#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, r;
    cin>>a>>r;

    int ile;
    cin>>ile;

    int wynik=0;

    for(int i=0; i<ile; i++){

        int x, y;
        cin>>x>>y;

        float odl;
        odl=sqrt(pow(a-x, 2)+pow(0-y, 2));

        if(odl>r) wynik++;
        
    }

    cout<<wynik;

    return 0;
}