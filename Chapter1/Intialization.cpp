#include <iostream>

int main(){

    std::cout << 5 << std::endl;
    std::cout << 4.55 << std::endl;
    std::cout << 'Z' << std::endl;
    std::cout << '&' << std::endl;
    std::cout << "Hello Akash :)" << std::endl;


    int x; // defines a variable named x of type int
    int a, b;
    double balance;

    balance = 7000.52; // Assignment of value 7000.52 into variable balance
    // "=" is the Assignment operator copy the assignment value on RHS into the variable in the LHS
    // Also called copy assignment

    std::cout << balance << std::endl;

    balance = 10000;

    std::cout << balance << std::endl;

    int length {10}; // This is called initialization of variable length with value 10
    std::cout << length << std::endl;

    int a1; //default initialization
    int b1=10; // copy initialization (initial value after equals sign)
    int c1 (100);  // direct-initialization (initial value in parenthesis)

    // modern c++ intialization
    int d1 {79}; // direct list initialization (initial value in braces)
    int e {};      // value-initialization (empty braces)

    // An integer can hold only non fractional values 
    // direct list initialization allows for the narrowing conversions  
    //int integer {9.65}; // throw compiler error : lits-init does not allow narrowing conversion
    int integer1 = 8.25; // compiles value is initialized to 8

    //multiple variable intialization

    int a2, b2 =10; // here a2 is not intialized with value 10

    [[maybe_unused]] double gravity {9.81}; // tells the compiler to not throw warning if gravity is unused



    
    return 0;
}