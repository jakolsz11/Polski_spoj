#include <iostream>
#include <algorithm>

using namespace std;

bool mysort(string x, string y){

    if(x.substr(0, 11) == y.substr(0, 11) && x.size() != y.size()){        
        int lx, ly;
        lx=stoi(x.substr(11, x.size()-11));
        ly=stoi(y.substr(11, y.size()-11));
        return lx<ly;

    }
    return x<y;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests;
    cin>>tests;

    while(tests--){
        int n;
        cin>>n;
        string *tab;
        tab = new string[n];
        for(int i=0; i<n; i++){
            string number, date;
            cin>>number>>date;
            date+=' '+number;
            tab[i]=date;
        }

        sort(tab, tab+n, mysort);

        string res="";
        
        for(int i=0; i<n; i++){
            res+=(tab[i].substr(11, tab[i].size()-11));
            if(i != n-1) res+=' ';
        }

        cout<<res<<"\n";
        delete[] tab;
    }

    return 0;
}