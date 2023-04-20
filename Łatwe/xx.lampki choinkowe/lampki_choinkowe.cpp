#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    cin>>a>>b>>c;
    int plus=0;

    int r=max(a, b)-min(a, b);
    if(c>=r){
        plus=c-r;
        if(plus % 2 != 0) plus+=1;
    }
    
    int wynik=2*min(a, b)-plus;

    cout<<wynik;

    return 0;
}