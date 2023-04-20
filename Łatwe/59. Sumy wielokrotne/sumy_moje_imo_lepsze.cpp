#include <iostream>

using namespace std;

int main(){

    int number;
    int licznik=0;
    long long suma=0;
    long long sumakoncowa=0;

    while(cin>>number){
        if(number != 0){
            suma+=number;
            sumakoncowa+=number;
            licznik++;
        }
        
        else if(number == 0 && licznik == 0){
            cout<<suma<<endl;
            cout<<sumakoncowa<<endl;
        }

        else if(number == 0){
            cout<<suma<<endl;
            suma=0;
            licznik=0;
        }
    }
    return 0;
}