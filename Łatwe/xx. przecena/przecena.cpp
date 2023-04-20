#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        double a, b;
        cin>>a>>b;

        double procent=0;

        procent=100-100*a/100;
        procent-=(procent * b/100);
        procent=100-procent;
        cout<<setprecision(2)<<fixed<<procent<<endl;

    }
    return 0;
}