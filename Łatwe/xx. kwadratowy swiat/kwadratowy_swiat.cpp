#include <iostream>
#include <map>

using namespace std;

int main(){

    map <int, int> x;
    map <int, int> y;

    for(int i=1; i<=8; i++){

        int liczba;
        cin>>liczba;

        if(i%2 == 1){
            x[liczba]+=1;
        }
        else{
            y[liczba]+=1;
        }

    }

    bool test=true;

    for(auto it=x.begin(); it != x.end(); it++){

        if(it->second % 2 != 0){
            test=false;
            break;
        }

    }

    if(test==false) cout<<"Nie\n";
    else{
        for(auto it=y.begin(); it != y.end(); it++){

            if(it->second % 2 != 0){
                test=false;
                break;
            }

        }
        if(test==false) cout<<"Nie\n";
        else cout<<"Tak\n";
    }

    return 0;
}