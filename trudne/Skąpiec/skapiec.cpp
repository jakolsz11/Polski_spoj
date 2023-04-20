#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, holes, i, j, k;
    long double min=9e18, a, b, c, p, R;
    cin>>tests;

    while(tests--){

        cin>>holes;
        min=9e18;
        long double *x = new long double[holes];
        long double *y = new long double[holes];

        cin>>x[0]>>y[0];
        for(i=1; i<holes; i++){
            cin>>x[i]>>y[i];

            if((x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]) < min){
                min=(x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]);
                j=i;
            }

        }

        min = 9e18;

        a=(x[j]-x[0])*(x[j]-x[0])+(y[j]-y[0])*(y[j]-y[0]);

        for(i=1; i<holes; i++){

            if(i==j) continue;

            b=(x[i]-x[0])*(x[i]-x[0])+(y[i]-y[0])*(y[i]-y[0]);
            c=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            R=b*c/(4*a*b-(a+b-c)*(a+b-c));
            if(R<min){
                min=R;
                k=i;
            }
        }

        cout<<"1 "<<j+1<<" "<<k+1<<"\n";        

        delete [] x;
        delete [] y;
    }
    return 0;
}