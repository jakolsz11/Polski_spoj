#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        int a, b;
        cin>>a>>b;

        float procent;

        procent=100-100*float(a)/100;
        procent-=(procent * float(b)/100);
        procent=100-procent;
        cout<<setprecision(2)<<fixed<<procent;

    }
    return 0;
}