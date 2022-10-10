#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, k;
    float result = 0;
    cout << "Enter two numbers: " << endl;
    cin >> n >> k;

    result = log(n) / log(k);
    cout << floor(result);

    return 0;
}