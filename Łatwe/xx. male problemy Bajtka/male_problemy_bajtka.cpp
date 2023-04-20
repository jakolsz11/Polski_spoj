#include <iostream>

using namespace std;

int count(int a){

    int sum=0;

    if(a==0) return 1;
    
    while(a){
        int tmp=a%10;
        if(tmp==0 || tmp == 6 || tmp == 9) sum++;
        else if(tmp==8) sum+=2;
        a/=10;
    }
    return sum;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    while(n--){

        int a, max, min;
        cin>>a;

        max=min=a;

        for(int i=0; i<5; i++){

            cin>>a;
            if(a>max) max=a;
            if(a<min) min=a;

        }

        cout<<count(min)<<" "<<count(max)<<"\n";

    }
    return 0;
}