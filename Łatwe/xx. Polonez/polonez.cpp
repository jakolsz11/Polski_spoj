#include <iostream>
#include <string>

using namespace std;

int main(){

    int a, b, c;
    cin>>a>>b>>c;
    int kobiety=0, mezczyzni=0;

    for(int i=0; i<(a+b+c); i++){

        string imie;
        cin>>imie;
        if(imie[imie.length()-1] == 'a') kobiety++;
        else mezczyzni++;

    }

    if(mezczyzni>=kobiety) cout<<kobiety<<"\n";
    else cout<<mezczyzni<<"\n";




    return 0;
}