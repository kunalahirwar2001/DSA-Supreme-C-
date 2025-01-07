#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    //Associativity of operators
    //Associativity of operators is the order in which operators of the same precedence are evaluated in an expression.
    //Operators with left-to-right associativity are evaluated from left to right.
    //Operators with right-to-left associativity are evaluated from right to left.
    //For example, in the expression `a + b + c`, the `+` operator has left-to-right associativity, so `a + b` is evaluated first, and then the result is added to `c`.
    //In the expression `a * b * c`, the `*` operator has left-to-right associativity, so `a * b` is evaluated first, and then the result is multiplied by `c`.

    //Precedence of operators
    //Precedence of operators determines the order in which operators are evaluated in an expression.
    //Operators with higher precedence are evaluated before operators with lower precedence.
    //For example, in the expression `a + b * c`, the `*` operator has higher precedence than the `+` operator, so `b * c` is evaluated first, and then the result is added to `a`.
    //Parentheses can be used to override the default precedence of operators. For example, `(a + b) * c` will add `a` and `b` first, and then multiply the result by `c`.
    

    // Arithmetic Operators: +, -, *, /, %
    cout << " Addition = " << (a + b) << endl; // 30
    cout << " Subtraction = " << (a - b) << endl; // -10
    cout << " Multiplication = " << (a * b) << endl; // 200
    cout << " Division = " << (a / b) << endl; // 0
    cout << " Modulus = " << (a % b) << endl; // 10

    // Unary Operators: ++, --
    
    // a = 10
    cout << " Pre Increment = " << (++a) << endl; // a = 11
    // a = 11
    // b = 20
    cout << " Pre Decrement = " << (--b) << endl; // b = 19
    // a = 11
    // b = 19
    cout << " Post Increment = " << (a++) << endl; // a = 11
    // a = 12
    // b = 19
    cout << " Post Decrement = " << (b--) << endl; // b = 19
    // b = 18

    // Relational Operators: ==, !=, >, <, >=, <=
    cout << " Equal to = " << (a == b) << endl; // false
    cout << " Not Equal to = " << (a != b) << endl; // true
    cout << " Greater than = " << (a > b) << endl; // false
    cout << " Less than = " << (a < b) << endl; // true
    cout << " Greater than or Equal to = " << (a >= b) << endl; // false
    cout << " Less than or Equal to = " << (a <= b) << endl; // true

    // Logical Operators: &&, ||, !
    cout << " Logical AND = " << ((a == b) && (a != b)) << endl; // false
    cout << " Logical OR = " << ((a == b) || (a != b)) << endl; // true
    cout << " Logical NOT = " << !(a == b) << endl; // true


    // Assignment Operators: =, +=, -=, *=, /=, %=
    int num1 = 200;
    int num2 = 300;

    num1 += num2; // num1 = num1 + num2
    cout << " += " << num1 << endl; // 500

    num1 -= num2; // num1 = num1 - num2
    cout << " -= " << num1 << endl; // 200

    num1 *= num2; // num1 = num1 * num2
    cout << " *= " << num1 << endl; // 60000

    num1 /= num2; // num1 = num1 / num2
    cout << " /= " << num1 << endl; // 200

    num1 %= num2; // num1 = num1 % num2
    cout << " %= " << num1 << endl; // 200

    // Ternary Operator: ?:
    int num3 = 10;
    int num4 = 20;
    int result = (num3 > num4) ? num3 : num4;
    cout << " Ternary Operator = " << result << endl; // 20

    return 0;
}
