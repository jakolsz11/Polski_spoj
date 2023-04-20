#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int number;
    long long suma=0;
    long long sumakoncowa=0;

    while(cin>>number){
       
       if(number == 0){
        sumakoncowa+=suma;
        cout<<suma<<endl;
        suma=0;
       }
       else{

        suma+=number;

       }
    }
    cout<<sumakoncowa<<endl;
    return 0;
}