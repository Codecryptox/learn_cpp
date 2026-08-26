//The process of converting data from one type to another type is called type conversion.
//When the compiler does type conversion on our behalf without us explicitly asking, we call this implicit type conversion
// Explicit type conversion allow us (the programmer) to explicitly tell the compiler to convert a value from one type to another type, and that we take full responsibility for the result of that conversion. 

//e.g static_cast is used for explicit casting

#include <iostream>

int main(){

    char ch {};
    std::cout << "Enter a single character : \n";
    std::cin >> ch;

    std::cout << "You entered " << ch << " which has ASCII value of " << static_cast<int>(ch) << '\n';
    return 0;
}