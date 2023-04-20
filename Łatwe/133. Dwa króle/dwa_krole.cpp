#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        long long a, b;
        cin>>a>>b;

        if(a<=2 && b<=2) cout<<"0"<<"\n";
        else{
            long long pole=a*b;
            long long kombinacje=0;

            //narozniki
            kombinacje+=(pole-4)*4;

            //krawedzie
            kombinacje+=(pole-6)*(a-2)*2;
            kombinacje+=(pole-6)*(b-2)*2;

            //srodek
            kombinacje+=(a-2)*(b-2)*(pole-9);

            cout<<kombinacje<<"\n";

        }

    }
    return 0;
}