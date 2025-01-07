// DEcimal Number system is a base 10 number system. It uses 10 digits from 0 to 9.
// Binary Number system is a base 2 number system. It uses 2 digits 0 and 1.
#include <iostream>
#include <cmath>
// Decimal to Binary Conversion
// 1. Divide the number by 2.
// 2. Get the integer quotient for the next iteration.
// 3. Get the remainder for the binary digit.
// 4. Repeat the steps until the quotient is equal to 0.
// 5. The binary equivalent is the remainder read from bottom to top.
using namespace std;
int decimalToBinaryMeathod(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        cout << bit << endl;
        n = n / 2;
    }
    return binaryno;
}
int decimalToBinaryBitwiseMeathod(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        cout << bit << endl;
        n = n >> 1;
    }
    return binaryno;
}

// Binary to Decimal Conversion
// 1. Multiply every digit of the binary number with 2 raised to the power of the position of the digit.
// 2. Add all the results together.
// 3. The sum is the decimal equivalent of the binary number.
int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n = n / 10;
    }
    return decimal;
}

int binaryToDecimalbitwiseMeathod(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        decimal = bit * pow(2, i++) + decimal;
        n = n >> 1;
    }
    return decimal;
}



int main()
{
    int n;
    cin >> n;
    // int binary = decimalToBinaryBitwiseMeathod(n);
    int decimal = binaryToDecimal(n);
    cout << decimal;
    return 0;
}