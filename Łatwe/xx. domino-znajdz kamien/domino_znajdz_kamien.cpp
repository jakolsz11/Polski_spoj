#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    int tests;
    scanf("%d", &tests);

    while(tests--){

        map <int, int> numbers;

        for(int i=0; i<27; i++){
            int x, y;
            scanf("%d|%d", &x, &y);
            numbers[x]++;
            numbers[y]++;
        }

        vector <int> result;

        for(auto it=numbers.begin(); it != numbers.end(); it++){

            if(it->second == 7) result.push_back(it->first);
            else if(it->second == 6){
                result.push_back(it->first);
                result.push_back(it->first);
                break;
            } 
            //cout<<it->first<<" "<<it->second<<"\n";
        }

        int a=result[0], b=result[1];

        printf("%d|%d\n", min(a, b), max(a, b));



    }
    return 0;
}