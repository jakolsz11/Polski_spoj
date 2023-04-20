#include <iostream>

using namespace std;

int main(){

    float a, b, c;

    while(cin>>a>>b>>c){
        float suma=0;

        if(a<=b){
            suma=a;
            if(c<=b){
                suma+=c;
                if(suma<b) cout<<"0"<<endl;
                else cout<<"1"<<endl;
            }
            else{
                suma+=b;
                if(suma<c) cout<<"0"<<endl;
                else cout<<"1"<<endl;
            }

            
        }
        else{
            suma=b;
            if(c<=a){
                suma+=c;
                if(suma<a) cout<<"0"<<endl;
                else cout<<"1"<<endl;
            }
            else{
                suma+=a;
                if(suma<c) cout<<"0"<<endl;
                else cout<<"1"<<endl;
            }
        }

    }


    return 0;
}