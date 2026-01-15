#include<iostream>

void foo(){
    std::cout << "Print foo" << std::endl;
}

void Printsomething(){
    std::cout << "This fn will print something" << std::endl;
    foo();
}


int main(){

    std::cout << "Start of the main()" << std::endl;

    Printsomething();
    foo();

    std::cout << "End of the main()" << std::endl;
}