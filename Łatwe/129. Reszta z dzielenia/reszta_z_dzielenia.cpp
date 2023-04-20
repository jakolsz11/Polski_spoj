#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int a, b;
        cin>>a>>b;

        if(a>0 || a % b == 0){
            cout<<a%b<<"\n";
        }
        else if(b<0){
            cout<<a+(a/-b -1)*b<<"\n";
        }
        else if(b>0){
            cout<<a-(a/b - 1)*b<<"\n";
        }


    }
    return 0;
}