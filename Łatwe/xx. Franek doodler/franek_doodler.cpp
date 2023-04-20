#include <iostream>
#include <math.h>

using namespace std;

void results(long long s[], int n){
    for(int i=0; i<=n; i++){

        long long counter=0;
        for(int m=1; m<=sqrt(i+1); m++){
            if((i+1)%m==0) counter+=2;
            if(m==sqrt(i+1)) counter--;
        }
        if(i==0) s[i]=counter;
        else s[i]=(s[i-1]+counter);
        
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long *tab = new long long[n+1];
    long long max=0;

    for(int i=0; i<n; i++){
        cin>>tab[i];
        if(tab[i]>max) max=tab[i];
    }

    long long *res = new long long[max+1];

    results(res, max+1);

    for(int i=0; i<n; i++){
        cout<<res[tab[i]-1]<<"\n";
    }

    delete[] tab;
    delete[] res;
    
    return 0;
}