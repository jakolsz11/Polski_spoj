#include <iostream>
#include <math.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, n, y, x, i, j, m;
    string line;
    cin>>tests;

    while(tests--){

        cin>>n;

        for(i=0; i<pow(3, n-1); i++){
            line.push_back('_');
        }

        cout<<line<<"\n";
        y=pow(3, n-1);
        x=(pow(3, n-2));

        for(i=1; i<n; i++){

            for(j=x; j<y; j+=2*x){

                for(m=j; m<(j+x); m++){
                    line[m]=' ';
                }
            }

            x/=3;
            cout<<line<<"\n";

        }

        cout<<"\n";
        line.clear();

    }
    return 0;
}