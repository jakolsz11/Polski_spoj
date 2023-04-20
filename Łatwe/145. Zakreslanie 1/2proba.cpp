#include <iostream>

using namespace std;

int main()
{

    double a, b;
    int ile, testy;
    int tab_x[50000];
    int tab_y[50000];
    const double eps = 10e-9;
    bool test;

    cin >> ile;

    for (int i = 0; i < ile; i++)
    {

        test = 0;
        cin >> testy;

        for (int j = 0; j < testy; j++)
        {

            cin >> tab_x[j] >> tab_y[j];
            if (tab_x[j] != tab_x[0])
                test = 1;
        }

        if (testy < 3 || test == 0)
            cout << "TAK"
                 << "\n";

        else
        {

            int nr = 1;
            while (tab_x[0] == tab_x[nr] && tab_y[0] == tab_y[nr])
            {
                nr++;
            }

            a = double(tab_y[nr] - tab_y[0]) / (tab_x[nr] - tab_x[0]);
            b = double(tab_y[0] - tab_x[0] * a);
            test = 0;

            for (int j = 2; j < testy; j++)
            {

                if (tab_y[j] >= a * tab_x[j] + b - eps && tab_y[j] <= a * tab_x[j] + b + eps)
                    continue;
                else
                {
                    cout << "NIE"
                         << "\n";
                    test = 1;
                    break;
                }
            }
            if (test == 0)
                cout << "TAK"
                     << "\n";
        }
    }
    return 0;
}