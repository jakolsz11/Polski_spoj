#include <iostream>
#include <math.h>


using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long sum, p;
    int t;

    cin>>t;

    while(t--){
        cin>>p;
        sum=0;
        for(long double i=1; i<=floor(sqrt(p)); i++){
            sum+=p/i;
        }
        sum*=2;
        sum-=pow(floor(sqrt(p)), 2);
        cout<<sum<<"\n";
    }

    return 0;
}