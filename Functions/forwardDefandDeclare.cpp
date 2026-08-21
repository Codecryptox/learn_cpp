#include <iostream>

// Forward declaration allows us to tell the compiler the existence of the identifier 
// before actually defining it.


int add (int x, int y); // Function declaration includes return type, function name and parameters.

//int add (int , int );  This is also a valid function declaration.

int main(){

    std::cout << add(2,3) << '\n';
    return 0;
}

int add (int x, int y){
    return x + y;
}

/*
Declaration 	Tells compiler about an identifier and its associated type information.	    void foo(); // function forward declaration (no body)
                                                                                            void goo() {}; // function definition (has body)
                                                                                            int x; // variable definition
Definition	    Implements a function or instantiates a variable.
                Definitions are also declarations.	                                                        void foo() { } // function definition (has body)
                                                                                            int x; // variable definition
Pure declaration	A declaration that isn’t a definition.	                                void foo(); // function forward declaration (no body)
Initialization	Provides an initial value for a defined object.	                            int x { 2 }; // x is initialized to value 2




*/
// One Definition Rule in cpp
// 1. There can only be one defintion of function, variable or class in a file in given scope.
// 2. There can only be one defintion of function, variable or class in a program in given scope.
// 3. Types, Templates and inline function can have multiple definition as long as they are identical and they are in different file.