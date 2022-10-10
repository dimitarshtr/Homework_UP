#include <iostream>
using namespace std;
int main()
{
    int p, count = 0;
    cout << "Please enter number of digits: " << endl;
    cin >> p;
    if (p >= 10)
    {
        cout << "Error";
    }
    else if (p < 10)
    {
        int a, b, br = 0;
        int number1[p] = {}, number2[p] = {};
        cout << "Enter number 1 and number 2: " << endl;
        cin >> a >> b;
        for (br = 0; br < p; br++)
        {
            number1[br] = a % 10;
            a = a / 10;
            number2[br] = b % 10;
            b = b / 10;
        }
        for (int i = 0; i < p; i++)
        {
            if (number1[i] == number2[i])
            {
                count++;
            }
        }
        cout << count;
    }

    return 0;
}