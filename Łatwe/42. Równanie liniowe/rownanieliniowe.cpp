#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    
    float a, b, c, x;
    cin>>a>>b>>c;

    if(a==0 && b==c) cout<<"NWR"<<endl;
    else if(a==0 && b != c) cout<<"BR"<<endl;
    else{

        
        x=(c-b)/a;
        
        cout<<fixed<<setprecision(2)<<x<<endl;
    }

    return 0;
}