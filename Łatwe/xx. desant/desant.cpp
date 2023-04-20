#include <iostream>
#include <map>

using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tests;
    cin>>tests;

    map <string, int> points;
    cin.get();

    while(tests--){

        string coordinate;
        getline(cin, coordinate);
        points[coordinate]=1;

    }

    int asks;
    cin>>asks;
    cin.get();

    while(asks--){

        string p;
        getline(cin, p);

        if(points[p]==1) cout<<"TAK\n";
        else cout<<"NIE\n";

    }

    return 0;
}