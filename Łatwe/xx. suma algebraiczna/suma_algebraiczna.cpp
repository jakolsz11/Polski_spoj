#include <iostream>

using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){

        string line;
        cin>>line;

        for(int i=0; i<line.size(); i++){

            if(line[i]=='|'){
                if(i==0) line[i]='(';
                else if(line[i-1]=='(' || line[i-1]=='+' || line[i-1]=='-') line[i]='(';
                else line[i]=')';
            }
        }

        cout<<line<<"\n";  
    }
    return 0;
}