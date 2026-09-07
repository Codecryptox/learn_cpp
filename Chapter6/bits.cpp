// In modern computer architecture smallest addressable memory unit is byte.
// Each byte can hold 8 bits which is a waste for boolean type as they only need single bit so,  
// we use std::bitset to represent the 8 bit boolean values. It is used only for spped optimization not for memory optimization.
// Modifying individual bits within an object is called as bit manipulation.
// Individual bits of an object used to store the boolean values are called as bit flags
// 1 - set bit, true, on   and 0 - unset bit, false, off.
// test


/*
Operator	 Symbol	    Form	    The operation returns a value where:
left shift	    <<	    x << n	    the bits from x are shifted left by n positions, new bits are 0.
right shift	    >>	    x >> n	    the bits from x are shifted right by n positions, new bits are 0.
bitwise NOT	    ~	    ~x	        each bit from x is flipped.
bitwise AND	    &	    x & y	    each bit is set when both corresponding bits in x and y are 1.
bitwise OR	    |	    x | y	    each bit is set when either corresponding bit in x and y is 1.
bitwise XOR	    ^	    x ^ y	    each bit is set when the corresponding bits in x and y are different.
*/


#include <iostream>
#include <bitset>

int main(){

    std::bitset<8> bits{0b0000'1101};
    bits.set(1);                            // set() converts the 0 bits into 1 and if it already 1 then no change
    // 0000 1111
    bits.flip(2);                           // flip() converts the 0 bit into 1 and vice versa 1 bit to 0
    //0000 1011
    bits.reset(3);                          // reset() converts the 1 bit into 0 and if the bit is 0 then no change
    // 0000 0011
    std::cout << "All the bits are : " << bits << '\n';            
    std::cout << "bit(3) has value : " << bits.test(3) << '\n';    // test() used to test whether a bit is 0 or 1.


    std::cout << bits.size() << " bits are in the bitset." <<'\n';  // size() used to return the total no bits in the bitset
    std::cout << bits.count() << " bits are set to true." <<'\n';   // count() used to return the total no set bits in the bitset.

    std::cout << "All bits are true : " << bits.all() << '\n';    // all() checks whether all the bits are true in the bitset
    std::cout << "Some of the bits are true : " << bits.any() << '\n'; // any() checks whether any of the bits is true 
    std::cout << "none of the bits are true : " << bits.none() << '\n'; // none() checks whether none of the bits is set to true.


    // The bits that are shifted to the end of the bitset size are lost. 
    // how does operator<< know to shift bits in one case and output x in another case? The answer is that it looks at the type of the operands.
    // If the left operand is an integral type, then operator<< knows to do its usual bit-shifting behavior. 
    // If the left operand is an output stream object like std::cout, then it knows it should do output instead.
    std::bitset<4> mybits{0b1001};

    std::cout << mybits << '\n';
    std::cout << "Right Shift by 1 : " << (mybits >> 1) << '\n';      // 0100
    std::cout << "Left Shift by 1 : " << (mybits << 1) << '\n';       // 0010

    /*
    The bitwise NOT operator (~) is conceptually straightforward: It simply flips each bit from a 0 to a 1, or vice versa.

    ~0011 is 1100
    ~0000 0100 is 1111 1011
    */

   std::cout << "Not Operator : " << ~mybits << '\n'; // 0110

   /*
    Bitwise OR (|) works much like its logical OR counterpart. If you remember, logical OR evaluates to true (1) if either of the operands are true, otherwise it evaluates to false (0).
    0 1 0 1 OR
    0 1 1 0
    -------
    0 1 1 1
   */

   /*
   Bitwise AND (&) works similarly to the above, except it uses AND logic instead of OR logic. That is, for each pair of bits in the operands, Bitwise AND sets the resulting bit to true (1) if both paired bits are 1, and false (0) otherwise.
    0 1 0 1 AND
    0 1 1 0
    --------
    0 1 0 0
   */

   /*
   The last operator is the bitwise XOR (^), also known as exclusive or.
   For each pair of bits in the operands, Bitwise XOR sets the resulting bit to true (1) when exactly one of the paired bits is 1, and false (0) otherwise. 
   Put another way, Bitwise XOR sets the resulting bit to true when the paired bits are different (one is a 0 and the other a 1).

    0 1 1 0 XOR
    0 0 1 1
    -------
    0 1 0 1

    0 0 0 1 XOR
    0 0 1 1 XOR
    0 1 1 1
    --------
    0 1 0 1

   */

   // Avoid bit shifting on integral types smaller than int whenever possible.


   std::bitset<4> a{0b1001};
   std::bitset<4> b{0b0101};

   std::cout << "AND Operator : " << (a & b) << '\n';  // 0001
   std::cout << "OR  Operator : " << (a | b) << '\n';  // 1101
   std::cout << "XOR Operator : " << (a ^ b) << '\n';  // 1100


   // Bitwise assignment operators
   /*
   Operator	       Symbol	 Form	            The operation modifies the left operand where:
    left shift	    <<	    x <<= n	    the bits in x are shifted left by n positions, new bits are 0.
    right shift	    >>	    x >>= n	    the bits in x are shifted right by n positions, new bits are 0.
    bitwise AND	    &	    x &= y	    each bit is set when both corresponding bits in x and y are 1.
    bitwise OR	    |	    x |= y	    each bit is set when either corresponding bit in x and y is 1.
    bitwise XOR	    ^	    x ^= y	    each bit is set when the corresponding bits in x and y are different.
   */

   std::bitset<4> x{0b0110};
   x>>=1;
   std::cout << "Right shift assignmnet operator : " << x << '\n';

    return 0;
}



// Exercise
// #include <bitset>
// #include <iostream>

// // "rotl" stands for "rotate left"
// // Here the bits does not vanish for e.g if we do left shift on 1001 it gives 0010
// // but in rotate left the value should get to the end 0011.
// std::bitset<4> rotl(std::bitset<4> bits)
// { 
//   const bool leftbit = bits.test(3);  // Keep track of left most bit
//   bits <<= 1;  // do a left shift

//   if(leftbit){  // if leftmost bit was 1 set the right most bit to 1
//     bits.set(0);
//   }
  
//   return bits;
  
// }

// int main()
// {
// 	std::bitset<4> bits1{ 0b0001 };
// 	std::cout << rotl(bits1) << '\n';

// 	std::bitset<4> bits2{ 0b1001 };
// 	std::cout << rotl(bits2) << '\n';

// 	return 0;
// }