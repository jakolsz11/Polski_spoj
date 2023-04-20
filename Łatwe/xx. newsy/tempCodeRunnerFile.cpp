#include <cstdio>
#include <vector>
#include <map>

using namespace std;

int main(){

    int tests, peop, mess, start, a, b;
    vector <int> result;
    map <int, bool> found;
    scanf("%d", &tests);

    while(tests--){

        scanf("%d %d %d", &peop, &mess, &start);

        found[start]=true;
        result.push_back(start);
        bool first=false;

        while(mess--){
            scanf("%d %d", &a, &b);
            if(a==start && first==false){
                result.push_back(b);
                found[b]=true;
                first==true;
            }
            else{
                if(found[a] == true){
                    if(found[b] != true){
                        result.push_back(b);
                        found[b]=true;
                    }
                }
            }
        }

        vector <int>::iterator it;

        for(auto n:result){
            printf("%d ", n);
        }

        printf("\n");

        result.clear();
        found.clear();

    }
    return 0;
}