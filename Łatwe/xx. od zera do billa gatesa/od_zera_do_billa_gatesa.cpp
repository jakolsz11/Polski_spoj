#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool rever(long long a, long long b){

    return a>b;

}

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){

        long long n, k;
        cin>>n>>k;

        vector <long long> numbers;

        for(long long i=0; i<n; i++){

            long long num;
            cin>>num;
            numbers.push_back(num);

        }

        sort(numbers.begin(), numbers.end(), rever);

        long long result=0;

        for(long long i=1; i<=n; i++){

            if(i%k==0) result+=numbers[i-1];

        }

        cout<<result<<"\n";

    }
    return 0;
}