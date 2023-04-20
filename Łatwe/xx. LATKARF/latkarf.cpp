#include <iostream>

using namespace std;

int main()
{

    int ile;
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {

        string a, b;
        cin >> a >> b;
        string a2, b2;

        long d1 = a.length(), d2 = b.length();

        int nr = 0;

        for (int j = d1 - 1; j >= 0; j--)
        {

            a2[nr] = a[j];
            nr++;
        }

        nr = 0;

        for (int j = d2 - 1; j >= 0; j--)
        {

            b2[nr] = b[j];
            nr++;
        }

        nr = 0;
        int ktore = 0;

        if (d1 > d2)
        {

            for (int j = 0; j < d1; j++)
            {
                cout << a2[j];
            }
        }

        else if (d1 < d2)
        {

            for (int j = 0; j < d2; j++)
            {
                cout << b2[j];
            }
        }

        else
        {

            for (int j = 0; j < d1; j++)
            {
                if (a2[j] > b2[j])
                {
                    ktore = 1;
                    break;
                }
                else if (a2[j] < b2[j])
                {
                    ktore = 2;
                    break;
                }
            }

            if (ktore == 0 || ktore == 1)
            {

                for (int j = 0; j < d1; j++)
                {
                    cout << a2[j];
                }
            }
            else if (ktore == 2)
            {

                for (int j = 0; j < d2; j++)
                {
                    cout << b2[j];
                }
            }
        }

        cout << "\n";
    }

    return 0;
}