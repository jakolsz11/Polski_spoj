#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false);
    long long a, b, tests;
    cin>>a>>b>>tests;

    long double max=0;
    long long max_x, max_y;

    while(tests--){

        long double x, y;
        cin>>x>>y;

        long double odl=pow((a-x), 2)+pow((b-y), 2);

        if(odl>max){
            max=odl;
            max_x=(long long) (x);
            max_y=(long long) (y);
        }
    }

    cout<<max_x<<" "<<max_y<<"\n"<<setprecision(2)<<fixed<<sqrt(max)<<"\n";

    return 0;
}