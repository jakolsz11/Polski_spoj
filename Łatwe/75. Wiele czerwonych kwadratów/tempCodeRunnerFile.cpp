#include <iostream>

using namespace std;

int main(){

    long long x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    long long suma=0;

    if(y1%2 == 0){

        
        for(long long i=y1+2; i<=y2; i+=2){

            if(i<=x2 && i>x1){
                suma+=((i-x1)+(i-y1-1));
            }
            else if(i>x1){
                suma+=(x2-x1);
            }
        } 
        
    }

    else if(y1%2 != 0){

        
        for(long long i=y1+1; i<=y2; i+=2){

            if(i<=x2){
                suma+=((i-x1)+(i-y1-1));
            }
            else{
                suma+=(x2-x1);
            }
        }
        
    }

    cout<<suma;

    return 0;
}