#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int NWD(int a, int b){

    int pom;

    while(b != 0){
        pom=b;
        b=a%b;
        a=pom;
    }

    return a;
}

bool compare(int a, int b){

    int nwd1=NWD(a, 1260);
    int nwd2=NWD(b, 1260);

    if(nwd1 == nwd2) return a<b;

    else return nwd1>nwd2;

}



int main(){

    int n;
    cin>>n;
    vector <int> a;
    a.resize(n);

    for(int i=0; i<n; i++){

        cin>>a[i];

    }

    sort(a.begin(), a.end(), compare);

    for(int i: a){
        cout<<i<<" ";
    }

    cout<<"\n";


    return 0;
}