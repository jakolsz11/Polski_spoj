#include <iostream>

using namespace std;

int main(){

    float km;
    cin>>km;

    float mile=km/1.609344;

    if(mile<300) cout<<"NIE";
    else if(mile>=300 && mile<500) cout<<"SPRAWDZIMY TWOJE OBECNE BUTY";
    else if(mile>=500) cout<<"TAK";

    return 0;
}