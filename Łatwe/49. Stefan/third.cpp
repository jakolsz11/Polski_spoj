#include <stdio.h>

using namespace std;

int main()
{
    long long t, w = 0, s = 0, x;
    
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &x);
        if(w > 0)
            w += x;
        else
            w = x;
        if(w > s)
            s = w;
    }
    printf("%lld", s);
}