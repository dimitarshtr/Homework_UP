#include <iostream>
using namespace std;
int main()
{
    int n;
    int number = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            number++;
            cout << number;
            if (number == n)
            {
                j = n;
                i = n;
            }
        }
        cout << endl;
    }
    return 0;
}