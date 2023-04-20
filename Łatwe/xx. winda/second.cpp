#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, min, max, x, i, k;
    string s;
    bool test=true;
    cin>>k;

    while(k--){

        cin>>n>>s;
        test=true;

        for(min = max = x = i = 0; s[i]; i++){
            x+= s[i]=='U' ? 1 : -1;
            if(x<min){
                min=x;
                if(max-min+1 > n){
                    test=false;
                    break;
                }
            }
            if(x>max){
                max=x;
                if(max-min+1 > n){
                    test=false;
                    break;
                }
            }
        }

        cout<<(test ? "TAK\n" : "NIE\n");

        
    }




    return 0;
}