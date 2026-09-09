#include <iostream>

int g_x{}; // this is a global variable they normally have the prefix g or g_.

static int g_y{}; // g_y is global variable with internal linkage
// These both have internal linkage by default .
const int g_y1 { 2 };     // defines initialized internal global const variable
constexpr int g_y2 { 3 }; // defines initialized internal global constexpr variable


//An identifier with external linkage can be seen and used both from the file in which it is defined, and from other code files (via a forward declaration). 
//In this sense, identifiers with external linkage are truly “global” in that they can be used anywhere in your program!
// Global variables with external linkage are sometimes called external variables. They can defined using the extern keyword.

// Best practice

//Only use extern for global variable forward declarations or const global variable definitions.
//Do not use extern for non-const global variable definitions (they are implicitly extern).

/*
// Global variable forward declarations (extern w/ no initializer):
extern int g_y;                 // forward declaration for non-constant global variable
extern const int g_y;           // forward declaration for const global variable
extern constexpr int g_y;       // not allowed: constexpr variables can't be forward declared

// External global variable definitions (no extern)
int g_x;                        // defines non-initialized external global variable (zero initialized by default)
int g_x { 1 };                  // defines initialized external global variable

// External const global variable definitions (extern w/ initializer)
extern const int g_x { 2 };     // defines initialized const external global variable
extern constexpr int g_x { 3 }; // defines initialized constexpr external global variable
*/

// int value{5};
// namespace Foo{   // Foo is a namespace defined inside the global namespace.

//     int g_a{}; // g_a is a global variable defined inside the foo namepsace
// }

// void printValue(){
//         std::cout << "Value of the Global Varibale : " << value << '\n';
// }

// static int goo(){} // you can also define a internal linkage to function identifier using the static keyword.

// // variable shadowing is the process where the local variable in scope shadows or overrides the global variable in the same scope.

// // An identifier with an internal linkage cannot be access from the othe files.
// // We can explicitly define an internal linkage using the static keyword.

// int main(){

//     int a{5};  // This is a local var whose scope starts here
//     double d{3.145};

//     int value{10};

//     printValue();
//     std::cout << "Value of the Local Varibale : "<< value << '\n'; // Local var shadows the Global Var

//     {
//         int value {20};
//         std::cout << "Blocked scope variable value : " << value << '\n'; // Blocked varibale shadows the local var
//     }
//     g_x = 5;  // global varibales can be seen and modified everywhere.
//     Foo::g_a = 10; // To access the global var we have to write it like this.
//     return 0;
// } // The scope of teh var a and d ends here

// /*

// // Non-constant global variables
// int g_x;                 // defines non-initialized global variable (zero initialized by default)
// int g_x {};              // defines explicitly value-initialized global variable
// int g_x { 1 };           // defines explicitly initialized global variable

// // Const global variables
// const int g_y;           // error: const variables must be initialized
// const int g_y { 2 };     // defines initialized global const

// // Constexpr global variables
// constexpr int g_y;       // error: constexpr variables must be initialized
// constexpr int g_y { 3 }; // defines initialized global constexpr

// */


// int max (int x, int y){  /// Here var x and y scope starts here and ends at the end of this max fn
// // you cannot define another var with same name inside this scope .

// // Define variables in the most limited existing scope. Avoid creating new blocks whose only purpose is to limit the scope of variables.

//     if (x > y){
//         return x;
//     }

//     return y;
// }

// Static local variables

// #include <iostream>

// void printandIncrement(){

//     static int s_value{1};
//     ++s_value;
//     std::cout << s_value << '\n';
// }
// int main(){

//     printandIncrement();
//     printandIncrement();
//     printandIncrement();
    
//     return 0;
// }


// q1

// #include <iostream>

// int main(){

//     std::cout << "Enter an Integer : \n";
//     int smaller{};  // scope of smaller starts here 
//     std::cin >> smaller ;

//     std::cout << "Enter a larger integer : \n";
//     int larger{};
//     std::cin >> larger ; // scope of larger starts here

//     std::cout << "Swapping the Values \n";

//     if(smaller > larger){

//         int temp{}; // scope of temp starts here 
//         temp = smaller;
//         smaller = larger;
//         larger = temp;
//     } // scope of temp ends here

//     std::cout << "The smaller value is : " << smaller << '\n';
//     std::cout << "The larger value is : " << larger << '\n';

//     return 0;
// }  // scope of smaller and larger ends here


