#include <iostream>

using namespace std;

int main(){

    int u, s, d;

    while(cin>>u>>s>>d){        

        if(u==0 && s==0 && d==0) break;
        else{

            u%=d;
            if(u==0){
                cout<<"0"<<endl;
                break;
            } 

            long wynik=1;
             
            while(s>0){

                if(s%2 == 1){
                    wynik=wynik*u%d;
                }
                
                s/=2;
                u=u*u%d;
                
            }
            
            cout<<wynik<<endl;

        }

    }

    return 0;
}