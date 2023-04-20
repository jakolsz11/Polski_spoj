#include <iostream>

using namespace std;

int main(){

    
    int tab[100];
    int n, i=0;

    while(cin>>n){
        
        tab[i]=n;
        i++;

    }
    
    for(int k=i-1; k>=0; k--){
        cout<<tab[k]<<" ";
    }

    return 0;
}