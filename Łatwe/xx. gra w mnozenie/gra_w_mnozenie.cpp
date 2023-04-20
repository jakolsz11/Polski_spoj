#include <iostream>

using namespace std;

char Winner(int N)
{
    bool player = true;
 
    while(N > 1)
    {
        int den = (player) ? 9 : 2;
        int X = N/den, Y = N%den;
        N = (Y)? X + 1: X;
        player = !player;
    }
    if (player) return 'B';      
    else return 'A';
      
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    while(cin>>N){
        cout << Winner(N)<<"\n";
    }
    
    return 0;
}