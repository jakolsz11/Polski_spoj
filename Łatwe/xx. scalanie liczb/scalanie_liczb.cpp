#include <iostream>

using namespace std;

long long scalanie(long long a, long long b){

    long long c=b;
    while(b != 0){
        a*=10;
        b/=10;
    }

    return a+c;

}

int main(){

    long long a, b, c, d;
    cin>>a>>b;
    cin>>c>>d;

    cout<<scalanie(a, b)+scalanie(c, d);

    return 0;
}