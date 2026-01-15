#include <iostream>

int main(){

    //std::cout prints the output to the console.
    //std::cin take the input from the user.

    std::cout << "Enter Two numbers : " <<"\n";
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