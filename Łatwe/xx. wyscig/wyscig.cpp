#include <iostream>

using namespace std;

long long NWD(long long a, long long b){

    if(b==0) return a;
    else return NWD(b, a%b);

}

long long NWW(long long a, long long b){

    return (a*b)/NWD(a, b);

}

int main(){

    ios_base::sync_with_stdio(false);
    long long testy;
    cin>>testy;

    long long liczba, max;
    cin>>liczba;
    max=liczba;

    for(long long i=0; i<testy-1; i++){

        cin>>liczba;
        max=NWW(max, liczba);

    }

    cout<<max<<"\n";

    return 0;
}