#include <iostream>

using namespace std;

long long mod = 1010101011;

long long cube_sum(long long n) {
    return ((n * (n + 1) / 2) % mod) * ((n * (n + 1) / 2) % mod) % mod;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    while(cin>>a>>b){
        long long result = (cube_sum(b) - (a > 1 ? cube_sum(a - 1) : 0) + mod) % mod;
        cout<<result<<"\n";
    }
    
    return 0;
}