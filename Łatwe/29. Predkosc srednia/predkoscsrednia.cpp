#include <iostream>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){
        int a, b;
        cin>>a>>b;

        float predkosc;

        predkosc=(2*a*b)/(a+b);
        cout<<predkosc<<endl;

    }
    return 0;
}