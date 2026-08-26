#include <iostream>

int main(){

    double d1 {}, d2 {};
    char op {};
    std::cout << "Enter a double value : ";
    std::cin >> d1;
    std::cout << "\n Enter a double value : ";
    std::cin >> d2;
    std::cout << "\n Enter +, -, *, or /: ";
    std::cin >> op;
    std::cout << '\n';
    if(op == '+'){
      std::cout << d1 << op << d2 << " is " << d1+d2;
    }
    else if(op == '-'){
      std::cout << d1 << op << d2 << " is " << d1-d2;
    }
    else if(op == '*'){
      std::cout << d1 << op << d2 << " is " << d1*d2;
    }
    else if(op == '/'){
      std::cout << d1 << op << d2 << " is " << d1/d2;
    }
    std::cout << '\n';
    return 0;

}