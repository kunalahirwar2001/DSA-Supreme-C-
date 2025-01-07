#include <iostream>
using namespace std;
bool checkPrime(int n)
{
    // we will check if n is prime or not
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // if n is divisible by any number between 2 and n-1 then it is not prime
            return false;
        }
    }
    return true;
}
int main()
{
    cout << "Enter a number: " << endl;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // lets cgeck if i is prime or not
        bool isPrime = checkPrime(i);

        if (isPrime)
        {
            cout << "Prime:" << i << endl;
        }
        else{
            cout << "Non Prime:" << i << endl;
        }
    }

    return 0;
}