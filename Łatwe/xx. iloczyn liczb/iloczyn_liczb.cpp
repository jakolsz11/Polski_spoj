#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long tests, number, i;
    bool test=true;
    vector <long> dividers;
    cin>>tests;

    while(tests--){

        cin>>number;
        if(number == 1) cout<<"1\n";
        else if(number==0) cout<<"10\n";
        else{
            test=true;          

            while(number != 1 && test == true){
                for(i=9; i>1; i--){
                    if(number%i==0){
                        number/=i;
                        dividers.push_back(i);
                        test=true;
                        break;
                    }
                    else test=false;
                }

            }

            if(test==false) cout<<"NIE\n";
            else{

                vector <long>::iterator it;

                for(it=dividers.end()-1; it != dividers.begin()-1; it--){
                    cout<<*it;
                }
                cout<<"\n";
                
            }
            
            dividers.clear();

        }
    }
    return 0;
}