// A conditional statement is a statement that specifies if an associated statement with it should be execute dor not based on some condition.

// if (statement)
//    true_statement;                   if - synatx

// if (statement)
//      true_statement;
// else
//      false_statement;                if-else syntax


// if a single statement is defined inside the if stament you can include as it is or if there are multiple statment then use compound block

#include <iostream>

void ifif (bool a, bool b, bool c){

    if (a)    // This if is always evaluated
        std::cout << "a\n";
    if (b)    // This if is always evaluated
        std::cout << "b\n";
    if (c)   // This if is always evaluated
        std::cout << "c\n";   
}

int main(){

    int height {};
    std::cout << "Enter your height : ";
    std::cin >> height;

    if (height > 140)
        std::cout << "You can enjoy the ride . \n";   // This is single statement that is why you do not need compound blocks
        // std::cout << "please take the test again.\n" // This statement always execute it is not under the if statement.

    else // it only evaluates when the if condition is false.
        std::cout << "Sorry !, You cannot take the ride. \n";

    // Nested if-statements and the dangling else problem

    // int age{};
    // if (age >= 18)
    //     if(age <40)
    //        std::cout << "Your age is between 18 and 40";
    // // which if statement does this else belong to
    // else
    //     std::cout << "Your age is not between 18 and 40";
    
    // A null statement is an expression statement that consists of just a semicolon:

    /*
    if (x > 10)
    ; // this is a null statement
    */
    ifif(true, false, true);


    // C++17 introduces the constexpr if statement, which requires the conditional to be a constant expression. The conditional of a constexpr-if-statement will be evaluated at compile-time.
    // Favor constexpr if statements over non-constexpr if statements when the conditional is a constant expression.
    
    constexpr double gravity {9.8};

    if constexpr (gravity == 9.8)
        std::cout << "Gravity is normal . \n";

    else
        std::cout << "We are on another planet or in space. \n";
    return 0;
}