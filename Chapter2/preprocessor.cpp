/*
Before Compilation the .cpp file goes through the preprocessing phase. In this phase a program called as preprocessor makes some changes to the text of the code file
like removing comments and whitespace, expanding macros, including headerfiles, ensure each codfile ends in newline etc.

The entire process of preprocessing , compiling and linking is called as translation.

Preprocessor directives are the symbol that start with the # symbol and end with newline.
*/

/*
In C++, A macro is a rule that defines an input text that is replaced by some output text.
#define is a preprocessor directive used to define the macro. 
Two basic macros : Object like Macros and Function like Macros.
Good Practice is to use all uppercase letter to define Macros and use Macros without any substitution Text.
*/


/*
Conditional Compilation directives allows you to specify under what condition something will or won't compile.
#ifdef preprocessor directive allows you to check if an identifier is defined via macro. if it is defined then all the code between #ifdef and #endif will be compiled.
#ifndef preprocessor directive allows you to check if an identifier is not defined via macro. if it is not defined then all the code between #ifndef and #endif will be compiled.
*/

// The #include directive here includes the contents of the iostream header file into this code file.
#include <iostream>

// we can define macros like this
#define PI 3.14 // Object like Macro

int main(){

    std::cout << "Hi, I am Akash. Nice to meet you!" << '\n';

    #ifdef PI

    std::cout << "Value of Pi is : " << PI << '\n';

    #endif


    #ifndef PI

    std::cout << "Value of Pi is : " << PI << '\n';

    #endif

    return 0;
}