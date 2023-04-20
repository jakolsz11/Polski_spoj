#include <iostream>

using namespace std;

int main(){

    int uczniow, zdalnie;
    long suma=0;

    while(cin>>uczniow>>zdalnie){

        suma+=(uczniow-zdalnie);

    }

    cout<<suma<<"\n";

    return 0;
}