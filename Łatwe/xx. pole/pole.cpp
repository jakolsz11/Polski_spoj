#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

long double kwadratowe(long double b, long double c){

    long double delta=b*b-4*c;

    if(delta==0){
        long double x0=-b/2;
        cout<<setprecision(4)<<fixed<<x0<<"\n";
    } 

    else{
        delta=sqrt(delta);
        long double x1=(-b+delta)/2;
        long double x2=(-b-delta)/2;

        if(x1>x2) cout<<setprecision(4)<<fixed<<x1<<"\n";
        else cout<<setprecision(4)<<fixed<<x2<<"\n";

    }

    return 0;

}

int main(){

    int testy;
    cin>>testy;

    for(int i=0; i<testy; i++){

        long double x, y, a, b;
        cin>>x>>y>>a>>b;

        long double zysk=((100-a)/100)*(x*y);

        zysk=zysk*(100/(100-b));

        //cout<<zysk;

        long double e, f;
        e=x+y;
        f=x*y-zysk;

        kwadratowe(e, f);

        //float wynik=kwadratowe(e, f);

        









    }

    return 0;
}