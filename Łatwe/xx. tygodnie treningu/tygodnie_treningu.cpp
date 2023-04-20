#include <iostream>
#include <map>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    map<string, int> dni;
    string dzien;

    for(int i=0; i<testy; i++){

        
        cin>>dzien;
        dni[dzien]+=1;
    }

    int max=0;

    for(auto it=dni.cbegin(); it != dni.cend(); it++){

        if(it->second>max) max=it->second;
        

    }

    
    cout<<max<<" "<<testy<<"\n";

    return 0;
}