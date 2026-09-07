// #include <iostream>
// #include <cmath>

// int getValue(){

//     int input{};
//     std::cout << "Enter an Integer : " << '\n';
//     std::cin >> input;
//     return input;

// }
// int main(){

//     int c{-4}; // Unary minus operator
//     int a{10};
//     int b{5};

//     constexpr int x{40};
//     constexpr int y{6};
//     int z{10};
//     std::cout << "Addition :" << a+b << '\n';
//     std::cout << "Subtraction :" << a-b << '\n';
//     std::cout << "Multiplication :" << a*b << '\n';
//     std::cout << "Division :" << a/b << '\n';
//     std::cout << "Modulo / remainder :" << a%b << '\n';

// // Floating point div returns float value
// // integer point div returns int value
// // if any one of the operand is float it becomes the float operation.
//     std::cout << "int / int = " << x/y << '\n' ;
//     std::cout << "int / double = " << x / static_cast<double> (y) << '\n';
//     // std::cout << "Div by zero = " << x/z << '\n'; //   Division by zero warning error.

//     // The arithematic assignment operators cannot be used with the std::cout as it provides buffered stream to the output
//     // std::cout << "Addition assignment : ";
//     // z+=6;     
//     // std::cout << "\nSubtraction assignment : ";
//     // z-=6;
//     // std::cout << "\nMultiplication assignment : ";
//     // z*=10;
//     // std::cout << "\nDivision assignment : ";
//     // z/=3;
//     // std::cout << "\nModulo assignment : ";
//     // z%=2;

//     //An operator that can modify the value of one of its operands is informally called a modifying operator.
//     // Assignmnet operators along with arithematic assignment and bitwise assignment operators are the modifying operator
//     // Incremnet and decrement operator. 

//     double exp {std::pow(2.0, 3.0)};
//     std::cout << "2 to the power 3 is : " << exp << '\n';


//     /*
//     Operator	                            Symbol	Form	Operation
//     Prefix increment (pre-increment)	    ++	    ++x	    Increment x, then return x
//     Prefix decrement (pre-decrement)	    ––	    ––x	    Decrement x, then return x
//     Postfix increment (post-increment)	++	    x++	    Copy x, then increment x, then return the copy
//     Postfix decrement (post-decrement)	––	    x––	    Copy x, then decrement x, then return the copy

//     */

//     // The prefix increment/decrement operators are very straightforward. First, the operand is incremented or decremented, and then expression evaluates to the value of the operand.
//     // The postfix increment/decrement operators are trickier. First, a copy of the operand is made. Then the operand (not the copy) is incremented or decremented. 


//     int i{10};
//     int j{10};

//     // favor prefix increment op in most cases
//     std::cout << i << ' ' << j << '\n';                                    // 10   10
//     std::cout << ++i << ' ' << --j << '\n'; // prefix                      // 11    9
//     std::cout << i << ' ' << j << '\n';                                    // 11    9
//     std::cout << i++ << ' ' << j-- << '\n'; // postfix                     // 11    9
//     std::cout << i << ' ' << j << '\n';                                    // 12    8


//     /*
//     Operator	Symbol	Form	Operation
//     Comma	    ,	    x, y	Evaluate x then y, returns value of y
//     */

//     // The comma operator (,) allows you to evaluate multiple expressions wherever a single expression is allowed. The comma operator evaluates the left operand, then the right operand, and then returns the result of the right operand.
//    // Avoid using the comma operator, except within for loops.
//     int x1{4};
//     int y1{5};

//     std::cout << (++x1, ++y1) << '\n'; // here ++x1 is eveluated first then ++y1 then the result of ++y1 is displayed.

//     // Operator	    Symbol	    Form	        Meaning
//     //Conditional	    ?:	    c ? x : y	    If conditional c is true then evaluate x, otherwise evaluate y

//     /*
//     The conditional operator (?:) (also sometimes called the arithmetic if operator) is a ternary operator (an operator that takes 3 operands). 
//     Because it has historically been C++’s only ternary operator, it’s also sometimes referred to as “the ternary operator”.
//     condition ? expression1 : expression2;

//     Parenthesize the entire conditional operation (including operands) when used in a compound expression.
//     For readability, consider parenthesizing the condition if it contains any operators (other than the function call operator).
    
//     The conditional operator is most useful when doing one of the following:

//     Initializing an object with one of two values.
//     Assigning one of two values to an object.
//     Passing one of two values to a function.
//     Returning one of two values from a function.
//     Printing one of two values.

//     */


//     int x2{getValue()};
//     int y2 {getValue()};

//     int max ((x2>y2)? x2 : y2);
//     std::cout << "Max of "<< x2 << " and " << y2 << " is " << max <<'\n';


//     return 0;

// }


// #include <iostream>
// #include <cmath>   // for std::abs
// #include <algorithm> // for std::max 

// /*
// Operator	                Symbol	Form	Operation
// Greater than	                >	x > y	true if x is greater than y, false otherwise
// Less than	                    <	x < y	true if x is less than y, false otherwise
// Greater than or equals	        >=	x >= y	true if x is greater than or equal to y, false otherwise
// Less than or equals	            <=	x <= y	true if x is less than or equal to y, false otherwise
// Equality	                    ==	x == y	true if x equals y, false otherwise
// Inequality	                    !=	x != y	true if x does not equal y, false otherwise

// */

// bool approxEqualBool(double a, double b, double absEpsilon){
//     return std::abs(a-b)<= absEpsilon;
// }
// int main(){

//     // Don’t add unnecessary == or != to conditions. It makes them harder to read without offering any additional value.
//     // for e.g if(a==true) can be written as if(a)
//     // do not use comaprison operator especially == or != for floating point values.

//     std::cout << "Enter an integer: ";
//     int x{};
//     std::cin >> x;

//     std::cout << "Enter another integer: ";
//     int y{};
//     std::cin >> y;

//     if (x == y)
//         std::cout << x << " equals " << y << '\n';
//     if (x != y)
//         std::cout << x << " does not equal " << y << '\n';
//     if (x > y)
//         std::cout << x << " is greater than " << y << '\n';
//     if (x < y)
//         std::cout << x << " is less than " << y << '\n';
//     if (x >= y)
//         std::cout << x << " is greater than or equal to " << y << '\n';
//     if (x <= y)
//         std::cout << x << " is less than or equal to " << y << '\n';


//     constexpr double d1{ 100.0 - 99.99 }; // should equal 0.01 mathematically
//     constexpr double d2{ 10.0 - 9.99 }; // should equal 0.01 mathematically

//     if (d1 == d2)
//         std::cout << "d1 == d2" << '\n';
//     else if (d1 > d2)
//         std::cout << "d1 > d2" << '\n';
//     else if (d1 < d2)
//         std::cout << "d1 < d2" << '\n';

//     // So question is how do we compare the floating point numbers
//     // we use the epsilon value of those two numbers to represent if they are close enough

//     double a{0.001};
//     double b{0.0011};

//     bool answer{approxEqualBool(a, b, 0.1)};
//     if(answer){
//         std::cout << "a == b" << '\n';
//     }

//     return 0;
// }


// exercise 6.3 question no 2

// #include <iostream>

// constexpr bool isEven( int num){

//     return (num % 2) == 0;
// }

// int getValue(){

//     int input{};
//     std::cout << "Enter an Integer : " << '\n';
//     std::cin >> input;
//     return input;

// }
// int main(){

//     int x{getValue()};
//     if(isEven(x)){
//         std::cout << x << " is Even ." << '\n';
//     }

//     else{
//         std::cout << x << " is Odd ." << '\n';
//     }
//     return 0;
// }




/*
C++ has 3 logical operators:

Operator	        Symbol	        Example Usage	    Operation
Logical NOT	        !	                !x	            true if x is false, or false if x is true
Logical AND	        &&	                x && y	        true if x and y are both true, false otherwise
Logical OR	        ||	                x || y	        true if either (or both) x or y are true, false otherwise



Logical NOT (operator !)
Operand	Result
true	false
false	true

If logical NOT is intended to operate on the result of other operators, the other operators and their operands need to be enclosed in parentheses.


Logical OR (operator ||)
Left operand	Right operand	Result
false	false	false
false	true	true
true	false	true
true	true	true


Logical AND (operator &&)
Left operand	Right operand	Result
false	false	false
false	true	false
true	false	false
true	true	true

Short circuit evaluation may cause Logical OR and Logical AND to not evaluate the right operand. Avoid using expressions with side effects in conjunction with these operators.

When mixing logical AND and logical OR in a single expression, explicitly parenthesize each operation to ensure they evaluate how you intend.

De Morgan’s laws
!(x && y) is equivalent to !x || !y
!(x || y) is equivalent to !x && !y


Logical XOR
Left operand	Right operand	Result
false	false	false
false	true	true
true	false	true
true	true	false


There is no Logical XOR operator in cpp note that ^ refers to the bitwise xor operator which is different
operator!= produces the same result as a logical XOR when given bool operands

Operator name	Keyword alternate name
&&	and
||	or
!	not
This means the following are identical:

std::cout << !a && (b || c);
std::cout << not a and (b or c);

*/
// #include <iostream>

// bool isEven (int num){

//     return !(num % 2);
// }

// int main(){

//     std::cout << "Enter an integer : ";
//     int x{};

//     std::cin >> x;
//     if (isEven(x))
//         std::cout << x <<" is an even number." << '\n';

//     else
//         std::cout << x << " is a odd number." << '\n';

//     if (x > 10 && x < 20)
//         std::cout << "Num is between 10 and 20." << '\n';

//     else
//         std::cout << "Num is not between 10 and 20." << '\n';

//     if(x > 0 || isEven(x))
//         std::cout << "Either a positive muber or even number who knows :)" << '\n';


//     return 0;
// }


#include <iostream>
#include <string_view>

std::string_view getQuantityPhrase(int numOfApples){

    if(numOfApples < 0){
        return "negative";
    }

    else if(numOfApples == 0){
        return "no";
    }

    else if(numOfApples == 1){
        return "single";
    }

    else if(numOfApples == 2){
        return "a couple of";
    }

    else if(numOfApples == 3){
        return "a few";
    }

    else{
        return "many";
    }
}

std::string_view getApplesPluralized(int numOfApples){

    return (numOfApples == 1) ? "apple" : "apples";

}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}