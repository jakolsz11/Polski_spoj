#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d, n;
    bool res = true;
    unordered_set <int> numbers;
    
    while(cin>>d>>n){

        vector <int> tab(n+1);
        
        numbers.insert(d);

        for(int i=0; i<n; i++){
            cin>>tab[i];            
            numbers.insert(tab[i]);
        }

        tab[n]=d;

        if(n==d-1) cout<<"Tak\n";
        else{

            res=true;

            for(auto it=tab.begin(); it != tab.end(); it++){
                for(auto j=tab.begin(); j<it; j++){
                    numbers.insert(*it-*j); 
                    if(numbers.size()==d){
                        res=false;
                        break;
                    }
                }
                if(res==false) break;
            }

            if(res==false){
                cout<<"Tak\n";
            }
            else cout<<"Nie\n";

        }
        numbers.clear();

    }
    return 0;
}