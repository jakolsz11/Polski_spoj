#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false);
    long long tests;
    cin>>tests;

    vector <long long> liczby;

    while(tests--){

        long long number;
        cin>>number;

        liczby.push_back(number);
    }

    sort(liczby.begin(), liczby.end());

    long long ques;
    cin>>ques;

    while(ques--){

        long long num;
        cin>>num;
        long long counter=0;

        vector <long long>::iterator x;
        x = upper_bound(liczby.begin(), liczby.end(), num);
        counter=liczby.end()-x;

        cout<<counter<<"\n";
    }

    return 0;
}