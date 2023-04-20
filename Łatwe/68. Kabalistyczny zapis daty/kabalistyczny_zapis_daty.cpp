#include <iostream>

using namespace std;

int main(){

    string line;
    cin>>line;
    int suma=0;

    for(int i=0; i<line.length(); i++){

        if(line[i]>=97 && line[i]<=105) suma+=line[i]-96;
        else if(line[i]==107) suma+=10;
        else if(line[i]>=108 && line[i]<=116) suma+=(line[i]-106)*10;
        else if(line[i]==118) suma+=200;
        else if(line[i]>=120 && line[i]<=122) suma+=(line[i]-117)*100;

    }

    cout<<suma<<endl;



    return 0;
}