#include <iostream>

using namespace std;

long long NWD(long long a, long long b){

    if(b == 0) return a;
    return NWD(b, a%b);
}

long long NWW(long long a, long long b){

    return (a*b)/NWD(a, b); 
}

int main(){

    ios_base::sync_with_stdio(false);
    long long a, b, c, s;
    cin>>a>>b>>c>>s;

    s*=100;

    long long wynik;

    wynik=s/NWW(NWW(a,b), c);

    cout<<wynik<<"\n";

    return 0;
}