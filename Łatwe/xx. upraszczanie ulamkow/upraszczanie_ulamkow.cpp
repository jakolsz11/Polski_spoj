#include <iostream>

using namespace std;

long long NWD(long long a, long long b)
{

    long long pom;

    while (b > 0)
    {

        pom = b;
        b = a % b;
        a = pom;
    }

    return a;
}

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long tests;
    cin>>tests;

    while(tests--){

        long long a, b;
        char znak;

        cin >> a >> znak >> b;

        cout<<max(a, b)/NWD(a, b)<<"\n";

    }


    return 0;
}