#include <iostream>
using namespace std;
int main()
{
    int num1, num2, br = 0, i = 0;
    cin >> num1 >> num2;
    if (num1 < num2)
    {
        int numbersTotal = num2 - num1 - 1;
        int numbersBetween[numbersTotal], numberDigits = 6, initialProduct = 1;
        int sum_even[numbersTotal] = {}, product_even[numbersTotal] = {};
        int sum_odd[numbersTotal] = {}, product_odd[numbersTotal] = {};
        int numbers_before_division[numbersTotal];
        for (br = 0; br < numbersTotal; br++)
        {
            if (num1 < num2 - 1)
            {
                numbersBetween[br] = num1 + 1;
                num1++;
            }
            product_even[br] = initialProduct;
            product_odd[br] = initialProduct;
            int digit[numberDigits];
            numbers_before_division[br] = numbersBetween[br];
            for (i = 1; i <= numberDigits; i++)
            {
                digit[i] = numbersBetween[br] % 10;
                numbersBetween[br] = numbersBetween[br] / 10;
                if (digit[i] % 2 == 0 && digit[i] != 0)
                {
                    sum_even[br] = sum_even[br] + digit[i];
                    product_even[br] = product_even[br] * digit[i];
                }
                else if (digit[i] % 2 == 1)
                {
                    sum_odd[br] = sum_odd[br] + digit[i];
                    product_odd[br] = product_odd[br] * digit[i];
                }
            }
            if ((sum_odd[br] == sum_even[br]) || (product_odd[br] == product_even[br]))
            {
                cout << numbers_before_division[br] << " ";
            }
        }
    }
    return 0;
}