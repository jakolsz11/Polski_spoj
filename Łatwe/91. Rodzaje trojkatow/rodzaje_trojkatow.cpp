#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a, b, c, t;

    while(cin>>a>>b>>c){

        if(a>b) swap(a,b);
        if(b>c) swap(b, c);

        if(a+b<=c) cout<<"brak\n";
        else if(hypot(a, b)==c) cout<<"prostokatny\n";
        else if(hypot(a, b)<c) cout<<"rozwartokatny\n";
        else if(hypot(a, b)>c) cout<<"ostrokatny\n";

    }
    return 0;
}