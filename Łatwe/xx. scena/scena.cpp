#include <iostream>

using namespace std;

int main(){

    float a, b, testy;
    cin>>a>>b>>testy;
    int wynik=0;

    for(int i=0; i<testy; i++){

        float x, y;
        cin>>x>>y;

        if(a>=x && b>=y){

            float skok=b/a;

            if(x*skok==y) wynik++;

        }

    }

    cout<<wynik;

    return 0;
}