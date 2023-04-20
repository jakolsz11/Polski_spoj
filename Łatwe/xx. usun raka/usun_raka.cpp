#include <iostream>

using namespace std;

bool rak(string a)
{

    if (a.find("rak") == string::npos)
        return false;
    else if (a.empty() == true)
        return false;
    else
        return true;
}

int main()
{

    int tests;
    cin >> tests;

    for (int m = 0; m < tests; m++)
    {

        string line;
        cin >> line;

        int x, y;
        bool test = true;
        int n2;

        if (rak(line) == false)
        {

            for (int i = 0; i < line.size() - 1; i++)
            {

                for (int j = line.size() - 1; j > i; j--)
                {

                    swap(line[i], line[j]);

                    if (rak(line) == false)
                    {

                        test = false;
                        n2 = j + 1;
                        break;
                    }
                    else
                        swap(line[i], line[j]);
                }

                if (test == false)
                {
                    cout << "TAK " << i + 1 << " " << n2 << "\n";
                    break;
                }
            }
        }
        else
        {
            x = line.find("rak");
            y = line.rfind("rak");

            if (x == y)
            {

                for (int i = 0; i < line.size(); i++)
                {

                    if (line[i] != line[x + 1])
                    {

                        swap(line[i], line[x + 1]);
                        if (rak(line) == false)
                        {

                            cout << "TAK " << min(i, x + 1) + 1 << " " << max(i, x + 1) + 1 << "\n";
                            break;
                        }
                        else
                            swap(line[i], line[x + 1]);
                    }
                }
            }
            else
            {

                string spr = line;

                x = spr.find("rak");
                spr.erase(x + 1, 1);

                x = spr.rfind("rak");
                spr.erase(x + 1, 1);

                x = line.find("rak");
                y = line.rfind("rak");

                if (rak(spr) == true)
                    cout << "NIE\n";
                else
                {

                    swap(line[x], line[y + 1]);
                    cout << "TAK " << x + 1 << " " << y + 2 << "\n";
                }
            }
        }
    }
    return 0;
}
