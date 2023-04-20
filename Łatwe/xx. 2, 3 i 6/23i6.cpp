#include <iostream>

using namespace std;

int main(){

    int lewa, prawa;
    cin>>lewa>>prawa;

    for(int i=lewa; i<=prawa; i++){

        if(i%2 == 0 && i%3 == 0) cout<<"ab";
        else if(i%2 == 0 && i%3 != 0) cout<<"a";
        else if(i%2 != 0 && i%3 == 0) cout<<"b";
        
    }

    return 0;
}