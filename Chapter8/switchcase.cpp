// In Switch statement a condition is evaluated to produce some value which is evaluated against different values.
// Use "switch" keyword to start the switch case block
// the case label defines the values against which the condition evaluated by switch statement is compared against.
// break statement helps to break from the switch case after a ceratin case result is evaluated to true.
// default keyword defines the default label that is executes when the value of the switch condition does not match any of the case values.
// Place the default case last in the switch block.
// Each set of statements underneath a label should end in a break-statement or a return-statement. This includes the statements underneath the last label in the switch.
// Prefer a switch-statement over if-else statements when testing a single expression (with a non-boolean integral type or an enumerated type) for equality against a small set of values.


// A Fallthrough happens when after executing the case label in switch statement subsequent cases are also being evaluated as there is no break or return statement.
// To help this in c++ 17 a [[fallthrough]] attribute was added to help compiler identify that fallthrough is intentional.
// Attribute are modern cpp feature that provide the compiler some additional data about the code. they are placed in [[]].

#include <iostream>

void printDigitName(int x){
    switch(x)
    {
    case 1:
        std::cout << "One";  //his is part of the switch scope not implict block of the case label.
        break;
    case 2:
        std::cout << "Two";
        // [[fallthrough]];     This is an example of fall through .
        break;
    case 3:
        std::cout << "Three";
        break;
    default :
        std::cout << "unknown";
    
    }

    std::cout << " This statement prints after the switch statement ";
}
int main(){


    // You can declare or define (but not initialize) variables inside the switch, both before and after the case labels:

    /*
        switch (1)
        {
            int a; // okay: definition is allowed before the case labels
            int b{ 5 }; // illegal: initialization is not allowed before the case labels

        case 1:
            int y; // okay but bad practice: definition is allowed within a case
            y = 4; // okay: assignment is allowed
            break;

        case 2:
            int z{ 4 }; // illegal: initialization is not allowed if subsequent cases exist
            y = 5; // okay: y was declared above, so we can use it here too
            break;

        case 3:
            break;
        }
    
    */


    // If defining variables used in a case statement, do so in a block inside the case.

    /*
        switch (1)
        {
        case 1:
        { // note addition of explicit block here
            int x{ 4 }; // okay, variables can be initialized inside a block inside a case
            std::cout << x;
            break;
        }

        default:
            std::cout << "default case\n";
            break;
        }
    */
    printDigitName(3);
    std::cout << '\n';
    printDigitName(4);
    std::cout << '\n';
    return 0;
}



// Exercise

// #include <iostream>

// int calculate (int a, int b, char op){

//     switch(op)
//     {
//     case '+':
//         return a + b;
//     case '-':
//         return a - b;
//     case '*':
//         return a * b;
//     case '/':
//         return a / b;
//     case '%':
//         return a % b;
//     default:
//         std::cout << "Invalid Operator \n";
//         return 0;
//     }
// }
// int main(){

//     int num1{}, num2{};
//     char op{};
//     std::cout << "Enter First Number : \n";
//     std::cin >> num1;
//     std::cout << "Enter a mathematical operator (+, -, *, /, or %): \n";
//     std::cin >> op;
//     std::cout << "Enter Second Number : \n";
//     std::cin >> num2;

//     int result{calculate(num1, num2, op)};
//     std::cout << num1 << ' ' << op << ' ' << num2 << " is " << result << '\n';


//     return 0;
// }