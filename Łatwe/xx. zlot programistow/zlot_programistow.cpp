#include <iostream>
#include <map>
#include <math.h>

using namespace std;

int nwd(int a, int b){

    int pom;

    while(b!=0){
        pom=b;
        b=a%b;
        a=pom;
    }

    return a;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x, y;

    map <pair <int, int>, bool> rezerwacja;

    pair <int, int> para;
    
    cin>>t;

    while(t--){

        cin>>x>>y;

        int tmp=nwd(abs(x), abs(y));
        para=make_pair(x, y);

        if(tmp != 1 || rezerwacja[para]){
            cout<<"NIE\n";
        }
        else{
            cout<<"TAK\n";
            rezerwacja[para]=true;
        }


    }
    return 0;
}