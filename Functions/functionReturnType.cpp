#include<iostream>

// void getValueFromUser(){  // void function do not need any return Type

//     std::cout << "Enter an integer :" << std::endl;
//     int input{};
//     std::cin >> input;
// }

// int returnTen(){

//     return 10; // this function is used to return value 10
// }
// int main(){

//     getValueFromUser();
//     int nums{}; // how do we get the user input from the getUserValue fn it will return 0 which then 
//                 //initializes nums with 0
//     std::cout << "Double of the number enterefd by the user is : " << nums * 2 << std::endl;

//     returnTen(); // here the value is returned but the main does not perform anything with this value;
//     std::cout << returnTen() ;

// }

 int getValueFromUser(){

    std::cout << "Enter an integer :" << std::endl;
    int input{};
    std::cin >> input;
    return input;
}


int main(){

    
    int nums{getValueFromUser()}; 
    std::cout << "Double of the number entered by the user is : " << nums * 2 << std::endl;

    return 0; // the reason we always return 0 from main is it represent the status code
}
