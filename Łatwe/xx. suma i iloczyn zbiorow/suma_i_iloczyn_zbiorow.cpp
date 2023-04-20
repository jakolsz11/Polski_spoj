#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int ile1, ile2;
    cin>>ile1;
    int tab1[ile1];
    

    for(int i=0; i<ile1; i++){
        
        cin>>tab1[i];

    }

    cin>>ile2;
    int tab2[ile2];
    for(int i=0; i<ile2; i++){
        
        cin>>tab2[i];

    }

    int wszystkie[ile1+ile2];

    for(int i=0; i<ile1; i++){
        wszystkie[i]=tab1[i];
    }
    for(int i=ile1; i<ile1+ile2; i++){
        wszystkie[i]=tab2[i-ile1];
    }

    sort(wszystkie, wszystkie+(ile1+ile2));

    for(int i=0; i<ile1+ile2; i++){

        if(i<ile1+ile2-1){
            if(wszystkie[i] != wszystkie[i+1]){
                cout<<wszystkie[i]<<" ";
            }
        }
        else cout<<wszystkie[i];

        
    }

    cout<<"\n";

    bool test=true;

    for(int i=0; i<ile1+ile2-1; i++){

        
        if(wszystkie[i] == wszystkie[i+1]){
            cout<<wszystkie[i]<<" ";
            test=false;
        }
        

    }

    if(test==true) cout<<"NULL\n";
    else cout<<"\n";

    return 0;
}