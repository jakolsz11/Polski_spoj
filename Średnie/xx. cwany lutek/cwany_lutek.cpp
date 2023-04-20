#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, n, k;
    cin>>tests;

    while(tests--){

        cin>>n>>k;
        puts((n|k) == n ? "N" : "P");

    }

    return 0;
}