#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;
    cin.get();

    while(tests--){
        string line;
        getline(cin, line);
        bool result=true;
        bool dot=false;
        bool Isdot=false;
        bool monkey=false;
        int leng1=0;        

        for(int i=0; i<line.size(); i++){

            if((line[i] >='a' && line[i]<='z') || (line[i] >='A' && line[i]<='Z') || (line[i] >='0' && line[i]<='9' || line[i]=='_')){
                dot=false;
                continue;
            } 
            else if(line[i]==' '){
                result=false;
                break;
            }
            else if(line[i]=='.'){
                if(dot==false && line[i-1] != '@'){
                    dot=true;
                    Isdot=true;
                }
                else{
                    result=false;
                break;
                }
            }
            else if(line[i]=='@'){
                leng1=i;
                if(monkey==false && dot==false && leng1>=1 && leng1<=20){
                    monkey=true;
                }
                else{
                    result=false;
                break;
                }
            }
            else{
                result=false;
                break;
            }

        }
        int dotPos=line.rfind('.');
        if(line.size()-dotPos-1 != 2 && line.size()-dotPos-1 != 3){
            result=false;
        }
        else{
            for(int i=line.size()-1; i>dotPos; i--){
                if((line[i]>='A' && line[i]<='Z') || (line[i]>='a' && line[i]<='z')) continue;
                else result=false;
            }
        }

        if(monkey==false || Isdot==false){
            result=false;
        }
        else if(dotPos-leng1-1<1 || dotPos-leng1-1>20){
            result=false;
        }

        if(result==true) cout<<"Tak\n";
        else cout<<"Nie\n";

    }
    return 0;
}