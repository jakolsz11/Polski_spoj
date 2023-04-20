#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==2 || n==1) cout<<"NIE"<<endl;
    else if(n==0) cout<<"0\n";
    else{
        if(n%2 != 0 && n>2){
            for(int i=0; i<(n+1)/2; i++){
                cout<<2*i<<" ";
            }

            for(int k=0; k<(n+1)/2; k++){
                cout<<(2*k)+1<<" ";
            } 
            cout<<"\n";
        }
        else{
            for(int i=0; i<(n+2)/2; i++){
                cout<<2*i<<" ";
            }

            for(int k=0; k<n/2; k++){
                cout<<(2*k)+1<<" ";
            } 
            cout<<"\n";
        }
            
    }
    return 0;
}