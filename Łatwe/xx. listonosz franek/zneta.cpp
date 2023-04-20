#include <cstdio>

using namespace std;

int main(){
    int a, b, n, postoffice, euler;

    scanf("%d %d", &n, &postoffice);
    euler = postoffice;
    while(n--){
        scanf("%d %d", &a, &b);
        euler ^= a;
        euler ^= b;
    }

    if(euler == postoffice) printf("%s\n", "TAK");
    else printf("%s\n", "NIE");

    return 0;
}