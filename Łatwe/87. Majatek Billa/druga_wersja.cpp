#include <iostream>

using namespace std;

int pow(int u, int s, int d){
    
    u %= d;
    if(u==0) return 0;

    int result=1;
    while(s>0){
        if(s % 2 == 1){
            result = result * u % d;
        }
        s /= 2;
        u = u * u % d;
    }

    return result;
}

int main(){

    int u, s, d;

    while(cin>>u>>s>>d){

        if(u==0 && s==0 && d==0) break;
        cout<<pow(u, s, d)<<endl;
    }


    return 0;
}