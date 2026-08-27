#include <iostream>
#include <string>   // this library helps to use the string method in cpp
#include <string_view>

// If std::string doesn’t have enough memory to store a string, 
//it will request additional memory (at runtime) using a form of memory allocation known as dynamic memory allocation.

void printStringView(std::string_view str){
    std::cout << "My Name is " << str << '\n';
}
int main(){

    using namespace std::string_literals;
    using namespace std::string_view_literals;

    std::string color {"blue"};
    color = "green";

    // std::string name {};
    // std::cin >> name; // This will not print the full name it only prints upto first white space.

    // std::cout << "My name is " << name << '\n';

    std::string num {"356"};
    std::cout << "My Favourite color is " << color << '\n';
    std::cout << "This is a string not number " << num << '\n';


    // If using std::getline() to read strings, use std::cin >> std::ws input manipulator to ignore leading whitespace.
    // This needs to be done for each std::getline() call, as std::ws is not preserved across calls.

    // Whenever a std::string is initialized, a copy of the string used to initialize it is made. 
    // Do not pass std::string by value, as it makes an expensive copy.


    std::string birth_date {};
    std::getline(std::cin >> std::ws, birth_date);
    std::cout << "My Birth Date is " << birth_date << '\n';
    std::cout << "Birth Date has " << birth_date.length() << " characters \n";
    std::cout << "Birth Date has " << std::size(birth_date) << " characters \n"; // another way to print teh lenght of the string 
    std::cout << "StringLiteral\n"s; // std::string Literals

    std::string_view str{"Hello, Akash!"};  // Prefer std::string_view over std::string when you need a read-only string, especially for function parameters.
    printStringView(str);
    std::cout << "StringViewLiteral\n"sv; // std::string_view Literals

    constexpr std::string_view str2{"Demo"}; // std::string_view has full support for the constexpr
    std::cout << str2 << '\n'; // str2 will be replace at the compile time

    //A std::string_view that is viewing a string that has been destroyed is sometimes called a dangling view.


    return 0;
}

/*
Things to remember about std::string:

Initializing and copying std::string is expensive, so avoid this as much as possible.
Avoid passing std::string by value, as this makes a copy.
If possible, avoid creating short-lived std::string objects.
Modifying a std::string will invalidate any views to that string.
It is okay to return a local std::string by value.

Things to remember about std::string_view:

std::string_view is typically used for passing string function parameters and returning string literals.
Because C-style string literals exist for the entire program, it is always okay to set a std::string_view to a C-style string literal.
When a string is destroyed, all views to that string are invalidated.
Using an invalidated view (other than using assignment to revalidate the view) will cause undefined behavior.
A std::string_view may or may not be null-terminated.
*/

/*
Variables

Use a std::string variable when:

You need a string that you can modify.
You need to store user-inputted text.
You need to store the return value of a function that returns a std::string.
Use a std::string_view variable when:

You need read-only access to part or all of a string that already exists elsewhere and will not be modified or destroyed before use of the std::string_view is complete.
You need a symbolic constant for a C-style string.
You need to continue viewing the return value of a function that returns a C-style string or a non-dangling std::string_view.
Function parameters

Use a std::string function parameter when:

The function needs to modify the string passed in as an argument without affecting the caller. This is rare.
You are using language standard C++14 or older and aren’t comfortable using references yet.
Use a std::string_view function parameter when:

The function needs a read-only string.
The function needs to work with non-null-terminated strings.
*/

// #include <iostream>
// #include <string>
// #include <string_view>

// int main()
// {
//     std::string s { "Hello, world!" };
//     std::string_view sv { s }; // sv is now viewing s

//     s = "Hello, universe!";    // modifies s, which invalidates sv (s is still valid)
//     std::cout << sv << '\n';   // undefined behavior

//     sv = s;                    // revalidate sv: sv is now viewing s again
//     std::cout << sv << '\n';   // prints "Hello, universe!"

//     // If an argument is a temporary that is destroyed at the end of the full expression containing the function call, 
//     // the returned std::string_view must be used immediately, as it will be left dangling after the temporary is destroyed.

//     // string_view modification fn : 
//     //The remove_prefix() member function removes characters from the left side of the view.
//     //The remove_suffix() member function removes characters from the right side of the view.
//     std::string_view str{"Mountain"};
//     std::cout << "String is " << str <<'\n';

//     str.remove_prefix(3);
//     std::cout << "String is " << str <<'\n';

//     str.remove_suffix(3);
//     std::cout << "String is " << str <<'\n';

//     //While std::string_view can be used to view an entire string without making a copy, they are also useful when we want to view a substring without making a copy. 
//     //A substring is a contiguous sequence of characters within an existing string.


//     return 0;
// }

// Question 1

// #include <iostream>
// #include <string>
// #include <string_view>

// std::string getUserName(){

//     std::string name{};
//     std::getline(std::cin >> std::ws, name);
//     return name;
// }

// int getUserAge(){

//     int age;
//     std::cin >> age;
//     return age;
// }

// void printResult(std::string_view name, int age){

//     std::cout << "Enter your full Name : " << name <<'\n';
//     std::cout << "Enter your age : " << age << "\n";
//     std::cout << "your age + length of name is " << static_cast <int>(name.length()) + age << '\n';
// }
// int main(){

//     std::string_view userName {getUserName()};
//     int userAge {getUserAge()};
//     printResult (userName, userAge);
//     return 0;

// }