#include <iostream>

using namespace std;

int main(){

    long rok;
    string ulub;
    cin>>ulub>>rok;

    long ost;
    ost=ulub.back()-48;
    
    ost*=2;
    ost+=5;
    ost*=50;
    ost+=1771;
    ost-=rok;

    long pomoc=ost;

    ost/=100;
    ost*=100;

    cout<<pomoc-ost;

    return 0;
}