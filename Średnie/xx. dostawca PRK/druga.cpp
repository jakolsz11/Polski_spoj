#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    int tests;
    cin>>tests;
    int *X = new int [tests];
    int *Y = new int [tests];
    int sum_x=0;
    int sum_y=0;
    long result=0;

    for(int i=0; i<tests; i++){

        cin>>X[i]>>Y[i];
        sum_x+=X[i];
        sum_y+=Y[i];

    }

    sort(X, X+tests);
    sort(Y, Y+tests);

    for(int i=0; i<tests-1; i++){
        result+=sum_x-(tests-i)*X[i];
        sum_x-=X[i];
    }

    for(int i=0; i<tests-1; i++){
        result+=sum_y-(tests-i)*Y[i];
        sum_y-=Y[i];
    }
    
    cout<<result;

    delete [] X;
    delete [] Y;

    return 0;
}