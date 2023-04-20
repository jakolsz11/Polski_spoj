#include <iostream>
#include <list>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, peop, mess, start, a, b;
    list<int> result;
    unordered_set<int> found;
    cin >> tests;

    while(tests--) {
        cin >> peop >> mess >> start;

        found.insert(start);
        result.push_back(start);
        bool first = false;

        while(mess--) {
            cin >> a >> b;
            if(found.find(a) != found.end()) {
                if(found.find(b) == found.end()) {
                    result.push_back(b);
                    found.insert(b);
                }
            }
        }

        for(auto n : result) {
            cout << n << " ";
        }
        cout << "\n";
        result.clear();
        found.clear();
    }
    return 0;
}