#include <iostream>
#include <cmath>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testy;
    cin>>testy;
    int pole;

    while(testy--){

        cin>>pole;
        int a = sqrt(pole);
        while(pole%a) a--;
        int b=pole/a;

        cout<<2*a+2*b<<"\n";

    }
    return 0;
}