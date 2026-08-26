// const is a variable that cannot change it's value during execution
// two types of const in cpp : Named constant - constant associated with an identifier
// Literal Constant - constant not associated with an identifier

// Intializer of const value can be non const value.
// do not use const for value parameter or for value return type of function.
// Use const variable wherever possible to reduce the complexity
// Prefer const variable over macro like substitution text like #define PI 3.14 etc as it has global scope and hard to debug


// Literals are values that are directly inserted into the code.
/*

Literal value	    Examples	    Default literal type	    Note

integer value	    5, 0, -3	        int	
boolean value	    true, false	        bool	
floating point 
value	            1.2, 0.0, 3.4	    double (not float!)	
character	        ‘a’, ‘\n’	        char	
C-style string	    “Hello, world!”	    const char[14]	           see C-style string literals section below

*/

// We can add Literal suffix to change the default type of the literal
// Prefer uppercase value like 'L' instead of 'l' for literal suffix
#include <iostream>

int printvalue (){
    return 5;
}
int main(){

    const double pi = 3.14; // Place const before the datatype
    
    double d {9.8}; // a double literal
    bool AgeVerifed {true}; // Bool Literal
    std::cout << "Print value of Int Literal : " << printvalue() << '\n';
    //pi = 4.25;  this will throw error as pi is defined as constant.
    std::cout << "The value of PI is : " << pi <<'\n';

    std::cout << 5 << '\n';   // 5 is of type int
    std::cout << 5L << '\n';  // 5 is of type long
    std::cout << 5u << '\n';  // 5 is of type unsigned int

    std::cout << 4.234f << '\n'; // 4.234f is of type float
    std::cout << 4.234l << '\n'; // type long double

    std::cout << "This is a String Literal." << '\n';
    // String literals are placed in double quotes whereas char literals are placed in single quotes
    // C style string literals always have an extra character added at the end of the string '\0' null terminator used to define the end of string for the compiler.
    return 0;
}

