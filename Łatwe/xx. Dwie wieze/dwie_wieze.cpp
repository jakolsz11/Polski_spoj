#include <iostream>
#include <string>

using namespace std;

int main(){

    string lewa, prawa;

    cin>>lewa>>prawa;

    string lewa1, prawa1;
    string lewa2, prawa2;

    lewa1=lewa.substr(0, 1);
    prawa1=prawa.substr(0, 1);

    lewa2=lewa.substr(1, 1);
    prawa2=prawa.substr(1, 1);

    if(lewa1 == prawa1 || lewa2 == prawa2) cout<<"TAK\n";
    else cout<<"NIE\n";




    return 0;
}