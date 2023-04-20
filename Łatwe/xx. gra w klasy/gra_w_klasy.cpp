#include <iostream>
#include <unordered_map>

using namespace std;

#define MOD 1000000009

unordered_map<long long, long long> memo;

long long calc(long long n){
    if(n == 0) return 1;
    else if(n < 0) return 0;
    else{
        if(memo.find(n) != memo.end()) {
            return memo[n];
        } else {
            memo[n] = (calc(n-1) + calc(n-2) + calc(n-3))%MOD;
            return memo[n];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long tests, n;
    cin >> tests;

    while(tests--){
        cin >> n;
        cout << calc(n-1)%MOD << "\n";
    }

    return 0;
}