#include <iostream>
#include <vector>

using namespace std;

int Kadane(vector <int> numbers, int size){

    int max_sum=numbers[0];
    int max_current=numbers[0];

    for(int i=1; i<size; i++){

        max_current=max(numbers[i], max_current+numbers[i]);
        max_sum=max(max_sum, max_current);

    }

    return max_sum;

}

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){

        int HowMany;
        cin>>HowMany;

        vector <int> numbers;        

        for(int i=0; i<HowMany; i++){

            int num;
            cin>>num;
            numbers.push_back(num);

        }

        cout<<Kadane(numbers, HowMany)<<"\n";
        
        

    }
    return 0;
}