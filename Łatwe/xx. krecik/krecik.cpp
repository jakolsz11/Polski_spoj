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

        int max=1;
        int counter=1;

        if(n>=2){

            max=2;
            counter=2;
            queue <int> numbers;
            int x, y;
            cin>>x>>y;
            
            while(x==y && counter<n){     
                cin>>y;
                counter++;
            }
            if(counter>max) max=counter;
            int tmp=counter;
            int seccount=1;
            numbers.push(x);
            numbers.push(y);
            
            for(int i=0; i<n-tmp; i++){
                cin>>y;
                if(y==numbers.front()){
                    numbers.pop();
                    numbers.push(y);
                    counter++;
                    seccount=1;
                    if(counter>max) max=counter;
                }
                else if(y==numbers.back()){
                    counter++;
                    seccount++;
                    if(counter>max) max=counter;
                }
                else{
                    numbers.pop();
                    numbers.push(y);
                    counter=1+seccount;
                    seccount=1;
                    
                }
            }
            cout<<max<<"\n";
        }
        else{
            int z;
            cin>>z;
            cout<<max<<"\n";
        }



    }
    return 0;
}