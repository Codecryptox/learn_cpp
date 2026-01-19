#include<iostream>

int divide(int x, int y){

    int z{x/y}; // z is a local variable
    // it is in local scope of the function and cannot be used outside the function.
    return z;
}

// Lifetime is runtime property
// Scope is a compile time property
int main(){

    // X is not in scope here
    int x {10}; 
    // X lifetime begins here
    // X is in scope here
    std::cout << divide(10,2) << std::endl; // x lifetime is active here
    return 0;
} // x lifetime ends here
// X is out of scope here