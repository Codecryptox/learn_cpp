// A halt is a control flow statement that terminates the program.
// std::exit() helps the program to terminate normally which means there was successful execution of the program.
// std::exit() does not cleanup the local variables in the current stack or heap.
// std::stexit() allows you to define a functionthat will be called during termination of the program.
// The std::abrt() causes your progrom to terminate abnormally which means there was some kind of runtime error during execution.
// std::abort() is called implcitly in static_asert.
// std::terminate() is used with the execptions.
#include <iostream>
#include <cstdlib>

void cleanup(){
    // some code written here to do manual cleanup.
    std::cout << "cleanup!" <<'\n';
}
int main(){
    std::atexit(cleanup); // In the parameter we so not pass the function only it's name beacuse we are not calling the function.

    std::cout << 1 << '\n';
    // std::exit(0); //The function will exit here normally

    std::abort();
    std::cout << 2 << '\n'; // This line will not be executed.
    return 0;
}
