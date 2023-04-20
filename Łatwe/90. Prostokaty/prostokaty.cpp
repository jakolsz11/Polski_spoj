#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int a1, a2, b1, b2;
        cin>>a1>>a2>>b1>>b2;

        if(a1<a2) swap(a1, a2);
        if(b1<b2) swap(b1, b2);

        if(a1>b1 && a2>b2) cout<<"TAK"<<endl;
        else if(a1<=b1 && a2<=b2) cout<<"NIE"<<endl;
        else{

            const double d1=hypot(a1, a2);
            const double d2=hypot(b1, b2);

            if(d1 <= d2) cout<<"NIE\n";
            else{

                const double a=(0.5*a1 - sqrt(pow(0.5*d2, 2)-
                    pow(0.5*a2, 2)));

                const double b=(0.5*a2 - sqrt(pow(0.5*d2, 2)-
                    pow(0.5*a1, 2)));

                const double c=hypot(a, b);

                if(c>b2) cout<<"TAK\n";
                else cout<<"NIE\n";
                
            }
        }


    }
    return 0;
}