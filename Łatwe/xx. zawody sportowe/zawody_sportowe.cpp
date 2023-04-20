#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(); //sprawdzic bez std::
    int tests;
    cin>>tests;
    

    while(tests--){

        int N, M;
        cin>>N>>M;
        long long min=0;
        long long max=0;

        long long a, b;

        for(int i=0; i<N; i++){

            cin>>a>>b;
            min+=a;
            max+=b;

        }

        map <long long, int> friends;
        long long num;

        for(int i=0; i<M; i++){

            cin>>num;
            friends[num]=1;

        }

        long long result=1;

        for(auto it=friends.begin(); it != friends.end(); it++){

            if(it->first > min && it->first <= max) result++;

        }

        cout<<result<<"\n";

        friends.clear();

    }

    return 0;
}