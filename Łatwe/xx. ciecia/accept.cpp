#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    
    int h, w, n, a, size_hor=0, size_ver=0;
    long long max_ver=0, max_hor=0, count_ver=0, count_hor=0;
    cin>>h>>w>>n;

    int ver[100009], hor[100009];

    while(n--){

        cin>>a;
        if(a<0) hor[size_hor++]=-a;
        else ver[size_ver++]=a;

    }

    hor[size_hor++]=0;
    ver[size_ver++]=0;

    hor[size_hor++]=h;
    ver[size_ver++]=w;

    sort(hor, hor+size_hor);
    sort(ver, ver+size_ver);

    for(int i=0; i<size_hor-1; i++){
        
        if((hor[i+1]-hor[i])>max_hor){
            max_hor=(hor[i+1]-hor[i]);
            count_hor=1;
        }        
        else if((hor[i+1]-hor[i])==max_hor){
            count_hor++;
        }

    }

    for(int i=0; i<size_ver-1; i++){

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