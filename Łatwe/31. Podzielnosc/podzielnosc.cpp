#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    int n, x, y;

    for(int i=0; i<ile; i++){
        
        cin>>n>>x>>y;
        int liczba=x;
        while(liczba<n){
            
            if(liczba%y != 0) cout<<liczba<<" ";
            liczba+=x;
        }

        cout<<"\n";

    }
    return 0;
}