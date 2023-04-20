#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int a, b, temp;
        cin>>a>>b;

        if(a<b) swap(a, b);
        // a jest wieksze od b

        if(a==b){

            for(int i=a/2; i>=1; i--){
                if(i==1){
                   cout<<"1"<<endl;
                   break;
                } 
                if(a%i==0){
                    if(a/i<=i) cout<<i<<endl;
                    else cout<<a/i<<endl;                    
                    break;
                }
            }
        }

        else if(a%b==0) cout<<b<<endl;
        else{

            while(b != 0){

                temp=b;
                b=a%b;
                a=temp;

            }

            cout<<a<<endl;
        }



    }
    return 0;
}