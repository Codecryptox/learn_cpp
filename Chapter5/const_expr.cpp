// constexpr is a keyword that declares a variable or function can be evaluated at compile time for optimization,
//Any constant variable whose initializer is a constant expression should be declared as constexpr.
// Any constant variable whose initializer is not a constant expression (making it a runtime constant) should be declared as const.
// constexpr is a function that evaluates at compile time. it takes all arguments as constant expression
//e.g constexpr int findMax(int x, int y);

int max(int x, int y) // this is a non-constexpr function
{
    if (x > y)
        return x;
    else
        return y;
}

constexpr int cmax(int x, int y) // this is a constexpr function
{
    if (x > y)
        return x;
    else
        return y;
}

#include <iostream>

int getNumber()
{
    std::cout << "Enter a number: ";
    int y{};
    std::cin >> y; // can only execute at runtime

    return y;      // this return expression is a runtime expression
}

// The return value of a non-constexpr function is a runtime expression
// even when the return expression is a constant expression
int five()
{
    return 5;      // this return expression is a constant expression
}

int main()
{
    // Literals can be used in constant expressions
    5;                           // constant expression
    1.2;                         // constant expression
    "Hello world!";              // constant expression

    // Most operators that have constant expression operands can be used in constant expressions
    5 + 6;                       // constant expression
    1.2 * 3.4;                   // constant expression
    8 - 5.6;                     // constant expression (even though operands have different types)
    sizeof(int) + 1;             // constant expression (sizeof can be determined at compile-time)

    // The return values of non-constexpr functions can only be used in runtime expressions
    getNumber();                 // runtime expression
    five();                      // runtime expression (even though the return expression is a constant expression)

    // Operators without constant expression operands can only be used in runtime expressions
    std::cout << 5;              // runtime expression (std::cout isn't a constant expression operand)


        // Const integral variables with a constant expression initializer can be used in constant expressions:
    const int a { 5 };           // a is usable in constant expressions
    const int b { a };           // b is usable in constant expressions (a is a constant expression per the prior statement)
    const long c { a + 2 };      // c is usable in constant expressions (operator+ has constant expression operands)

    // Other variables cannot be used in constant expressions (even when they have a constant expression initializer):
    int d { 5 };                 // d is not usable in constant expressions (d is non-const)
    const int e { d };           // e is not usable in constant expressions (initializer is not a constant expression)
    const double f { 1.2 };      // f is not usable in constant expressions (not a const integral variable)

    const int x { 3 + 4 }; // constant expression 3 + 4 must be evaluated at compile-time
    int y { 3 + 4 };       // constant expression 3 + 4 may be evaluated at compile-time or runtime



    constexpr double c3{9.8}; // const expression
    constexpr int xc{2+5}; // also compiles constant expression
    // std::cout << "Enter your age: ";
    // int age{};
    // std::cin >> age;

    // constexpr int myAge { age };      // compile error: age is not a constant expression
    // constexpr int f { five() };       // compile error: return value of five() is not constexpr

    int m1 { max(5, 6) };            // ok
    const int m2 { max(5, 6) };      // ok
    // constexpr int m3 { max(5, 6) };  // compile error: max(5, 6) not a constant expression

    int m4 { cmax(5, 6) };           // ok: may evaluate at compile-time or runtime
    const int m5 { cmax(5, 6) };     // ok: may evaluate at compile-time or runtime
    constexpr int m6 { cmax(5, 6) }; // okay: must evaluate at compile-time

    return 0;
}