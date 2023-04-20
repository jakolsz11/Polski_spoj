#include <iostream>

using namespace std;

char przestepny(int rok, int miesiac)
{
    int wiek = 0;

    if (miesiac > 0 && miesiac < 13)
    {
        wiek = 19;
        rok += (wiek * 100);
    }
    else if (miesiac > 20 && miesiac < 33)
    {
        wiek = 20;
        rok += (wiek * 100);
    }
    else if (miesiac > 40 && miesiac < 53)
    {
        wiek = 21;
        rok += (wiek * 100);
    }

    else if (miesiac > 60 && miesiac < 73)
    {
        wiek = 22;
        rok += (wiek * 100);
    }

    else if (miesiac > 80 && miesiac < 93)
    {
        wiek = 18;
        rok += (wiek * 100);
    }

    if (rok % 4 == 0)
    {
        if (rok % 100 == 0)
        {
            if (rok % 400 == 0)
                return '1';
            else
                return '2';
        }
        else
            return '1';
    }
    else
        return '2';
}