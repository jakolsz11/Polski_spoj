#include <iostream>

using namespace std;

int main(){

    //int a, b, c, d, e;
    long long tab[5];

    for(int i=0; i<5; i++){

        long long a;
        cin>>a;
        tab[i]=a;

    }

    long long test=0;

    for(int i=0; i<5; i++){

        test=0;

        for(int j=0; j<5; j++){

            if(tab[i]*2==tab[j] || ((tab[i])%(2*tab[j]) == 0)){
                test=1;
                break;
            } 
        }

        if(test==0){
            cout<<i+1<<"\n";
            break;
        }
    }


    return 0;
}

//sumarycznie czyli jakies a+b==2*(c+d)