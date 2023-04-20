#include <cstdio>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

bool myfunction(int x, int y){
    return x>y; 
}

int main(){

    int tests, num, k;
    char z;
    unordered_map <int, bool> duplicate;
    vector <int> numbers;

    while(scanf("%d%c", &k, &z) >0){

        if(z==10){
            if(k==0) printf("0\n");
            else printf("-\n");
            continue;
        }   

        while(scanf("%d%c", &num, &z) > 0){
            if(duplicate[num] != true){
                duplicate[num]=true;
                numbers.push_back(num);
            }
            

            if(z==10) break;
            
        }
        
        sort(numbers.begin(), numbers.end(), myfunction);

        if(k>numbers.size()) printf("-\n");
        else if(k==0) printf("0\n");
        else printf("%d\n", numbers[k-1]);

        duplicate.clear();
        numbers.clear();

    }

    return 0;
}