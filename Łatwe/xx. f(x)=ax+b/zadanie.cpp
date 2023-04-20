#include <iostream>

using namespace std;

int main(){

    int a, b;
    cin>>a>>b;

    cout<<"f(x)=";

    if(a==0 && b==0) cout<<"0";
    else{

        if(a != 0 && a != 1 && a != -1) cout<<a<<"x";
        else if(a == 1) cout<<"x";
        else if(a == -1) cout<<"-x";

        if(b > 0){
            if(a != 0)cout<<"+"<<b;
            else cout<<b;
        } 

        else if(b<0) cout<<b;
    }

    

    return 0;
}