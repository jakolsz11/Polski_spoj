#include <iostream>
#include <queue>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){

        int n;
        cin>>n;

        if(n<3){
            int tab[n];
            for(int i=0; i<n; i++){
                cin>>tab[i];
            }
            cout<<"0\n";
        } 
        else{

            int max=2;
            int counter=2;
            queue <int> que;
            bool sign; //true oznacza z wiekszej na mniejsza
            int x, y, number;;

            cin>>x>>y;

            que.push(x);
            que.push(y);

            int nr=2;

            
            while(que.front()==que.back() && nr<n){
                que.pop();
                cin>>number;
                que.push(number);
                nr++;
            }
            

            if(que.front()>que.back()) sign=true;
            else sign=false;
            

            for(int i=nr; i<n; i++){
                
                cin>>number;

                if(que.front()==que.back()){
                    
                    que.pop();
                    que.push(number);

                    if(que.front()>que.back()) sign=true;
                    else sign=false;
                }
                else{

                    que.pop();
                    que.push(number);

                    if(sign==true){
                        if(que.front()<que.back()){
                            counter++;
                            if(max<counter) max=counter;
                            sign=false;
                        }
                        else counter=2;
                    }
                    else{
                        if(que.front()>que.back()){
                            counter++;
                            if(max<counter) max=counter;
                            sign=true;
                        }
                        else counter=2;
                    }

                }
            }            

            if(max<3) cout<<"0\n";
            else cout<<max<<"\n";
        }
    }
    return 0;
}