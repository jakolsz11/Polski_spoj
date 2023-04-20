#include <iostream>

using namespace std;

int main()
{

    string linia;
    cin >> linia;

    long long dlugosc = linia.length();
    long long nr = 0;
    bool test;

    while (linia[nr] != '0')
    {
        nr++;
        test = true;
        if (nr > dlugosc)
        {
            test = false;
            cout << "PUSTY";
            break;
        }
    }

    long long koniec = dlugosc;
    if (test == true)
    {
        while (linia[koniec] != '1')
        {
            koniec--;
            if (koniec < nr + 2)
            {
                cout << "PUSTY";
                break;
            }
        }
    }

    for (int i = nr + 1; i < koniec; i++)
    {
        cout << linia[i] - 48;
    }

    return 0;
}