#include <iostream>
#include <string>

using namespace std;

int czas(int godzina[4])
{

    if (godzina[3] < 9)
        godzina[3] += 1;
    else if (godzina[3] == 9)
    {
        godzina[3] = 0;
        if (godzina[2] < 5)
            godzina[2] += 1;
        else if (godzina[2] == 5)
        {
            godzina[2] = 0;
            if (godzina[0] == 2)
            {
                if (godzina[1] < 4)
                    godzina[1] += 1;
                if (godzina[1] == 4)
                {
                    godzina[1] = 0;
                    godzina[0] = 0;
                }
            }
            else
            {
                if (godzina[1] < 9)
                    godzina[1] += 1;
                else if (godzina[1] == 9)
                {
                    godzina[1] = 0;
                    godzina[0] += 1;
                }
            }
        }
    }

    return godzina[4];
}

int main()
{

    int ile;
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {

        string line;
        cin >> line;

        int godzina[4];
        int k = 0;

        for (int j = 0; j < 4; j++)
        {
            if (k == 2)
                k++;

            godzina[j] = line[k] - 48;
            k++;
        }

        if (godzina[0] == 0 && godzina[1] == 0 && godzina[2] == 0)
        {
            czas(godzina);
        }
        if (godzina[0] == 0 && godzina[1] == 0 && godzina[2] != 0)
        {
            czas(godzina);
            while ((godzina[0] == 0 && godzina[1] == 0) && godzina[2] != godzina[3])
            {
                czas(godzina);
            }
        }
        if (godzina[0] == 0 && godzina[1] != 0)
        {
            czas(godzina);
            while (godzina[0] == 0 && (godzina[1] != godzina[3]))
            {
                czas(godzina);
            }
        }

        if (godzina[0] != 0)
        {

            czas(godzina);
            while (godzina[0] != godzina[3] || godzina[1] != godzina[2])
            {
                czas(godzina);
            }
        }

        cout << godzina[0] << godzina[1] << ":" << godzina[2] << godzina[3] << endl;
    }
    return 0;
}
