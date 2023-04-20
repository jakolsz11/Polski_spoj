#include <iostream>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        long n;
        cin>>n;

        unsigned long long wynik=0;

        wynik=(n*(n+1)*(2*n+1))/6;
        wynik%=1000007;

        cout<<wynik<<"\n";

    }

    return 0;
}