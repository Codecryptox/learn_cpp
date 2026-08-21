#include <iostream>


int main(){

    std::cout << "Enter a Number : ";

    int num;
    std::cin >> num;

    std::cout << "Double of " << num << " is : " << num * 2 << std::endl;

    std::cout << "Triple of " << num << " is : " << num * 3 << std::endl;
    return 0;
}