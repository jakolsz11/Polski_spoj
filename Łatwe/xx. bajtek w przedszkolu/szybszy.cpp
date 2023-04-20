#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;

    while(cin>>n){

        string ciag;
        cin>>ciag;
        long sum=0;
        int c_c=0;
        int c_k=0;

        for(int i=0; i<2*n; i++){

            if(ciag[i]=='C'){
                c_c++;
                if(c_c>c_k){
                    sum+=i;
                }
                else if(c_c<=c_k){
                    sum-=i;
                } 
                
            } 
            else{
                c_k++;
                if(c_k>c_c){
                    sum+=i;
                }
                else if(c_k<=c_c){
                    sum-=i;
                }
                
            }

        }

        sum=abs(sum);
        cout<<sum<<"\n";


    }
    return  0;
}