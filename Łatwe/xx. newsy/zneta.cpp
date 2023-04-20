#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <iterator>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tests, peop, mess, start, a, b;
    cin >> tests;

    while(tests--) {
        cin >> peop >> mess >> start;

        unordered_set<int> found;
        int result[peop];
        int i = 0;

        found.insert(start);
        result[i++] = start;

        while(mess--) {
            cin >> a >> b;
            if(found.find(a) != found.end()) {
                if(found.find(b) == found.end()) {
                    result[i++] = b;
                    found.insert(b);
                }
            }
        }

        copy(result, result+i, ostream_iterator<int>(cout, " "));
        cout << "\n";
    }
    return 0;
}