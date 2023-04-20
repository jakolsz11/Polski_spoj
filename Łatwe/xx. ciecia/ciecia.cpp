#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);   
    
    int h, w, n, a;
    long long max_ver=0, max_hor=0, count_ver=0, count_hor=0;
    cin>>h>>w>>n;

    vector <int> hor = {0, h};
    vector <int> ver = {0, w};   

    while(n--){

        cin>>a;
        if(a<0) hor.push_back(-a);
        else ver.push_back(a);

    }

    sort(hor.begin(), hor.end());
    sort(ver.begin(), ver.end());

    for(int i=0; i<hor.size()-1; i++){
        
        if((hor[i+1]-hor[i])>max_hor){
            max_hor=(hor[i+1]-hor[i]);
            count_hor=1;
        }        
        else if((hor[i+1]-hor[i])==max_hor){
            count_hor++;
        }

    }

    for(int i=0; i<ver.size()-1; i++){

        if((ver[i+1]-ver[i])>max_ver){
            max_ver=(ver[i+1]-ver[i]);
            count_ver=1;
        }        
        else if((ver[i+1]-ver[i])==max_ver){
            count_ver++;
        }

    }

    cout<<max_hor*max_ver<<" "<<count_hor*count_ver;

    return 0;
}