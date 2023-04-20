#include <iostream>
#include <vector>

using namespace std;

vector <int> jump;

void searchJumps(){

    int a=1, b=1;
    int m=2;
    int k=6;
    int plus=0;

    for(int i=0; i<100; i++){
        if(i==0) jump.push_back(2);
        else if(i==1) jump.push_back(3);
        else if(i==2) jump.push_back(4);
        else if(i==3) jump.push_back(3);
        else if(i==4) jump.push_back(5);
        else{
            for(int j=0; j<m; j++){
                jump.push_back(3);
                i++;
            }
            plus=a+b;
            a=b;
            b=plus;
            m+=plus;

            jump.push_back(k);
            k++;
            i++;

        }
    }
}

int main(){

    searchJumps();
    string line;    
    
    int max = 0;

    while(getline(cin, line)){

        int spaceCounter=0;
        string res="";

        for(int i=0; i<line.size(); i++){
            if(line[i]==' '){
                res.push_back(' ');
                spaceCounter++;
            }
            else{
                res.push_back(line[i]-jump[i-spaceCounter]);
                if(res.back()<'A') res.back()=('Z'+1-'A'+res.back());
            }
        }
        cout<<res<<"\n";
    }

    return 0;
}