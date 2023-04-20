#include <iostream>

using namespace std;

bool isPrime(long a){

    if (a < 2) return false;

    for (long i = 2; i*i <= a; i++){
        if (a % i == 0) return false;
    }
    return true;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long tests;
    cin>>tests;

    while(tests--){

        long number;
        cin>>number;

        if(isPrime(number)==true){
            cout<<number<<"\n";
        }
        else{

            long x=number, y=number;
            while(number){

                
                if(x<=9999999) x++;
                if(y>2) y--;

                if(isPrime(x)==true && isPrime(y)==true){
                    cout<<y<<"\n";
                    break;
                }
                else if(isPrime(x)==true){
                    cout<<x<<"\n";
                    break;
                } 
                else if(isPrime(y)==true){
                    cout<<y<<"\n";
                    break;
                } 
                
            }
        }




    }
    return 0;
}

//zaimplementowac sito eratostenesa