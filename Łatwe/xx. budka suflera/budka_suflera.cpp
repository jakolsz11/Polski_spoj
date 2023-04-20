#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits.h>

using namespace std;

int main(){

    string s;
    vector <string> a;
    vector <string> b;

    while(cin.peek() != '\n'){

        cin>>s;
        a.push_back(s);

    }
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    while(cin.peek() != '\n'){

        cin>>s;
        b.push_back(s);

    }
    
    for(int i=0; i<a.size(); i++){

        if(b.size() == 0) break;
        if(b[0] == a[i]){

            a.erase(a.begin()+i);
            b.erase(b.begin());
            i--;
        }

    }

    sort(a.begin(), a.end());
    cout<<a.size()<<"\n";

    for(int i=0; i<a.size(); i++){

        cout<<a[i]<<"\n";

    }

    return 0;
}