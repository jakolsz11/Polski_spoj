#include <iostream>

using namespace std;

void sito(bool *prime, unsigned int n){

    for(int i=2; i*i<=n; i++){
        if(!prime[i]){
            for(int j=i*i; j<=n; j+=i) prime[j]=1;
        }
    }

}

int main(){

    int tests;
    cin>>tests;

    int *numbers=new int [tests];
    int max=0;

    for(int i=0; i<tests; i++){
        cin>>numbers[i];
        if(numbers[i]>max) max=numbers[i];
    }

    bool *prime;
    prime = new bool [2*max];

    for(int i=2; i<=max; i++){
        prime[i]=0;
    }

    sito(prime, 2*max);

    for(int m=0; m<tests; m++){

        int x=numbers[m];
        int y=numbers[m];
        if(prime[x]==0) cout<<x<<"\n";
        else{

            for(int i=0; i<=max; i++){                
                
                if(x<=9999999) x++;
                if(y>2) y--;

                if(prime[x] == 0 && prime[y] == 0){
                    cout<<y<<"\n";
                    break;
                } 
                else if(prime[x]==0){
                    cout<<x<<"\n";
                    break;
                } 
                else if(prime[y]==0){
                    cout<<y<<"\n";
                    break;
                } 
                
            }
        }

    }

    delete[] prime;
    delete[] numbers;

    return 0;
}