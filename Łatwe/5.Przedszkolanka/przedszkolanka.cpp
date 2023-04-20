#include <iostream>

using namespace std;

int ile;

int main(){

    cin>>ile;

    for(int i=0; i<ile; i++){

        int a, b;

        cin>>a>>b;

        if (a==0) cout<<b<<endl;
        else if (b==0) cout<<a<<endl; 
        else if (b % a == 0) cout<<b<<endl;
        else{
            int la=a;
            while(la % b != 0){
                la+=a;
            }
            cout<<la<<endl;
        }
        
    }

    system("pause");

    return 0;
}