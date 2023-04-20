#include <iostream>
#include <unordered_map>
#include <vector>
#include <limits.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){
        int n;
        cin>>n;
        unordered_map <int, int> m;
        vector <int> numbers;

        for(int i=0; i<n; i++){
            int number;
            cin>>number;
            numbers.push_back(number);
        }

        int j=0, i=0;
        int *begin=&numbers[0];
        int *curr=&numbers[0];
        int res=INT_MIN;

        while(i<n){  
            int number;
            cin>>number;
            numbers.push_back(number);         

            m[numbers[i]]++;

            if(m.size()==i-j+1){
                if(i-j+1>res && curr !=0) begin=curr;
                res=max(res, i-j+1);
            }
            else if(m.size()<i-j+1){
                while(m.size()<i-j+1){
                    m[numbers[j]]--;
                    if(m[numbers[j]]==0){
                        m.erase(numbers[j]);
                    }
                    curr++;
                    j++;
                }
            }
            i++;

        }
        cout<<res<<"\n";
        for(int i=0; i<res; i++){
            cout<<*begin<<" ";
            begin++;
        }
        cout<<"\n";


    }

}