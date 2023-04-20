#include <cstdio>
#include <map>

using namespace std;

map <int, int> time = {{0, 0}, {1, 5}, {2, 11}, {3, 16}, {4, 22}, {5, 27}, {6, 33}, {7, 38}, {8, 44}, {9,49}, {10, 55}, {12, 0}, {13, 5}, {14, 11}, {15, 16}, {16, 22}, {17, 27}, {18, 33}, {19, 38}, {20, 44}, {21,49}, {22, 55}};

int main(){

    int tests, ha, ma, hb, mb, result;
    scanf("%d", &tests);

    while(tests--){
        scanf("%d:%d %d:%d", ha, ma, hb, mb);

        result=0;

        if(time[ha] != NULL && ma<=time[ha] && hb>ha) result++;
        





    }   
    return 0;
}