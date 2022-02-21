#include <iostream>
using namespace std;

int main()
{
    // find the prime number of the given numbers of the range
    int n, i, j, k, count = 0;
    cout << "Enter the range of the prime numbers: ";
    cin >> n;
    int prime[n];
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            prime[count] = i;
            count++;
        }
    }
    cout << "The prime numbers are: ";
    for (k = 0; k < count; k++)
    {
        cout << prime[k] << " ";
    }
    cout << endl;
    return 0;
}