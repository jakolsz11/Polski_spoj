#include <iostream>
#include <vector>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    int tests, number;
    vector <int> spot;

    cin>>tests;

    while(tests--){

        cin>>number;
        spot.clear();

        if(number==1){
            cout<<"0\n";
        }
        else{

            for(int i=1; i<=number/2; i++){
                if(number%i==0) spot.push_back(i);
            }

            cout<<spot.size()*2-!(number%2)<<"\n";

            for(int i=0; i<spot.size(); i++){
                cout<<"1/"<<number/spot[i]<<" ";
                spot[i]=number/spot[i];
            }

            for(int i=spot.size()-1; i>=0; i--){
                if(spot[i] != 2){
                    cout<<spot[i]-1<<"/"<<spot[i]<<" ";
                }
            }

            cout<<"\n";

        }
    }
    return 0;
}