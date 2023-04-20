#include <iostream>
#include <math.h>

using namespace std;

long long ToDec(int a, string s){

    long long savePow=1;
    long long sum=s[s.size()-1]-48;
    long long j=0;

    for(int i=s.size()-2; i>=0; i--){
        savePow*=a;
        savePow%=1010101;
        sum+=(s[i]-48)*savePow;
        j++;
        sum%=1010101;
    }

    return sum;


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin>>tests;

    while(tests--){

        int system;
        string number;

        cin>>system>>number;

        cout<<ToDec(system, number)<<"\n";

    }
    return 0;
}