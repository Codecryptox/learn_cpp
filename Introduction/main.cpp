
// This is a preprocessor directive that indicates we would like 
// to use the contents of the iostream library.

#include<iostream> 

/* to run a cpp program in you have to use the following command :
 * g++ your_program.cpp -o your_program 
 * your_program
 * (Here g++ is the compiler for cpp and your program.cpp is input file)
 * -o stands for output exceutable file then the file name you can name it anything 
 * type the name of excetutable to run it on windows
*/

// This is where the main exceution of the C++ program begins 
// every c++ program must have a main function
int main(){
    std::cout << "It prints some text" << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}