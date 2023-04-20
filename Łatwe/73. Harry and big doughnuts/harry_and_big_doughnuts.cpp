#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;

    for(int i=0; i<ile; i++){

        int c, k, w;
        cin>>c>>k>>w;
        
        if(k>=c*w){
            cout<<"yes"<<endl;
        }

        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}