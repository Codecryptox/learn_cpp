#include<iostream>

// Function parameter is a variable used in the header of the function.
// Function argument is the value that is passed to the function when it is called.


// when a function is called, the value of the argument is copied into the matching parameter using copy initialization.
// This process is called pass by value. The function works with the copy of the argument, and the original argument remains unchanged.
// function paarameters that utilize pass by value are called value parameters.

void printValue(int x){ // here we are passing the argument x in the function

    std::cout << x << std::endl;
}

int addNum(int x, int y){

    return x + y;
}

int multiply(int x, int y){
    return x * y;
}

int getValueFromUser(){

    std::cout << "Enter an Integer : " ;
    int input{};
    std::cin >> input;
    return input;
}

int doubleNumber(int num){
    return num * 2;
}

int main(){
 
    // printHi();
    printValue(75);
    std::cout << addNum(4,5) << std::endl;
    std::cout << multiply(5,18) << std::endl;
    int x {getValueFromUser()};
    std::cout << x << " Doubled is : " << doubleNumber(x) << std::endl;


    return 0;
}