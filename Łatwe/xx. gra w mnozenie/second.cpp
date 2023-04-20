#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, p=1;
    bool player=true;
    while(cin>>n)
    {
        p=1;
        player = true;
        while(p<n){
            p *= (player)? 9 : 2;
            player = !player;
        }

        cout<<(player ? "B" : "A")<<"\n";
            
    }

    return 0;
}