#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){

        int n;
        cin>>n;
        
        
        if(n<=2){
            int c;
            for(int i=0; i<n; i++){
                cin>>c;
            }
            cout<<n<<"\n";
        } 
        else{
            int a, b;
            cin>>a>>b;
            int difference=a-b;
            int counter=2;
            int max=2;
            for(int i=0; i<n-2; i++){
                cin>>a;
                if(b-a == difference) counter++;
                else{
                    difference=b-a;
                    counter=2;
                }
                if(counter>max) max=counter;
                b=a;
            }
            cout<<max<<"\n";
        }

        

    }
    return 0;
}