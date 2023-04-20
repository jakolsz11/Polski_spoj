#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, k, a, b, x=2, c, y=1, max=0;
    cin>>tests;

    while(tests--){

        x=2;
        y=1;
        max=0;
        cin>>k>>a;

        if(k==1){
            cout<<"1\n";
        }
        else{
            cin>>b;
            k-=2;
            while(a==b && k>0){
                cin>>b;
                x++;
                k--;
            }

            if(k==0){
                cout<<x<<"\n";
            }
            else{

                while(k--){
                    cin>>c;
                    if(c==b){
                        x++;
                        y++;
                    }
                    else if(c==a){
                        x++;
                        y=1;
                        a=b;
                        b=c;
                    }
                    else{
                        if(x>max) max=x;
                        x=y+1;
                        y=1;
                        a=b;
                        b=c;
                    }
                }

                cout<<(x>max ? x : max)<<"\n";
            }
        }




    }
    return 0;
}