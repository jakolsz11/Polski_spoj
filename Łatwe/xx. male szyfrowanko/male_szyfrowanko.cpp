#include <iostream>

using namespace std;

char ToChar(char x, char y){
    char sign = (x+y)%26+65;
    return sign;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;
    string code, text, res="";

    while(tests--){
        
        cin>>code;
        cin.get();
        getline(cin, text);

        int j=0;
        for(int i=0; i<text.size(); i++){
            if(text[i]==' '){
                res.push_back(' ');
            } 
            else{
                res.push_back(ToChar(code[j], text[i]));
                j++;
                j%=code.size();
            }
        }

        cout<<res<<"\n";
        code.clear();
        text.clear();
        res.clear();


    }
    return 0;
}