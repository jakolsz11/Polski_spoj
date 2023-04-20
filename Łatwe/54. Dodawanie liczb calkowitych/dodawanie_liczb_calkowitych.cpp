#include <iostream>

using namespace std;

int main(){

    int number, sum=0;
    int  ile=3;

    while(ile>0){
        cin>>number;
        sum+=number;
        ile--;
    }

    cout<<sum;

    return 0;
}