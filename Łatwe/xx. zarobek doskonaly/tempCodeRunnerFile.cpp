#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    int tests;
    cin>>tests;

    while(tests--){

        int HowMany;
        cin>>HowMany;

        vector <int> numbers;
        long long sum=0;
        

        for(int i=0; i<HowMany; i++){

            int num;
            cin>>num;
            numbers.push_back(num);
            sum+=num;

        }
        
        long long max=sum;
        int nr=0;
        int kn=1;

        for(int i=0; i<HowMany-1; i++){

            if((sum-numbers[nr]) >= sum-numbers[HowMany-kn]){

                sum-=numbers[nr];
                if(sum > max) max=sum;
                nr++;
            }
            else{
                sum-=numbers[HowMany-kn];
                if(sum>max) max=sum;
                kn++;
            }

        }

        cout<<max<<"\n";

    }
    return 0;
}