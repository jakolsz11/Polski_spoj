#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    cin>>a>>b>>c;

    if(c==33) cout<<"WRACAJ";
    else{
        if(a<b) cout<<"W LEWO";
        else if(b<a) cout<<"W PRAWO";
    }
    
    return 0;
}