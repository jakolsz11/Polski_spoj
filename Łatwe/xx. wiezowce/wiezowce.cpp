#include <iostream>
#include <map>
#include <math.h>

using namespace std;



long long int odl(long long int x, long long int y, long long int a, long long int b, long long int r){

    long long int odleg = (a-x)*(a-x)+(b-y)*(b-y);
    if(odleg <= r*r) return odleg;
    else return -1;

}


int main(){

    std::ios::sync_with_stdio(false);
    long long int a, b, r; 
    long long int points;
    cin>>a>>b>>r;
    cin>>points;

    map <string, long long int> odleglosc;
    map <string, long long int> wysokosc;
    cin.get();
    

    while(points--){

        string line;
        getline(cin, line);
        int nr=0;

        if(wysokosc[line] != 0){
            wysokosc[line]+=1;
        }
        else{

            while(!isspace(line[nr])){
                nr++;
            }

            long long int x, y;

            x=stoll(line.substr(0, nr));
            y=stoll(line.substr(nr+1, line.size()-nr-1));

            //cin>>p.x>>p.y;

            long long int tnt=odl(x, y, a, b, r);

            if(tnt != -1){

                odleglosc[line]=tnt;
                wysokosc[line]+=1;

            }

            line.clear();
        }


    }

    long long int max_p=0;
    long long int max_odl=r*r;
    string wynik;

    for(auto it=wysokosc.begin(); it != wysokosc.end(); it++){

        if(it->second > max_p){
            max_p=it->second;
            max_odl=odleglosc[it->first];
            wynik=it->first;
        } 
        else if(it->second == max_p){
            if(max_odl > odleglosc[it->first]){
                max_odl=odleglosc[it->first];
                wynik=it->first;
            }

        }

    }

    cout<<wynik<<" "<<max_p;



    return 0;
}