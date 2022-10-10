#include <iostream>
using namespace std;
int main()
{
    int num, count = 1;
    cout << "Please enter a number: " << endl;
    cin >> num;
    int numbers = num, space = 1;
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        for (int j = 1; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= numbers; j++)
        {
            if (count <= num)
            {
                cout << count;
                count++;
            }
            else
            {
                count = count - numbers + 1;
            }
        }
        cout << endl;
        if (i <= num - 1)
        {
            numbers = numbers - 1;
            space = space + 1;
        }
        else
        {
            numbers = numbers + 1;
            space = space - 1;
            count = num - numbers + 1 ;
        }
    }
    
    return 0;
}