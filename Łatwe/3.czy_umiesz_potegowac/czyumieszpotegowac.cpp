#include <iostream>

using namespace std;

int ile, a, b, wynik;

int potega(int a, int b){
    if (b==0) return 1;
    else return a*potega(a, b-1);
}

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){
        cin>>a>>b;
        cout<<potega(a, b)%10<<endl;
    }

    return 0;
}