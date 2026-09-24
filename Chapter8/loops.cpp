// Loops are control flow statement that allow a piece of code to execute repeatedly until some condition has been met.
// While (condition)      // syntax of while loop
//    statement;

// #include <iostream>

// int main(){

//     int count {1};
//     //int count {15};  the while loops below will not execute if the initial condition is false.
//     while (count <= 10)  
//     {
//         std::cout << count << ' ';
//         ++count;
//     }
//     std::cout << "done \n";

//     /*
//     while (true){
    
//     }   // This is an intentional infinite loop


//     while (count <= 10); This is an unintentional infinte loop here it executes like 
//     while (count <= 10)
//         ;     so here null statement gets executed infinite times and anything will not be printed in the console.


//     // A loop variable is a variable that is used to control how many times a loop executes.   for e.g count , i, j, k
//     // Integral loop variables should be signed.
//     // Each time a loop executes, it is called an iteration.

//     // Loops can be nested inside each other.
//     */
//     return 0;
// }


// Exercise
// Q1
// #include <iostream>

// int main(){

//     char ch = 'a';
//     while (ch <= 'z')
//     {
//         std::cout << ch << " has ASCII Value of " << static_cast<int>(ch) << '\n';
//         ++ch;
//     }

// }


// Q2
/*

5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 

*/
// #include <iostream>

// int main(){

//     int outer{1};
//     while (outer <= 5){
//         int inner{5};
//         while (inner >= outer){
//             std::cout << inner << ' ';
//             --inner;
//         }
//         std::cout << '\n';
//         ++outer;
//     }
//     return 0;
// }

/*
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
*/

// #include <iostream>

// int main(){

//     int outer{5};                                      //  outer 5, inner 5    5 4 3 2 1
//     while (outer >= 1){                                //  outer  4, inner 4   4 3 2 1
//         int inner{outer};                              //  outer 3 , inner 3   3 2 1  ...... so on 
//         while (inner >= 1){
//             std::cout << inner << ' ';
//             --inner;
//         }
//         std::cout << '\n';
//         --outer;
//     }
//     return 0;
// }


// Q3
/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1 
*/
// #include <iostream>

// int main(){

//     int outer{1};
//     while (outer <= 5){                                              // outer 1, inner 5    x x x x 1
//         int inner{5};                                                // outer 2, inner 5    x x x 2 1   so on.
//         while (inner >= 1){

//             if(inner <= outer){
//                 std::cout << inner << ' ';
//             }
//             else {
//             std::cout << " " << ' ';
//             }
//             --inner;
//         }
        
//         std::cout << '\n';
//         ++outer;
//     }
//     return 0;
// }



// A do-while statement just works like while loop except that it always executes atleast once.After the statement is executed it will check the condition.
// #include <iostream>

// int main(){

//     int selection{};

//     do{
//         std::cout << "Select Between 1 to 4 : \n";
//         std::cout << "1) Addition \n";
//         std::cout << "2) Subtraction \n";
//         std::cout << "3) Multiplication \n";
//         std::cout << "4) Division \n";
//         std::cin >> selection;
//     }while (selection < 1 || selection > 4);

//     std::cout << "You selected option #" << selection << '\n';
//     return 0;

// }



// for-loop it is a looping statement that is preferred when we have the intialization , condition and the expression and we want to write them in compact format.
/*
Syntax :
for (init-statement; condition; end-expression)
   statement;

eqivalent syntax in while
{ // note the block here
    init-statement; // used to define variables used in the loop
    while (condition)
    {
        statement; 
        end-expression; // used to modify the loop variable prior to reassessment of the condition
    }
} // variables defined inside the loop go out of scope here

The order of execution for the different parts of a for-statement is as follows:

Init-statement
Condition (if this is false, the loop terminates here).
Loop body
End-expression (then jumps back to condition)

*/

// #include <iostream>
// #include <cstdint>

// std::int64_t pow( int base, int exponent){
//     std::int64_t total{1};

//     for(int i = 0; i < exponent ; ++i){
//         total *= base;
//     }

//     return total;
// }

// int main(){

//     int b{}, e{};

//     std::cout << "Enter the base : \n";
//     std::cin >> b;
//     std::cout << "Enter the exponent : \n";
//     std::cin >> e;
//     std::cout << b << " to the power " << e << " is " << pow(b,e) << '\n';
    
//     return 0;

// }


// we can also decrement using for loop
/*
#include <iostream>

int main()
{
    for (int i{ 9 }; i >= 0; --i)
        std::cout << i << ' ';

    std::cout << '\n';

    return 0;
}

Avoid operator!= when doing numeric comparisons in the for-loop condition. Prefer operator< or operator<= where possible.

infinite for loop

for (;;)
    statement;


for loops with multiple counters
#include <iostream>

int main()
{
    for (int x{ 0 }, y{ 9 }; x < 10; ++x, --y)
        std::cout << x << ' ' << y << '\n';

    return 0;
}

nested for loops

#include <iostream>

int main()
{
	for (char c{ 'a' }; c <= 'e'; ++c) // outer loop on letters
	{
		std::cout << c; // print our letter first

		for (int i{ 0 }; i < 3; ++i) // inner loop on all numbers
			std::cout << i;

		std::cout << '\n';
	}

	return 0;
}
*/

// // Q1

// #include <iostream>

// int main(){

//     for (int i = 0; i <= 20; ++i){
//         if(i%2 == 0){
//             std::cout << i << ' ';
//         }
//     }
//     std::cout << '\n';
//     return 0;
// }


// Q2

// #include <iostream>
// #include <cstdint>

// std::int64_t sumTo( int value){

//     std::int64_t sum{0};
//     for(int i = 0; i <= value; ++i){
//         sum += i;
//     }
//     return sum;
// }

// int main(){

//     int input;
//     std::cout << "Enter User Input value : \n";
//     std::cin >> input;
//     std::cout << "Value of the sum : " << sumTo(input) << '\n';
//     return 0;
// }



// Q3
// #include <iostream>

// void fizzbuzz (int value){
//     for (int i = 1; i <= value; ++i){

//         if(i % 3 == 0 && i % 5 == 0){
//             std::cout << "fizzbuzz\n";
//         }
//         else if(i % 3 == 0){
//             std::cout << "fizz\n";
//         }
//         else if(i % 5 == 0){
//             std::cout << "buzz\n";
//         }

//         else{
//         std::cout << i << '\n';
//         }
//     }
// }
// int main(){

//     int input;
//     std::cout << "Enter User Input : \n";
//     std::cin >> input;
//     fizzbuzz(input);
//     return 0;
// }


// Q4

// #include <iostream>

// void fizzbuzzpop (int value){


//     for (int i = 1; i <= value; ++i){

//         bool divsibleBy3 = (!(i % 3));
//         bool divsibleBy5 = (!(i % 5));
//         bool divsibleBy7 = (!(i % 7));
        
//         if(divsibleBy3){
//             std::cout << "fizz";
//         }
//         if(divsibleBy5){
//             std::cout << "buzz";
//         }
//         if(divsibleBy7){
//             std::cout << "pop";
//         }
//         if(!(divsibleBy3 || divsibleBy5 || divsibleBy7)){
//         std::cout << i;
//         }
//         std::cout << '\n';
//     }
// }
// int main(){

//     int input;
//     std::cout << "Enter User Input : \n";
//     std::cin >> input;
//     fizzbuzzpop(input);
//     return 0;
// }


// Official answer
// h/t to reader Waldo for suggesting this quiz
// #include <iostream>

// void fizzbuzz(int count)
// {
// 	for (int i{ 1 }; i <= count; ++i)
// 	{
// 		bool printed{ false };
// 		if (i % 3 == 0)
// 		{
// 			std::cout << "fizz";
// 			printed = true;
// 		}
// 		if (i % 5 == 0)
// 		{
// 			std::cout << "buzz";
// 			printed = true;
// 		}
// 		if (i % 7 == 0)
// 		{
// 			std::cout << "pop";
// 			printed = true;
// 		}

// 		if (!printed)
// 			std::cout << i;

// 		std::cout << '\n';
// 	} // end for loop
// }

// int main()
// {
// 	fizzbuzz(150);

// 	return 0;
// }



// The break statement causes a while loop, do-while loop, for loop, or switch statement to end, with execution continuing with the next statement after the loop or switch being broken out of.
// A continue statement works while causing the current point of execution to the bottom of the loop
// A return statement cause the current function to stop the execution and provide some data value at the point where the function is called.
// Use break or contnue when they simplify loop logic. same for early return.
#include <iostream>
 
int breakOrReturn ()
{
	while(true) // infinite loop
	{
		std::cout << "Enter 'b' to break and 'r' to Return : \n";
		char ch{};
		std::cin >> ch;

		if(ch == 'b')
			break; // The first statement after the loop will be executed. 

		if(ch == 'r')
			return 1; // the function will be exit and return to it's caller

	}
	std::cout << "We are out of the Loop. \n";
	return 0;
}

int main(){

	int returnValue{breakOrReturn()};
	std::cout << "Function breakOrReturn has returned : " << returnValue << '\n';


	for(int count{}; count < 10; ++count){

		if (count % 4 == 0){
			continue;
		}
		std::cout << count << '\n';
	}
	return 0;
}


