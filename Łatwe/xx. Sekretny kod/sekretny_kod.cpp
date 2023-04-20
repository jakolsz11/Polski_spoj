#include <iostream>
#include <string>

using namespace std;

int main()
{

    int ile;
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {

        int liczba;
        cin >> liczba;
        string kod;
        cin >> kod;
        int ilosc = 0;
        int poczatek = 0;
        int nr = 0;

        while (kod[nr] == '0')
        {
            nr++;
        }

        if (nr != 0)
        {
            kod.erase(0, nr);
        }

        if (kod[0] == '?' && kod.length() == 1)
        {
            cout << "10" << endl;
        }

        else
        {

            if (kod[0] == '?')
            {
                poczatek = 1;
            }

            for (int j = 1; j < liczba; j++)
            {

                if (kod[j] == '?')
                    ilosc++;
            }

            if (poczatek == 1)
            {
                cout << "9";
                for (int j = 0; j < ilosc; j++)
                {
                    cout << "0";
                }
            }
            else if (poczatek == 0 && ilosc == 0)
                cout << "1";
            else
            {
                cout << "1";
                for (int j = 0; j < ilosc; j++)
                {
                    cout << "0";
                }
            }

            cout << endl;
        }
    }
    return 0;
}