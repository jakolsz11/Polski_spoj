#include <iostream>
#include <limits.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    long long tests, a, max_temp=INT_MIN, curr_max=INT_MIN;
    cin>>tests;

    while(tests--){
        cin>>a;
        curr_max=max(a, curr_max+a);
        max_temp=max(max_temp, curr_max);
    }

    if(max_temp<0) cout<<"0";
    else cout<<max_temp;


    return 0;
}