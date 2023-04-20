#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    

    for(int i=0; i<ile; i++){

        
        int x0, x1, x2, y0, y1, y2, a, b; 
        cin>>x0>>y0>>x1>>y1>>x2>>y2;
        
        if((x0-x1)==0 && x0==x2) cout<<"TAK"<<endl;
        else if((x0-x1)==0 && x0 != x2) cout<<"NIE"<<endl;
        else if(x0 != x1){
            a=(y0-y1)/(x0-x1);
            b=y0-(a*x0);
        

            if((a*x2+b)==y2) cout<<"TAK"<<endl;
            else cout<<"NIE"<<endl;

        }
        

    }
    return 0;
}