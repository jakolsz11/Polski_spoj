#include <iostream>

using namespace std;

int main(){

    long n;
    while(cin>>n){

        string ciag;
        cin>>ciag;
        int pos_C;
        int pos_K;
        long sum=0;

        for(int i=0; i<n; i++){

            pos_C=ciag.find('C');
            ciag[pos_C]='x';
            pos_K=ciag.find('K');
            ciag[pos_K]='x';

            sum+=abs(pos_C-pos_K);
            
        }

        cout<<sum<<"\n";

    }





    return 0;
}