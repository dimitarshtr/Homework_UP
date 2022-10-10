#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    if ((x <= -2 || x >= 0) || (sqrt((-x - 1) * (-x - 1) + (y) * (y)) > 2) 
    || (sqrt((-x - 3) * (-x - 3) + y * y) > 10) || (y <= 0))
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}