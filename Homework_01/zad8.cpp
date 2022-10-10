#include <iostream>
using namespace std;
int main()
{
    int height, k = 0;
    cin >> height;
    for (int i = 1; i <= height + 1; i++) 
    {
        for (int j = i; j < height + 1; j++)
        {
            cout << " ";
        }

        while (k != (2 * i - 2))
        {
            if (k == 0)
            {
                cout << "/";
            }
            else if (k == 2 * i - 3)
            {
                cout << "\\";
            }
            else
            {
                cout << " ";
            }
            k++;
        }
        k = 0;
        cout << endl;
    }
    for (int i = 1; i <= height + 2; i++)
    {
        for (int j = 1; j <= 2 * height; j++)
        {
            if (i == 1)
            {
                cout << "-";
            }
            else if (i == height + 2)
            {
                cout << "=";
            }
            else if (j == 1 || j == 2 * height)
            {
                cout << "|";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}