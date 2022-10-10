#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num, br = 1, numberDigits = 0, remainder = 0, binaryNumber = 0, count = 0;
    int remainderBinary = 0, decreaseBinary = 0, timesDecrease = 0;
    cout << "Enter number: " << endl;
    cin >> num;

    while (num != 0)
    {
        remainder = num % 2;
        num = num / 2;
        binaryNumber = binaryNumber + remainder * br;
        br = br * 10;
    }
    br = 1;

    numberDigits = log10(binaryNumber);
    if (numberDigits < binaryNumber)
    {
        numberDigits++;
    }

    while (binaryNumber != 0)
    {
        remainderBinary = binaryNumber % 2;
        binaryNumber = binaryNumber / 10;
        decreaseBinary = decreaseBinary - br * remainderBinary;
        br = br * 10;

        if (remainderBinary == 1)
        {
            count++;
            timesDecrease++;
        }
        else if (remainderBinary == 0)
        {
            if ((numberDigits - timesDecrease) > count)
            {
                count--;
            }
            else if ((numberDigits - timesDecrease) <= count)
            {
                binaryNumber = 0;
            }
        }
    }
    cout << count;
    
    return 0;
}