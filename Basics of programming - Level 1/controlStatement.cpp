#include <iostream>
using namespace std;

int main() {
    // Control statements are used to control the flow of execution in a program.

    // In C++, there are three types of control statements:
    // 1. Selection statements: Used to select a particular statement or block of statements to execute.
    // 2. Iteration statements: Used to repeat a block of statements.
    // 3. Jump statements: Used to transfer control to a different part of the program.

    // 1. Selection statements

    // Example of an `if` statement:
    int x = 10;
    if (x > 5) {
        cout << "x is greater than 5" << endl;
    }
    // Output: x is greater than 5

    // Example of an `if-else` statement:
    int y = 10;
    if (y > 5) {
        cout << "y is greater than 5" << endl;
    } else {
        cout << "y is less than or equal to 5" << endl;
    }
    // Output: y is greater than 5

    // Example of an `if-else-if` statement:
    int z = 10;
    if (z > 5) {
        cout << "z is greater than 5" << endl;
    } else if (z < 5) {
        cout << "z is less than 5" << endl;
    } else {
        cout << "z is equal to 5" << endl;
    }
    // Output: z is greater than 5

    // Example of a nested `if` statement:
    int a = 10, b = 20;
    if (a == 10) {
        if (b == 20) {
            cout << "a is 10 and b is 20" << endl;
        }
    }
    // Output: a is 10 and b is 20

    // 2. Iteration statements

    // Example of a `for` loop:
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }
    // Output:
    // 0
    // 1
    // 2
    // 3
    // 4

    // Example of a `while` loop:
    int j = 0;
    while (j < 5) {
        cout << j << endl;
        j++;
    }
    // Output:
    // 0
    // 1
    // 2
    // 3
    // 4

    // Example of a `do-while` loop:
    int k = 0;
    do {
        cout << k << endl;
        k++;
    } while (k < 5);
    // Output:
    // 0
    // 1
    // 2
    // 3
    // 4

    // Example of a nested loop:
    for (int l = 0; l < 3; l++) {
        for (int m = 0; m < 3; m++) {
            cout << l << " " << m << endl;
        }
    }
    // Output:
    // 0 0
    // 0 1
    // 0 2
    // 1 0
    // 1 1
    // 1 2
    // 2 0
    // 2 1
    // 2 2

    // 3. Jump statements

    // Example of a `break` statement:
    for (int n = 0; n < 5; n++) {
        if (n == 3) {
            break;
        }
        cout << n << endl;
    }
    // Output:
    // 0
    // 1
    // 2

    // Example of a `continue` statement:
    for (int o = 0; o < 5; o++) {
        if (o == 3) {
            continue;
        }
        cout << o << endl;
    }
    // Output:
    // 0
    // 1
    // 2
    // 4

    // 4. Switch statement

    // Example of a `switch` statement:
    int p = 2;
    switch (p) {
        case 1:
            cout << "p is 1" << endl;
            break;

        case 2:
            cout << "p is 2" << endl;
            break;

        default:
            cout << "p is neither 1 nor 2" << endl;
    }
    // Output: p is 2


    return 0;
}
