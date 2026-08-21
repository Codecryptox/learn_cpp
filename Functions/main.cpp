#include <iostream>
#include "calculate.h"

int getIntegerFromUser();

int main(){

    int x {getIntegerFromUser()};
    int y {getIntegerFromUser()};
    std:: cout << "Addition of " << x << " and " << y << " is : " << add(x,y) << '\n';
    std:: cout << "Subtraction of " << x << " and " << y << " is : " << subtract(x,y) << '\n';
    std:: cout << "Multiplication of " << x << " and " << y << " is : " << multiply(x,y) << '\n';
    std:: cout << "Division of " << x << " and " << y << " is : " << divide(x,y) << '\n';
    return 0;
}