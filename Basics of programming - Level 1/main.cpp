#include <iostream>
// #include <iostream> means we're using the iostream library, which allows us to perform input and output operations.
// #include <cmath> means we're using the cmath library, which allows us to perform mathematical operations.

using namespace std;
// This line tells the compiler to use the standard namespace, which allows us to use standard library functions without specifying the namespace.
// For example, we can use cout instead of std::cout.
// The standard namespace contains functions and objects that are part of the C++ standard library.
// some of the standard functions are cin, cout, endl, etc.
//some namespace are std, std::chrono, std::filesystem, std::literals, std::placeholders, std::rel_ops, std::this_thread, std::chrono_literals, std::filesystem_literals, std::placeholders_literals, std::rel_ops_literals, std::this_thread_literals.

int main(int argc, char const *argv[])
// The main function is the entry point of the program.
// int argc, char const *argv[] are command line arguments that can be passed to the program.
{
    cout<<"Hello, World!"<<endl;
    // This line prints "Hello, World!" to the console.

    return 0;
    // This line indicates that the program has executed successfully and returns 0 to the operating system.
}
