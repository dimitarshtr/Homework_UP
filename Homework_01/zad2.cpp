#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, br = 0, count = 0, i = 0;
    cout << "Enter two natural numbers: " << endl;
    cin >> a >> b;

    if (a > b)
    {
        count = 0;
        cout << count;
    }
    else if (b <= 10)
    {
        count = b - a;
        cout << count;
    }
    else if (b > 10)
    {
        int numbersTotal = b - a + 1;
        int numberBetween[numbersTotal], numberDigits = 0;
        int sum[numbersTotal] = {}, product[numbersTotal] = {}, initialProduct = 1;
        for (br = 0; br < numbersTotal; br++)
        {
            if (a <= b)
            {
                numberBetween[br] = a;
                a++;
            }

            numberDigits = log10(numberBetween[br]);
            if (numberDigits < numberBetween[br])
            {
                numberDigits++;
            }
            
            product[br] = initialProduct;
            int digit[numberDigits];

            for (i = 0; i < numberDigits; i++)
            {
                digit[i] = numberBetween[br] % 10;
                numberBetween[br] = numberBetween[br] / 10;
                sum[br] = digit[i] + sum[br];
                product[br] = digit[i] * product[br];
            }
            if (sum[br] == product[br])
            {
                count++;
            }
        }
        cout << count;
    }

    return 0;
}