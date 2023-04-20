#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){

        int n;
        cin>>n;

        vector <int> numbers;
        long l=0;
        long r=0;
        while(n--){

            int num;
            cin>>num;
            r+=num;
            numbers.push_back(num);
        }

        
        int counter=0;

        for(int i=0; i<numbers.size()-1; i++){
            r-=numbers[i];
            l+=numbers[i];
            if(l==r) counter++;
        }

        cout<<counter<<"\n";
        numbers.clear();
    }
    return 0;
}