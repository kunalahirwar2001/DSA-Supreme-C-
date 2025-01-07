// Typecasting in C++ is a way to convert a variable from one data type to another data type.
// There are two types of typecasting in C++:
// 1. Implicit Typecasting
// 2. Explicit Typecasting

// Implicit Typecasting
// In Implicit Typecasting, the compiler automatically converts one data type into another data type without any user intervention.
// For example, if you assign an integer value to a float variable, the compiler will automatically convert the integer to a float.
// Example:
// int a = 10;
// float b = a; // Implicit Typecasting
// In the above example, the integer value 10 is implicitly converted to a float value and stored in the variable b.

// Explicit Typecasting
// In Explicit Typecasting, the user explicitly converts one data type into another data type using the casting operator.
//int a = 10;
//float b = (float)a; // Explicit Typecasting 
// In the above example, the integer value 10 is explicitly converted to a float value using the casting operator and stored in the variable b.

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
// integer to character
    int a = 65;
    char ch = a;
    cout << ch << endl; // Output: A

// character to integer
    char ch1 = 'A';
    int a1 = ch1;
    cout << a1 << endl; // Output: 65

// integer to float
    int a2 = 10;
    float b = a2;
    cout << b << endl; // Output: 10

// integer to double
    int a4 = 10;
    double d = a4;
    cout << d << endl; // Output: 10

// char to int
    char ch2 = '1';
    int a6 = ch2 - '0';
    cout << a6 << endl; // Output: 1

// int to char
    int a7 = 1;
    char ch3 = a7 + '0';
    cout << ch3 << endl; // Output: 1
    return 0;

// Explicit Typecasting
// float to integer
    float b1 = 10.5;
    int a3 = (int)b1;
    cout << a3 << endl; // Output: 10

// double to integer
    double d1 = 10.5;
    int a5 = (int)d1;
    cout << a5 << endl; // Output: 10

// char to float
    char ch4 = '1';
    float b2 = (float)(ch4 - '0');
    cout << b2 << endl; // Output: 1

    return 0;

}