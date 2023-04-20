#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    string org[testy];
    string so[testy];
    map <string, int> ile;

    for(int i=0; i<testy; i++){

        string nazwa;
        cin>>nazwa;
        org[i]=nazwa;
        sort(nazwa.begin(), nazwa.end());
        so[i]=nazwa;
        ile[nazwa]+=1;

    }

    int max=0;
    string grupa;

    for(auto it=ile.begin(); it != ile.end(); it++){

        if(it->second > max){
            grupa.clear();
            max=it->second;
            grupa=it->first;
        }
        
    }

    for(int i=0; i<testy; i++){

        if(so[i]==grupa) cout<<org[i]<<"\n";

    }

    return 0;
}