#include <iostream>

using namespace std;

int NWD(int a, int b){

    int pom;
    while(b != 0){
        pom=b;
        b=a%b;
        a=pom;

    }

    return a;
}

int main(){

    int tests;
    cin>>tests;

    for(int i=0; i<tests; i++){

        int a, b;
        cin>>a>>b;

        int m, n;
        bool test=false;

        for(int j=1; j<=a; j++){

            m=j;
            n=a-j;

            if(NWD(m, n)==b && m != 0 && n != 0){
                test=true;
                break;
            }

        }

        if(test==true) cout<<m<<" "<<n<<"\n";
        else cout<<"0 0\n";

    }
    return 0;
}