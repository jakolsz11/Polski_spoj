#include <iostream>

using namespace std;

long long max(int a[], int b){
    
    long long maxSub=0;
    long long maxEnd=0;
    for(int i=0; i<b; i++){
        maxEnd+=a[i];
        if (maxEnd<0){
            maxEnd=0;
        }
        if (maxSub<maxEnd){
            maxSub=maxEnd;
        }
    }
    return maxSub;
}

int main(){

    int b;
    cin>>b;
    int *tab = new int [b];
    for (int i=0; i<b; i++){
        cin>>tab[i];
    }
    cout<<max(tab, b);
    delete[] tab;
    return 0;
}