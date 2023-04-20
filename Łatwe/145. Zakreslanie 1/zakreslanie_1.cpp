#include <iostream>

using namespace std;

int main(){

    int ile;
    cin>>ile;
    const double eps = 10e-9;

    for(int i=0; i<ile; i++){

        long testy;
        cin>>testy;
        long a, b, c, d;
        

        if(testy==1){
            cin>>a>>b;
            cout<<"TAK"<<endl;
        }
        else if(testy == 2){
            cin>>a>>b>>c>>d;
            cout<<"TAK"<<endl;
        }
        else{

            cin>>a>>b>>c>>d;
            long test=2;

            for(int j=0; j<testy-2; j++){

                long x, y;
                cin>>x>>y;
                long double prawa;

                if(a==c && b==d){
                    if(a==x && b == y) test++;
                    else{
                        swap(d, y);
                        swap(c, x);
                        test++;
                    }
                    
                }

                else if(a == c && b != d){
                    if(x==a) test++;
                    
                }
                else if(b == d && a != c){
                    if(y == b) test++;
                    
                }
                
                else{
                    prawa=double(b-d)/(a-c)*x+b-double(b-d)/(a-c)*a;

                    if(y >= prawa - eps && y <= prawa+eps){
                        test++;
                    } 
                }
                
            }

            if(test == testy) cout<<"TAK"<<endl;
            else cout<<"NIE"<<endl;
            
        }        
    }
    return 0;
}