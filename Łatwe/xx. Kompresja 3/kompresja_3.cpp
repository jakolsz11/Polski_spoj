#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Kompresja(vector <string> n){

    for(int i=0; i<n.size(); i++){

        char sign=n[i][n[i].size()-1];
        int counter=1;

        for(int j=n[i].size()-2; j>=0; j--){

            if(n[i][j] == sign){
                counter++;
            } 
            else{
                if(counter>3){
                    
                    string str = "*" + to_string(counter);
                    n[i].replace(j+2, counter-1, str);
                    counter=1;
                }
                else{
                    counter=1;
                }
                sign=n[i][j];
            }

            if(j==0){
                if(counter>3){
                    string str = "*" + to_string(counter);
                    n[i].replace(j+1, counter-1, str);
                    counter=1;
                }
            }

        }

    }

    string sentence = "";
    int count=1;

    for(int i=0; i<n.size(); i++){

        if(i==n.size()-1){
            if(n[i].size()*count < (n[i].size()+1+(to_string(count)).size())){
                for(int m=0; m<count; m++){
                    sentence+=n[i];
                    if(m != count-1) sentence+=" ";
                }
            }
            else if(count>=2){
                sentence+=n[i] + "/" + to_string(count);
            }
            count=1;
        }
        else if(n[i]==n[i+1]) count++;
        else{

            if(n[i].size()*count < (n[i].size()+1+(to_string(count)).size())){
                for(int m=0; m<count; m++){
                    sentence+=n[i]+" ";
                }
            }
            else{

                if(count>=2){
                    sentence+=n[i] + "/" + to_string(count) + " ";
                }
                else{
                    sentence+=n[i] + " ";
                }
            }


            count=1;
        }


    }

    cout<<sentence<<"\n";

}

void Dekompresja(vector <string> n){
    string sentence = "";

    for(int i=0; i<n.size(); i++){
        int lenOfnum=0;
        int howmanywords=1;
        int howmanysigns=0;
        

        for(int j=n[i].size()-1; j>=0; j--){
            if(isdigit(n[i][j])){
                lenOfnum++;
            }
            else if(n[i][j] == '/'){
                howmanywords=stoi(n[i].substr(j+1, lenOfnum));
                n[i].erase(j, lenOfnum+1);
                lenOfnum=0;
            }
            else if(n[i][j] == '*'){
                howmanysigns=stoi(n[i].substr(j+1, lenOfnum));
                
                char sign=n[i][j-1];
                string str = "";
                for(int m=0; m<howmanysigns; m++){
                    str+=sign;
                }
                n[i].replace(j-1, lenOfnum+2, str);
                lenOfnum=0;
            }
        }

        for(int m=0; m<howmanywords; m++){
            sentence+= n[i];
            if(i == n.size()-1 && m == howmanywords-1)  continue;
            else sentence+= " ";
        }
    }

    cout<<sentence<<"\n";

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string command;
    getline(cin, command);

    string line;
    vector <string> words;
    
    while(getline(cin, line) && line != ""){
        int begin=0;

        for(int i=0; i<line.size(); i++){
            if(i==line.size()-1 && line[i] != ' '){
                words.push_back(line.substr(begin, i-begin+1));
            }
            else if(line[i]==' '){
                words.push_back(line.substr(begin, i-begin));
                if(i<line.size()-1){
                    begin=i+1;
                    while(line[begin] == ' '){
                        begin++;
                    }
                } 
                
            }
            
        }
    }

    if(command == "KOMPRESJA"){
        Kompresja(words);
    }

    else if(command == "DEKOMPRESJA"){
        Dekompresja(words);
    }

    return 0;
}