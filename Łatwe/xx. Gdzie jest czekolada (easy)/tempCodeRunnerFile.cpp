#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    // obliczenie sum wag mleka i budyniu
    long long milk_weight = a + b;
    long long pudding_weight = c + d;

    // sprawdzenie, który kubek zawiera czekoladę
    if (2 * milk_weight > pudding_weight && e != milk_weight && e != pudding_weight) {
        cout << "3" << endl;
    } else if (2 * milk_weight < pudding_weight && (e == a || e == b)) {
        cout << "1" << endl;
    } else if (2 * milk_weight < pudding_weight && (e == c || e == d)) {
        cout << "2" << endl;
    } else if (2 * milk_weight > pudding_weight && (e == a || e == b)) {
        cout << "4" << endl;
    } else if (2 * milk_weight > pudding_weight && (e == c || e == d)) {
        cout << "5" << endl;
    }

    return 0;
}