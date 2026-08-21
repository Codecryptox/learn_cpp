#include <iostream>

int main(){

    //std::cout prints the output to the console.
    //std::cin take the input from the user.

    /* Imprtant Note :
       Using std::endl is often inefficient, as it actually does two jobs: it outputs a newline (moving the cursor to the next line of the console), 
       and it flushes the buffer (which is slow).
       If we output multiple lines of text ending with std::endl, we will get multiple flushes, which is slow and probably unnecessary.
    */
    std::cout << "Enter Two numbers : " << '\n';
    int x {};
    std::cin >> x ;
    int y {};
    std::cin >> y ;

    std::cout << "You Entered two Numbers : "<< x <<" and " << y << std::endl;

    int z; // unintialized variable
    // The memory address that var z points to currently has garbage value
    std::cout << z ;

    return 0;
}