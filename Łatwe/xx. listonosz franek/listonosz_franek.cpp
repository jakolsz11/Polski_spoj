#include <cstdio>
#include <unordered_map>

using namespace std;

int main(){

    int tests, postoffice, a, b;
    unordered_map <int, int> points;
    scanf("%d %d", &tests, &postoffice);

    while(tests--){

        scanf("%d %d", &a, &b);
        points[a]++;
        if(points[a] == 2){
            points.erase(a);
        }
        points[b]++;
        if(points[b] == 2 ){
            points.erase(b);
        }

    }

    if(points.empty()) printf("%s\n", "TAK");
    else printf("%s\n", "NIE");

    return 0;
}