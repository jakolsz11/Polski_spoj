#include <iostream>
#include <list>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    list <int> result;
    int tests, k, n;
    cin>>tests;

    while(tests--){


        k=9;
        cin>>n;

        if(n==0) cout<<"10\n";
        else if(n<10) cout<<n<<"\n";
        else{
            while(k>1 && n>1){
                while(n%k==0){
                    result.push_front(k);
                    n/=k;
                }
                k--;
            }
            if(n>1) cout<<"NIE\n";
            else{
                for(auto it=result.begin(); it != result.end(); it++){
                    cout<<*it;
                }
                cout<<"\n";
            }
            result.clear();
        }

    }

    return 0;
}