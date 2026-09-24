// An algorithm is a finite sequence of instructions that can be followed to solve some problem or produce some useful result.
// stateful algo : it stores the info accross the calls; stateless algo : it does not store the info.
// Pseudo random number generator is an technique use to generate random sequence of numbers.
// The value used to set the initial state of the PRNG is called the seed.
// Different kinds of Randomization library in cpp but mostly mersene twister library and rand() is used.

// mt19937 is a Mersenne Twister that generates 32-bit unsigned integers
//mt19937_64 is a Mersenne Twister that generates 64-bit unsigned integers

// Uniform distribution is a distribution that provides random number between two values x and y with equal prob
#include <iostream>
#include <random>
#include <chrono>

int main(){
    // std::mt19937 mt{};
    // std::mt19937 mt{ static_cast<std::mt19937::result_type>(
	// std::chrono::steady_clock::now().time_since_epoch().count()   // here we stored the current time as see in mersene generator
	// ) };

    std::mt19937 mt{std::random_device{}()}; // std::random_device{} creates a value-initialized temporary object of type std::random_device. The () then calls operator() on that temporary object, which returns a randomized value (which we use as an initializer for our Mersenne Twister)

    std::uniform_int_distribution dice{1, 6};
    // for(int i = 1; i <=40; ++i){
    //     std::cout << mt() << '\t'; // generate a random number

    //     if(i % 5 == 0){
    //         std::cout << '\n'; // after 5 numbers print on different line 
    //     }
    // }

        for(int i = 1; i <=40; ++i){
        std::cout << dice(mt) << '\t'; // generate a random number

        if(i % 10 == 0){
            std::cout << '\n'; // after 5 numbers print on different line 
        }
    }
}