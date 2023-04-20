#include <iostream>
#include <map>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map <int, int> numbers;

    int tests;
    cin>>tests;

    while(tests--){
        int n;
        cin>>n;
        numbers[n]++;
    }

    int q;
    cin>>q;

    while(q--){
        int k;
        cin>>k;
        if(numbers[k] >=3 ) cout<<"Tak\n";
        else if(numbers[k] <3 && numbers[k]>=1) cout<<"Nie\n";
        else cout<<"brak\n";
    }

    return 0;
}