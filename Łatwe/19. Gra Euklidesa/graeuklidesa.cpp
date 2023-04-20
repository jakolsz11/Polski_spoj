#include <iostream>

using namespace std;

int mniejsza(int a, int b){

    if(a != b){
        if(a<b) b=b-a;
        else a=a-b;
        mniejsza(a, b);
    }
    else{
        int wynik=a+b;
        return wynik;
    } 
}

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        int a, b;
        cin>>a>>b;

        cout<<mniejsza(a, b)<<endl;

    }
    return 0;
}