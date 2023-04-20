#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int x1[2], y1[2], P1;
    int x2[2], y2[2], P2;
    int P3;

    int suma = 0;

    cin >> x1[0] >> y1[0] >> x1[1] >> y1[1];
    cin >> x2[0] >> y2[0] >> x2[1] >> y2[1];

    P1 = (abs(x1[1] - x1[0])) * (abs(y1[1] - y1[0]));

    P2 = (abs(x2[1] - x2[0])) * (abs(y2[1] - y2[0]));

    P3 = (abs(y2[1] - y1[0])) * (abs(x1[1] - x2[0]));

    suma = P1 + P2 - P3;

    cout << suma;

    return 0;
}