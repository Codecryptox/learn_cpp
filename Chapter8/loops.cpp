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
//         ;     so here null statement gets executed infinite times


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

//     int outer{5};
//     while (outer >= 1){
//         int inner{outer};
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
#include <iostream>

int main(){

    int outer{1};
    while (outer <= 5){
        int inner{5};
        while (inner >= 1){

            if(inner <= outer){
                std::cout << inner << ' ';
            }
            else {
            std::cout << " " << ' ';
            }
            --inner;
        }
        
        std::cout << '\n';
        ++outer;
    }
    return 0;
}