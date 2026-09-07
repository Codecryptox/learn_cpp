// Bit masking is a technique where you use a value "the mask" To perform operations such as inspect, set, toggle or clear the bits in another value using bitwise operators.
// It also helps us to only modify the specific bits that we need to modify.

/*
The four operators you need:

Operator	Symbol	Use
AND	        &	    Check or clear bits
OR	        |	    Set bits
XOR	        ^	    Toggle bits
NOT	        ~	    Flip all bits (build masks)
Shift	    << >>	Move bits into position
*/

// #include <iostream>

// int main(){

//     // unsigned int flag {0b1010};   // Binary number 1010
//     // unsigned int mask {0b0010};    // Check bit 1 is set or not.

//     // // & keeps only the bits that are 1 in both numbers. If the result isn't zero, that bit was set.
//     // if (flag & mask){
//     //     std::cout << "Bit 1 is set. \n";
//     // }
//     // else{
//     //     std::cout << "Bit 1 is not set. \n";
//     // }

//     // | turns a bit on regardless of its previous state, and leaves other bits untouched.
//     // unsigned int flag {0b0000};
//     // unsigned int mask {0b0010};


//     // flag = flag | mask;

//     // std::cout << "The bit 1 is now set : " << flag << '\n';

//     // ~mask flips the mask so every bit is 1 except the one you want to clear. ANDing with that leaves everything else alone but forces that one bit to 0
//     // unsigned int mask {0b0010};   // This repesent bit 1
//     // unsigned int flag {0b1111}; 

//     // flag = flag & ~mask;  // 1111 & 1101  -> 1101   here you can see the bit 1 is flipped.

//     // ^ flips a bit if the mask bit is 1, and leaves it alone if the mask bit is 0.

//     unsigned int flag{0b1010};
//     unsigned int mask{0b0010};  // bit 1

//     flag = flag ^ mask; // here the bit 1 will be flipped now it will be 0.

//     // Building masks with shifts 
//     // Instead of writing binary literals by hand, you usually generate a mask for "bit N" like this:

//     unsigned int bitN {1 << 3}; // 0b1000    here it represent bit 3.
//     // Here it will be read as 1 is shifted by 3 places.


//     return 0;
// }



// Practical example of bit masking  packing multiple boolean values into single integer instead of of several bool var.

#include <iostream>

enum Permission{

    READ = 1 << 0,    // 0001
    WRITE = 1 << 1,   // 0010
    EXECUTE = 1 << 2, // 0100
    DELETE = 1 << 3   // 1000
};

int main(){

    unsigned int userPerms = READ | WRITE ; // grant read or write.

    // check
    std::cout <<  "Can write ? " << ((userPerms & WRITE) ? "yes" : "no") << '\n';

    // Add a permisiion 
    userPerms |= EXECUTE;

    // Remove a permsion
    userPerms &= ~READ;

    // Toggle a permisiion
    userPerms ^= DELETE;

    std::cout << "Can Read ? " << ((userPerms & READ) ? "yes" : "no") << '\n';

    return 0;

}