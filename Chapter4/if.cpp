// An if statement allows us to execute one or more line of code only if some condition is true.
// A condition (also called a conditional expression) is an expression that evaluates to a Boolean value.

// Question 1
// #include <iostream>

// bool isPrime (int x){

//     if (x==2 || x==3 || x==5 || x==7){
//         return true;
//     }

//     return false;
// }
// int main(){

//     int num {};
//     std::cout << "Enter an number between 0 and 9 : " << '\n';
//     std::cin >> num;

//     if (num > 0 && num <= 9 ){

//         if(isPrime(num)){
//         std::cout << "The Digit is Prime" << '\n';
//       }

//         else{
//         std::cout << "The Digit is not Prime" << '\n';
//       }
//     }

//     else{
//         std::cout << "Please Enter number between 0 and 9 !!!" << '\n';
//     }


//     return 0;
// }


// Question 2 
#include <iostream>

bool isAllowedToTakeFunRide()
{
  std::cout << "How tall are you? (cm)\n";

  double height{};
  std::cin >> height;

  return height >= 140.0;
}

int main()
{
  if (isAllowedToTakeFunRide())
    std::cout << "Have fun!\n";
  else
    std::cout << "Sorry, you're too short.\n";

  return 0;
}